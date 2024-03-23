import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
# Buatlah suatu interval dari [-2π, 2π] yang dibagi ke dalam 100
x = np.linspace(-2*np.pi, 2*np.pi, 100)
# Buatlah suatu fungsi sin(2x + 90)
y = np.sin(2*x+90)
# Buatlah suatu dictionary dataframe
dataframe = {
    "Nilai x " : x,
    "f(x)" : y
}
# Buatlah suatu dataframe menggunakan pandas
df_fungsi = pd.DataFrame(dataframe)
# Menampilkan tabel dataframe
df_fungsi