# y(n) = x(n)*h(n)
import scipy.signal as signal
import numpy as np
x = [-1, 2, 0, 1]
h = [3, 1, 0, -1]
y = signal.convolve(x, h)
print(f"Nilai konvolusi dari y(n) = x(n)*h(n) adalah : \n{y}")