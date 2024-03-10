#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
//Deklarasikan nama variabel dari nama, keterangan, dan kode serta nilai elemen di
dalam char
char __ [__], __ [__], __ ;
printf("Masukkan nama mahasiswa: ");
scanf("%s", &__);
printf("Pilih kode Program Studi[A / B / C / D] : ");
__ = getche();
switch (__)
{
case 'A':
strcpy(__, "Program Studi Teknik Perkapalan");
break;
case 'B':
strcpy(__, "Program Studi Teknik Industri");
break;
case 'C':
strcpy(__, "Program Studi Teknik Mesin");
break;
case 'D':
strcpy(__, "Program Studi Teknik Elektro");
break;
case 'a':
strcpy(__, "Program Studi Teknik Perkapalan");
break;
case 'b':
strcpy(__, "Program Studi Teknik Industri");
break;
case 'c':
strcpy(__, "Program Studi Teknik Mesin");
break;
case 'd':
strcpy(__, "Program Studi Teknik Elektro");
break;
default:
strcpy(__, "Program Studi Tidak Ditemukan");
break;
}
printf("\n\nNama Mahasiswa: %s \n", __);
printf("Kode Program Studi: %c \n", __);
printf("Nama Program Studi: %s \n", __);
getch();
return 0;
}