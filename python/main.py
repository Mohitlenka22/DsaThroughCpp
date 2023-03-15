import matplotlib.pyplot as plt
import pandas as pd

df = pd.read_csv('data.csv')
print(df.head())
plt.plot(df['X'],df['Y'])
plt.show()
# print(df['x'].values)
