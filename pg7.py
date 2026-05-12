import numpy as np

scores = np.random.randint(0,101,20)

print("Student Test Scores")

print(scores)

print("Highest Score :", np.max(scores))
print("Lowest Score :", np.min(scores))
print("Mean Score :", np.mean(scores))
print("Standard Deviation :", np.std(scores))
