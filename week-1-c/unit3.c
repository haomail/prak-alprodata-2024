//Program untuk mengidentifikasi harga menu dari input angka yang diberikan
pengguna
#include <stdio.h>
int main()
{
//Isi garis kosong dibawah untuk membuat program bekerja
int __;
do
{
printf("DAFTAR MENU MAKANAN \n");
printf("------------------------------\n");
printf("1.\tPaket Ayam Goreng\n");
printf("2.\tPaket Ayam Bakar\n");
printf("3.\tPaket Ayam Geprek\n");
printf("4.\tPaket Ayam Penyet\n");
printf("\nMasukkan pilihan Anda (0=selesai): ");
scanf("%d", &__);
switch (__)
{
case 1:
printf("Harga Paket Ayam Goreng Rp20.000\n");
break;
case 2:
printf("Harga Paket Ayam Bakar Rp20.000\n");
break;
case 3:
printf("Harga Paket Ayam Bakar Rp20.000\n");
break;
case 4:
printf("Harga Paket Ayam Bakar Rp20.000\n");
break;
case 0:
printf("Selesai\n");
break;
default:
printf("Pilihan hanya 1 - 4, pilih 0 jika ingin selesai");
break;
}
} while (__ != 0);
return 0;
}