#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menuliskan dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
}
//selesai dalam menulis sekarang tutup filenya
outfile.close();

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
		cout << baris << '\n.;
			'
	}
	//tutup file tersebut setelah selesai
	infile.close();
}
//jika tidak ditemukan file maka akan menampilkan ini
else cout << "unable to open file";
return 0;

}
 

