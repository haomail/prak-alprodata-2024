import sympy as sym
t = sym.symbols('t')
s = sym.symbols('s')
fungsi = 3*t**2
fungsi_laplace = sym.laplace_transform(fungsi, t, s, noconds = True)
fungsi_laplace