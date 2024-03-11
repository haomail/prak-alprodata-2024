//Program untuk menghitung nilai pangkat menggunakan fungsi rekursi
#include <stdio.h>
int power(int n1, int n2);
int main()
{
    //Isilah garis kosong dibawah untuk membuat program bekerja
    int recursion, n1, n2;
    printf("Enter base number: ");
    scanf("%d", &n1);
    printf("Enter power number(positive integer): ");
    scanf("%d", &n2);
    recursion = power(n1, n2);
    printf("%d^%d = %d", n1, n2, recursion);
    return 0;
    }
int power(int n1, int n2)
{
    if (n2 != 0)
        return (n1 * power(n1, n2 - 1));
    else
        return 1;
}