#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

int main()
{
    char jenis_pot[3], *ket[6];
    int i, jenis, banyak_pot[3];
    float hrg_1[3],jum[10],tot_byr, pajak, jum_byr;
   
   cout<<"GEROBAK FRIED CHICKEN"<<endl;
   cout<<"---------------------"<<endl;
   cout<<"Kode\tJenis\tHarga"<<endl;
   cout<<"-------------------------"<<endl;
   cout<<"  D\tDada\tRp. 2500"<<endl;
   cout<<"  P\tPaha\tRp. 2000"<<endl;
   cout<<"  S\tSayap\tRp. 1500"<<endl;
   cout<<"-------------------------"<<endl;
   cout<<"Banyak Jenis [1,2,3]:";
   cin>>jenis;
   cout<<endl;
   
   for(i=1;i<=jenis;i++)
   {
	cout<<"Jenis ke-"<<i<<endl;
 	cout<<"Jenis Potong [D/P/S]\t:";cin>>jenis_pot[i];
	cout<<"Banyak Potong\t\t:";cin>>banyak_pot[i];
	cout<<endl;
      if(jenis_pot[i]=='D'|| jenis_pot[i] == 'd')
    	{ket[i]="Dada ";
		hrg_1[i]=2500;}
      else if(jenis_pot[i]=='P'|| jenis_pot[i] == 'p')
       	{ket[i]="Paha ";
  		hrg_1[i]=2000;}
      else if (jenis_pot[i] == 'S'|| jenis_pot[i] == 's')
  		{ket[i]="Sayap";
		hrg_1[i]=1500;}
	  else{
         cout<<"Anda Salah Masukan Kode Jenis Potongan."<<endl;
         hrg_1[i] = 0;
         }
	   	
      jum[i]=hrg_1[i]*banyak_pot[i];

   }
system("cls");
   cout<<"\n\t\t\tGEROBAK FRIED CHICKEN"<<endl;
   cout<<"--------------------------------------------------------------------"<<endl;
   cout<<"No.\tJenis Potong\tHarga Satuan\tBanyak Beli\tJumlah Harga"<<endl;
   cout<<"--------------------------------------------------------------------"<<endl;
   for(i=1;i<=jenis;i++)
    {
        cout<<i;
        cout<<setw(13)<<ket[i];
        cout<<setw(14)<<" "<<hrg_1[i];
        cout<<setw(13)<<" "<<banyak_pot[i];
        cout<<setw(13)<<" Rp "<<jum[i]<<endl;
      if(jenis==1)
          jum_byr=jum[1];
      else if(jenis==2)
          jum_byr=jum[1]+jum[2];
      else
          jum_byr=jum[1]+jum[2]+jum[3];
    }
   cout<<"--------------------------------------------------------------------"<<endl;
   cout<<"\t\t\t\t\tJumlah Bayar\tRp "<<jum_byr<<endl;
   pajak=jum_byr*10/100;
   cout<<"\t\t\t\t\tPajak 10%\tRp "<<pajak<<endl;
   tot_byr=jum_byr+pajak;
   cout<<"\t\t\t\t\tTotal Bayar\tRp "<<tot_byr<<endl;
   
   getch();
}
