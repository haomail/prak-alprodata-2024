import numpy as np
import matplotlib.pyplot as plt
t = np.linspace(0, 100, 40)
plt.axvline(x = 0, color = 'k')
plt.axhline(y = 0, color = 'k')
plt.xlabel('Time (s)')
plt.ylabel('f(t)')

sum = 0
amplitudo = int(input("Masukkan nilai amplitudo: "))
periode = int(input("Masukkan nilai T : "))
n = int(input("Masukkan banyaknya aproksimasi : "))
for angka in range(1, n):
    # Masukkan fourier transform di bawah
    sum = sum + amplitudo/np.pi*((np.sin(angka*2*np.pi/periode*t))/angka)
    # Masukkan nilai t sebagai x dan Sum sebagai Y
    plt.plot(t, sum)

