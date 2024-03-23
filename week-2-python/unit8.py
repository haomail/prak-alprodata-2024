# Menghitung jumlah dari barisan aritmatik ( Un )
# Nilai a (nilai awal), b (beda) dan n (nilai ke-n) dari input pengguna

a = int(input("Masukkan nilai a : "))
b = int(input("Masukkan nilai b: "))
n = int(input("Masukkan nilai n : "))

for i in range(n+1):
# Rumus dari Un aritmatika adalah Un = a + b(n-1)
    Un = a + b*(i-1)
    i = i + 1

print(f"Nilai Un adalah : {Un}")

"""
i = 0, i = 1, un = 2
i = 1, i = 2, un = 6
i = 2, i = 3, un = 10
i = 3, i = 4, un = 14
i = 4, i = 5, un = 18
"""
