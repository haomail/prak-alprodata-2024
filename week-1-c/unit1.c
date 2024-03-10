// Program untuk menghitung Luas Area dari suatu lingkaran
#define phi 3.141597
int main()
{
// Isilah garis kosong dibawah dengan benar
// Deklarasikan variabel luas, jari-jari dan keliling untuk dapat membuat program bekerja
float L, K, r;
printf("Masukan nilai jari - jari lingkaran: ");
scanf("%f", &r);
L = phi * (r * r);
K = 2 * phi * r;
printf("\nLuas lingkaran dengan jari - jari % f adalah: % f ", r, L);
printf("\nKeliling lingkaran dengan jari - jari %f adalah: %f", r, K);
return 0;
}