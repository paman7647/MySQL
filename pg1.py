employees = {
    "Rahul": 45000,
    "Priya": 65000,
    "Amit": 52000,
    "Sneha": 40000,
    "Raj": 72000
}

print("Employees earning more than 50000")

for name, salary in employees.items():

    if salary > 50000:
        print(name)
