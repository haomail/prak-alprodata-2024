// Program untuk membuat matriks
#include <stdio.h>
int main()
{
    // Isilah garis kosong dibawah untuk dapat membuat program bekerja
    int a[100][100];
    int i, j, m, n;
    /* menentukan banyaknya baris & kolom matriks */
    printf("Matriks berordo m x n \n");
    printf("------------------------\n\n");
    printf("Masukkan banyaknya baris (m): ");
    scanf("%d", &m);
    printf("Masukkan banyaknya kolom (n): ");
    scanf("%d", &n);
    printf("\n");
    /* input elemen matriks */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
        printf("Elemen matrik A[%d %d]: ", i + 1, j + 1);
        scanf("%d", &a[i][j]);
        }
    }
    /* menampilkan elemen matriks */
    printf("\n");
    printf("Matriks A = \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
        printf("%3d", a[i][j]);
        }
    printf("\n");
    }
}