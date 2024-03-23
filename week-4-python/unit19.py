import sympy as sym
t = sym.symbols('t')
a = sym.symbols('a', positive=True)
k = sym.symbols('k')
fungsi = sym.exp(-a*t)*sym.Heaviside(t)
fungsi_fourier = sym.fourier_transform(fungsi, t, k)
fungsi_fourier