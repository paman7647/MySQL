from datetime import datetime

dateString = datetime.now().ctime()

print(f"--- Journaling for {dateString} ---")

print("Write your entry and type 'SAVE' to finish")

with open("journal.txt", "a") as file:

    file.write(f"\n{'='*30}\n")
    file.write(dateString + "\n")
    file.write(f"{'='*30}\n")

    while True:

        line = input()

        if line.upper() == "SAVE":
            break

        file.write(line + "\n")

print("SAVED")
