#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;
void infoMhs();
struct datamhs 
{ char nim[15];	char nama[25]; float ipk;
} mhs;
int main() 
{ ifstream file_mhs ("nama_mhs.txt", ios::in);
if (!file_mhs) 
{cerr<<"File could not be opened"<<endl;
	exit(1); }
cout << "-------------------------------------------" << endl;
cout << setiosflags(ios::left) << setw(8) << "No." << setw(15) << "NIM" << setw(25) << "Nama" << setw(5) << "IPK" << setw(20) << "Predikat" <<endl;
cout << "-------------------------------------------" << endl;
file_mhs.read((char *)&mhs,sizeof(mhs));
while (!file_mhs.eof()) 
{ infoMhs();
	file_mhs.read((char*)&mhs, sizeof(mhs)); }
cout << "-------------------------------------------" << endl;
file_mhs.close(); }
int no=0;
char pre[20];
void infoMhs() 
{ no++;
if (mhs.ipk>=3.50)
	strcpy(pre,"Sangat Memuaskan");
else if (mhs.ipk>=3.00)
	strcpy(pre,"Memuaskan");
else if (mhs.ipk>=2.50)
	strcpy(pre,"Cukup");
cout << setiosflags(ios::left) << no << ".	" << setw(15) << mhs.nim << setw(25) << mhs.nama << setw(5) << setprecision(3) << setiosflags(ios::showpoint | ios::left) << setiosflags(ios::left) << mhs.ipk << setw(20) << pre << endl;}
