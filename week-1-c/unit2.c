#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    //Deklarasikan nama variabel dari nama, keterangan, dan kode serta nilai elemen di dalam char
    char name[50], desc[32], code;
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", &name);
    printf("Pilih kode Program Studi[A / B / C / D] : ");
    code = getche();
    switch (code)
    {
    case 'A':
    strcpy(desc, "Program Studi Teknik Perkapalan");
    break;
    case 'B':
    strcpy(desc, "Program Studi Teknik Industri");
    break;
    case 'C':
    strcpy(desc, "Program Studi Teknik Mesin");
    break;
    case 'D':
    strcpy(desc, "Program Studi Teknik Elektro");
    break;
    case 'a':
    strcpy(desc, "Program Studi Teknik Perkapalan");
    break;
    case 'b':
    strcpy(desc, "Program Studi Teknik Industri");
    break;
    case 'c':
    strcpy(desc, "Program Studi Teknik Mesin");
    break;
    case 'd':
    strcpy(desc, "Program Studi Teknik Elektro");
    break;
    default:
    strcpy(desc, "Program Studi Tidak Ditemukan");
    break;
    }
    printf("\n\nNama Mahasiswa: %s \n", name);
    printf("Kode Program Studi: %c \n", code);
    printf("Nama Program Studi: %s \n", desc);
    getch();
    return 0;
}