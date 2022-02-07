#include <iostream>
using namespace std;
int main () {
	
double a,b;
int secim;

cout<<"Birinci sayiyi giriniz : ";
cin>>a;
cout<<"Ikinci sayiyi giriniz : ";
cin>>b;

while ( a==0 || b==0) {
  	cout<<"Lutfen 0'dan farkli bi deger giriniz.";
	
cout<<"\nBirinci sayiyi giriniz : ";
cin>>a;
cout<<"Ikinci sayiyi giriniz : ";
cin>>b;	
}

while(secim<1 && secim>5) {
	cout<<"Lutfen 1 ve 5 arasında bir secim yapiniz"<<"\nSecim";
	cin>>secim;
}

cout<<"Islem seciniz  ";
cout<<"\n1-Toplama islemi"<<"\n2-Cikarma islemi"<<"\n3-Carpma islemi"<<"\n4-Bolme islemi"<<"\n5-Cikis yapiniz";
cout<<"\nSeciminiz : ";
cin>>secim;

if(secim==1){
	cout<<a<<"+"<<b<<"="<<a+b;
}
else if(secim==2) {
	cout<<a<<"-"<<b<<"="<<a-b;
}
else if (secim==3) {
	cout<<a<<"*"<<b<<"="<<a*b;	
}
else if(secim==4){
	cout<<a<<"/"<<b<<"="<<a/b;
}
else {
	cout<<"Cikis yaptiniz.";
}
return 0;
}
