#include<iostream.h>
#include<conio.h>
#include<math.h>

int panjang, lebar;
void input();
void Luas()
{
int ls;
ls = panjang * lebar;
cout<<"luasnya adalah :"<<ls;
}
void Keliling()
{
int kl;
kl = (2*panjang) + (2*lebar);
cout<<"kelilingnya adalah : "<<kl;
}
void Diagonal()
{
float dg;
dg = sqrt((panjang*panjang)+(lebar*lebar));
cout<<"diagonalnya adalah : "<<dg;
}
void main()
{
int pilih;
do {
clrscr();
cout<<"pililah ---------> " <<endl;
cout<<"1. luas persegi panjang \n";
cout<<"2. keliling persege panjang \n";
cout<<"3. diagonal persegi panjang \n";
cout<<"4. SELESAI \n";
cout<<"Masukan pilihan anda : ";
cin>>pilih;
if(pilih !=4)
input();
switch (pilih)
{
case 1 : Luas();
			break;
case 2 : Keliling();
			break;
case 3 : Diagonal();
			break;
case 4 : cout<<"Terima kasih ..!";
}
getch();
} while (pilih !=4);
}
void input()
{
cout<<"masukan nilai panjang :";
cin>>panjang;
cout<<"masukan nilai lebar : ";
cin>>lebar;
return;
}