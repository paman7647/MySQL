import csv

filename = "exp.csv"

try:

    with open(filename, "r") as file:

        reader = csv.reader(file)

        header = next(reader)

        print("CSV Header:", header)

        for row in reader:

            experiment_id = row[0]
            value = float(row[1])

            print(f"{experiment_id} : {value}")

except FileNotFoundError:

    print("CSV file not found")

except csv.Error:

    print("CSV formatting error")

except ValueError:

    print("Invalid number format")
