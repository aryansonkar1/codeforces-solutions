import requests
import os
from datetime import datetime

HANDLE = "Aryansonkar1"

url = f"https://codeforces.com/api/user.status?handle={HANDLE}&count=5000"
response = requests.get(url).json()

if response["status"] != "OK":
    print("Error fetching submissions")
    exit()

submissions = response["result"]
solved = {}
max_rating = 0

for sub in submissions:
    if sub.get("verdict") != "OK":
        continue

    problem = sub["problem"]

    if "rating" not in problem:
        continue

    contest_id = problem["contestId"]
    index = problem["index"]

    key = (contest_id, index)
    if key in solved:
        continue

    rating = problem["rating"]
    solved[key] = rating
    max_rating = max(max_rating, rating)

total_solved = len(solved)
last_sync = datetime.utcnow().strftime("%d %b %Y")

readme_content = f"""
# 🚀 Codeforces Solutions

This repository contains my accepted solutions from Codeforces, 
automatically synchronized using Codeforces API and GitHub Actions.

The problems are categorized based on their difficulty rating 
to maintain a clean and structured archive.

---

🟢 **Total Problems Solved:** {total_solved}  
🔵 **Max Rating Solved:** {max_rating}  
📅 **Last Sync:** {last_sync}

---

> Maintained by Aryan Sonkar
"""

with open("README.md", "w", encoding="utf-8") as f:
    f.write(readme_content)

print("README updated successfully!")
