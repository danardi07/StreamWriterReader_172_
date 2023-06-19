#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile; 
	//merujuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis File, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while(true) {
		cout << "- "; 
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menuliskan dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
}
//selesai dalam menulis sekarang tutup filenya
outfile.close(); 

ifstream infile;

//membuka file dalam mode membaca
infile.open("contohfile.txt");

cout << endl << ">= Membuka dan Membaca File " << endl;
//merujuk ke sebuah file
if (infile.is_open()) 
{
	//melakukan perulangan setiap baris 
	while (getline(infile, baris))
	{
		//dan tampilkan di sini
		cout << baris << '\n';
			
	}
	//tutup file tersebut setelah selesai
	infile.close();
}
//jika tidak ditemukan file maka akan menampilkan ini
else cout << "unable to open file";
return 0;

}
 

