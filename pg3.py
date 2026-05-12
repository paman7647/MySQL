import pandas as pd

data = {
    "Movie": ["A", "B", "C", "D", "E"],
    "Genre": ["Action", "Comedy", "Action", "Drama", "Comedy"],
    "Rating": [4.2, 3.8, 4.0, 4.5, 4.1]
}

df = pd.DataFrame(data)

avg = df.groupby("Genre")["Rating"].mean()

print(avg)
