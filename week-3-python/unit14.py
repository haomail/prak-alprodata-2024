import numpy as np
import matplotlib.pyplot as plt
ax = plt.axes(projection='3d')
# Buatlah interval dari sumbu x dan y [-100,100] dengan kenaikan per 100
xn = np.linspace(-100, 100, 100)
yn = np.linspace(-100, 100, 100)
X, Y = np.meshgrid(xn, yn)
ax.set_xlabel("Sumbu-X")
ax.set_ylabel("Sumbu-Y")
ax.set_title("Z = f(x,y) = x^2 + y^2")
# Buatlah fungsi Z = x^2 + y^2 dari nilai yang telah di meshgrid
Z = X**2 + Y**2
ax.plot_surface(X, Y, Z, cmap="jet")
plt.show()