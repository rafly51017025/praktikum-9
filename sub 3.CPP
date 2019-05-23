#include<iostream.h>
int bil,pangkat;
int perpangkatan();
int main()
{
cout<<"masukan bilangan yang ingin dipangkatkan : ";
cin>>bil;
cout<<"masukan pangkat dari bilangan tersebut : ";
cin>>pangkat;
cout<<"Hasilnya adalah : "<<perpangkatan();
return (0);
}
int perpangkatan()
{ int i, hasil=1;
if(pangkat < 0)
hasil=0;
else
{for (i=0; i<pangkat; i++)
hasil*=bil;
}
return(hasil);
}