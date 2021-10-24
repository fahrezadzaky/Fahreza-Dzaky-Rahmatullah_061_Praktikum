#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"----------------------------------------"<<endl;
	cout<<"Program Menghitung Jumlah 6 Suku Pertama"<<endl;
	cout<<"----------------------------------------"<<endl;
	
	int jumlahderet,i;
	
	cout<<"Jumlah Deret Yang diinginkan:1 pangkat 3,2 pangkat 3, 3 pangkat 3, 4 pangkat 4";
	cin>>jumlahderet;
	
	for(i=1; i<=jumlahderet;i++)
	{
		cout<<i*i*i;
		}	
	cout<<endl;
	return(0);
	
 } 
