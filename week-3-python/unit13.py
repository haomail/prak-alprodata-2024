import numpy as np
# Diketahui v(t) = 50∠30, L = 20.10^(-3), C = 50.10^(-6)
# Masukkan nilai C, L dan f
f = ___
C = ___
L = ___
W = ___
R = ___
# Menghitung nilai masing-masing impendansi
# Ingat ZL = 1j*W*L, ZC = -1j/(W*C), ZR = R
ZL = ___
ZC = ___
ZR = ___
def ke_kompleks(amplitudo, sudut):
# A∠θ = A(cos(θ) + j*sin(θ))
real = amplitudo * np.cos(sudut * (np.pi/180))
imajiner = 1j*amplitudo * np.sin(sudut * np.pi/180)
# Tambahkan bilangan real dan imajiner
bilangan_kompleks = ___ + ___
return bilangan_kompleks
def ke_polar(fungsi_kompleks):
# Fungsi kompleks = A(cos(θ) + j*sin(θ))
#Amplitudo (A) = akar(real^2(fungsi_kompleks) + imajiner^2(fungsi_kompleks))
# Sudut(θ) = tan^(-1)(bilangan_imajiner/bilangan_real)
amplitudo = np.sqrt(np.real(___)**2 + np.imag(___)**2)
sudut = np.angle(fungsi_kompleks, deg=True)
# Membulatkan 2 digit dibelakang 0
bilangan_polar = str(round(amplitudo, 2)) + '∠' + str(round(sudut, 2))
return bilangan_polar
# Ztot = ZL + ZC + ZR
Ztot = ______
# Mengubah v ke dalam kompleks
v = ke_kompleks(50, 30)
# Arus = v / ztot
arus = ____
arus_dalam_polar = ke_polar(arus)
print(f"Nilai arus dalam polar adalah : {arus_dalam_polar}")