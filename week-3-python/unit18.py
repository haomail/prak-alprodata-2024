import seaborn as sns
import pandas as pd
import matplotlib.pyplot as plt
pasar = pd.read_csv('DataMarketing.csv')
# Membuat suatu multi-plot 2x2
fig, axis = plt.subplots(2,2, figsize = (12, 7))
# Buatlah grafik boxplot
sns.boxplot( y = 'Penghasilan', x = 'Nama Hari', data = pasar, ax = axis[0,0])
# Buatlah grafik lineplot
sns.lineplot( y = 'Penghasilan', x = 'Nama Hari', data = pasar, ax = axis[0,1])
# Buatlah grafik Scatterplot
sns.scatterplot( y = 'Penghasilan', x = 'Nama Hari', data = pasar, ax = axis[1,0])
# Buatlah grafik Barplot
sns.barplot( y = 'Penghasilan', x = 'Nama Hari', data = pasar, ax = axis[1,1])