//Program untuk menghitung nilai pangkat menggunakan fungsi rekursi
#include <stdio.h>
int power(int n1, int n2);
int main()
{
//Isilah garis kosong dibawah untuk membuat program bekerja
int _, _, _;
printf("Enter base number: ");
scanf("%d", &_);
printf("Enter power number(positive integer): ");
scanf("%d", &_);
_ = power(_, _);
printf("%d^%d = %d", _, _, _);
return 0;
}
int power(int _, int _)
{
if (_ != 0)
return (_ * power(_, _ - 1));
else
return 1;
}