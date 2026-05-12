import csv
import matplotlib.pyplot as plt

months = []
temps = []

with open("temp.csv", "r") as file:

    reader = csv.reader(file)

    next(reader)

    for row in reader:

        months.append(row[0])
        temps.append(float(row[1]))

plt.bar(months, temps)

plt.xlabel("Month")
plt.ylabel("Temperature")
plt.title("Average Monthly Temperature")

plt.xticks(rotation=45)

plt.show()
