#include <iostream> 
using namespace std; 
void a1(); 
namespace evan
{ 
 struct org
 { 
 char nama[50]; 
 char alamat[60]; 
 int a; 
 }orgh[10]; 
} 

int main() 
{ 
 using namespace evan; 
 char *p[100]; 
 p[0]= "<-------Pendaftaran Pasien-------->\n";
 p[1]= "---------------------------------\n"; 
 cout <<p[0];
  
 	cout << "1.Data Pasien\n"; 
 cout << "2.Data Poli\n";
 		cout << "3.Transaksi Pendaftaran\n";
 	cout << "4.Keluar\n";
 	cout << endl;
	  
 awal:
 		cout << "Silahkan Masukkan Pilihan Anda: "; 
 	cin >> orgh[0].a; 
 cin.get(); 
 	cout << "\n";
 		cout << " Masukkan Nama Pasien : "; 
 			cin.getline(orgh[0].nama,50); 
 
	 cout <<" Masukkan Tanggal Pendaftaran: "; 
 cin.getline(orgh[0].alamat,60);  
 
 
 int kode ; 
 	if(orgh[0].a==1)  
 kode=1; 
 	else if (orgh[0].a==2) 
 kode=2; 
 
 switch (kode) 
 {
 
 case 1: 
  cout <<" "<< "\n";
  	cout <<" "<< orgh[0].nama <<"\n";        
  cout <<" "<< orgh[0].alamat<< "\n";
  	
  	cout <<" "<< "Data Pasien : \n";
  cout <<" "<< "Bunga Citra LesTari alamat: Yogyakarta\n";
  	cout <<" "<< "Rizky Febia alamt: Sleman\n";
  cout <<" "<< "Luna Maya alamat: Banguntapan \n";
  	cout <<" "<< "Neymar alamat: Purwomartani\n";
  cout <<" "<< "Evan Dimas alamat: Magelang \n";
  	cout <<" "<< "Rafi Ahmad alamat: Muntilan\n";

  
  a1();
  break;
 case 2:
  cout <<" "<< "\n";
  	cout <<" "<< orgh[0].nama <<"\n";        
  cout <<" "<< orgh[0].alamat<< "\n";
  	
  	cout <<" "<< "Daftar Poli : \n";
  cout <<" "<< "Poli Gigi\n";
  	cout <<" "<< "\n";
  cout <<" "<< "Cabut Gigi : \n";
  	cout <<" "<< "Pemeriksaan Gigi\n";
  cout <<" "<< "Perawatan Gigi \n";
  	cout <<" "<< "Ekstraksi gigi\n";
  
  a1();
break;
 default :
 cout <<" "<< "\n";
  	cout <<" "<< orgh[0].nama <<"\n";        
  cout <<" "<< orgh[0].alamat<< "\n";
  	
  	cout <<" "<< "Transaksi Pendaftaran : \n";
  cout <<" "<< "Rawat Inap\n";
  	cout <<" "<< "Kamar Mawar kelas 1\n";
  cout <<" "<< "Masuk tanggal 6 Mei 2019\n";
  	cout <<" "<< "biaya kamar 500.000/hari\n";
  cout <<" "<< "Ditangani oleh dokter wahyudi \n";
  
  a1();
  break;
 }
 
 cout << p[1];
 
 char pilih; 
 cout << "Apakah Anda Puas Dengan Pelayanan Kami? (y/n)"; 
 	cin >> pilih; 
  		if (pilih=='n'||pilih=='N')
		   
  {
   goto awal; 
   }
   
 cout << "TERIMA KASIH";
 return 0;
 
}



