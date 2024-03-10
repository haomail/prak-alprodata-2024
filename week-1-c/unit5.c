// Program untuk membuat matriks
#include <stdio.h>
int main()
{
    // Isilah garis kosong dibawah untuk dapat membuat program bekerja
    int a[100][100];
    int __, __, __, __;
    /* menentukan banyaknya baris & kolom matriks */
    printf("Matriks berordo m x n \n");
    printf("------------------------\n\n");
    printf("Masukkan banyaknya baris (m): ");
    scanf("%d", &__);
    printf("Masukkan banyaknya kolom (n): ");
    scanf("%d", &__);
    printf("\n");
    /* input elemen matriks */
    for (__ = 0; __ < __; __++)
    {
    for (__ = 0; __ < __; __++)
    {
    printf("Elemen matrik A[%d %d]: ", __ + 1, __ + 1);
    scanf("%d", &a[__][__]);
    }
    }
    /* menampilkan elemen matriks */
    printf("\n");
    printf("Matriks A = \n");
    for (__ = 0; __ < __; __++)
    {
    for (__ = 0; __ < __; __++)
    {
    printf("%3d", a[__][__]);
    }
    printf("\n");
    }
}