//Program Tabel Perkalian//
//Shabian Arsyl Yonanta//
//20051397032//
//MI 2020B//

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int angkaKolom,angkaBaris,b,k;
char ulang;
	system ("color 74");
	menu:
	system ("cls");
	cout<<("========================\n");
	cout<<("PROGRAM TABEL PERKALIAN") << endl;
	cout<<("========================\n");
    printf("Masukan Nilai (Baris) : ");scanf("%d", &b);
    printf("Masukan Nilai (Kolom) : ");scanf("%d", &k);
    for(angkaKolom=1;angkaKolom<=b;angkaKolom++){
        for(angkaBaris=1;angkaBaris<=k;angkaBaris++){
            printf("%d\t", angkaBaris*angkaKolom);
        }
        printf("\n");
    }
cout<<endl<<"==================================" <<endl;
cout<<"Ingin mengulang? [Y/T] ";cin>>ulang;
	if (ulang == 'Y'||ulang == 'y')
    goto menu;
        else goto keluar;
        keluar:
        cout<< "\n Terima kasih.";
}
