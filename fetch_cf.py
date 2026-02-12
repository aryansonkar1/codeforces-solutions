import requests
import os
import re

HANDLE = "aryansonkar1"   # <-- replace with your real Codeforces handle

url = f"https://codeforces.com/api/user.status?handle={HANDLE}&count=1000"
response = requests.get(url).json()

if response["status"] != "OK":
    print("Error fetching submissions")
    exit()

submissions = response["result"]
solved = set()

for sub in submissions:
    if sub.get("verdict") != "OK":
        continue

    problem = sub["problem"]

    if "rating" not in problem:
        continue

    contest_id = problem["contestId"]
    index = problem["index"]

    if (contest_id, index) in solved:
        continue
    solved.add((contest_id, index))

    rating = problem["rating"]
    name = problem["name"]

    clean_name = re.sub(r'[^\w\s-]', '', name).replace(" ", "_")

    folder = str(rating)
    os.makedirs(folder, exist_ok=True)

    filename = f"{folder}/{contest_id}_{index}_{clean_name}.cpp"

    if os.path.exists(filename):
        continue

    with open(filename, "w", encoding="utf-8") as f:
        f.write(f"// Problem: {name}\n")
        f.write(f"// Contest ID: {contest_id}\n")
        f.write(f"// Rating: {rating}\n")
        f.write(f"// Link: https://codeforces.com/contest/{contest_id}/problem/{index}\n\n")
        f.write("#include <bits/stdc++.h>\nusing namespace std;\n\nint main(){\n\n    return 0;\n}\n")

print("Sync completed successfully!")
