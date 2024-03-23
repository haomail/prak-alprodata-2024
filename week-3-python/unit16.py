import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt
# Bacalah data marketing csv
pasar = pd.read_csv('DataMarketing.csv')
# Mengubah data Penghasilan ke dalam bentuk array
x = pasar['Penghasilan'].array
# Carilah fungsi mean dan median dari data kolom Penghasilan
mean = pasar['Penghasilan'].mean()
median = pasar['Penghasilan'].median()
plt.axvline(mean, color = 'k', linewidth = 4, linestyle = '--')
plt.axvline(median, color = 'r', linewidth = 4, linestyle ='--')
# Buatlah tabel distribusi dari data kolom Penghasilan
sns.histplot(x)
plt.show