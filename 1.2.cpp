#include<iostream>
using namespace std;
int main()
{
	int array=5;
	string kode[array]= {"001","002","003","004","005"};
	string nama[array]= {"Penghapus", "Pensil","Buku","Rautan","Penggaris"};
	int jumlah[array]= {4, 3, 2, 3, 5};
	int harga_barang[array]= {1000, 1500, 2000, 1000, 500};
	
	int total_barang =0;
	int total_harga =0;
	
	cout<< "Kode\tNama\tJumlah\tHarga\tTotal\n"
	<< endl;
	for (int i=0; i < array; i++)
	{
		int total = jumlah[i] * harga_barang[i];
		
		cout << kode[i]<< "\t" << nama[i]
		<<"\t\t" << jumlah[i] 
		<<"\t\t" << harga_barang[i] << "\t" << total << endl;
		
		total_barang += jumlah[i];
		total_harga += total;
	}
	cout <<"\nTotal Barang: " << total_barang << endl;
	cout <<"Total Harga: " << total_harga << endl;
	return 0 ;
}	
