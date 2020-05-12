#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct datamhs 
{ char nim[15];	char nama[25]; float ipk;
} mhs;
int main() 
{ ofstream file_mhs ("nama_mhs.txt", ios::app);
if (!file_mhs) 
{cerr << "File could not be opened" << endl;
	exit(1); }
char jwb = 'y'; cout << "Input Data Mahasiswa" << endl;
while (jwb == 'Y' || jwb == 'y') 
{cout << endl; cout << "NIM = "; cin >> mhs.nim;
	cout << "Nama = "; cin >> mhs.nama;
	cout << "IPK = "; cin >> mhs.ipk;
	file_mhs.write((char*)&mhs, sizeof(mhs));
	cout << "Apakah ada lagi [Y/T] = "; cin >> jwb; }
	file_mhs.close();
	return 0; }
