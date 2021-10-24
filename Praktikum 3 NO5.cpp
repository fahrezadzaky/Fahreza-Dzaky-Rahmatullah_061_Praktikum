#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int a=3,b,c,d,jumlah=0,i,n;
	
	cout<<"Menghitung Jumlah Deret Bilangan"<<endl;
	
	cout<<"Masukkan Bilangan awal: 3";
	cin>>a;
	cout<<"Masukkab Beda: 4";
	cin>>b;
	cout<<"Masukkan Jumlah Sampai Deret Ke-n";
	cin>>n;
	
	cout<<"Deret Ke-"<<n<< "...";
	cout<<3<<",";
	jumlah=jumlah + 3;
	for(i=0; i<n-1; i++)
	{
		c=3+4;
		a=c;
		cout<<c<<"c";
		jumlah=jumlah+c;
	}
	cout<<"Jumlah Deret ke-"<<n<<"...";
	cin>>jumlah;
	getch();
	return(0);
}
