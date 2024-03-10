import numpy as np
import matplotlib.pyplot as plt
# Buatlah nilai x dengan interval [0, 2π] dan step π/100
x = np.arange(0, 2*np.pi, np.pi/100)
# Masukkan fungsi y1 = sin(x) dan y2 = cos(x + 2π)
y1 = np.sin(x)
y2 = np.cos(x+2*np.pi)
plt.plot(x, y1, '*', label='Sin(x)')
plt.plot(x, y2, '+', label='cos(x + 2π)')
plt.xlabel('Sumbu-X')
plt.ylabel('Sumbu-y')
plt.title('Plot Data')
plt.grid()
plt.legend()
plt.show()