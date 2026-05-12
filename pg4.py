import matplotlib.pyplot as plt

ages = [18,22,25,30,35,40,45,50,28,32,37,42,47]

plt.hist(ages, bins=5)

plt.xlabel("Age")
plt.ylabel("Participants")
plt.title("Age Distribution")

plt.show()
