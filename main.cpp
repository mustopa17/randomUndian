#include <iostream>
#include<stdlib.h>
#include <limits>
using namespace std;

int i=0;
int disp = 0;
char undian;


class Peserta {
  public:
  string nama[100];
  string nim [100];
  int voc[100];
  
};

 Peserta inppeserta;
 
 
void adData();
int getoption();
void listData();
void undi();


int main (){
    
char lanjut;

int pilih1 = getoption();
enum option{ADD =1 ,LIST , START,FINISH };


while(pilih1 != FINISH)
{
switch (pilih1)
{
case ADD :
    cout <<"MASUKAN PESERTA "<<endl;
   
    adData();
    break;
    case LIST:
    cout <<"DAFTAR PESERTA "<<endl;
    listData();
    break;
    case START:
    cout <<"MULAI UNDI "<<endl;
    undi();
    break;
    case FINISH:
    cout <<"PROGRAM SELESAI "<<endl;
    break;

default:
    cout <<"angka yang anda masukan salah "<<endl;
    break;
}

    label_lanjut:
	
    cout<<"lanjutkan  ? y/n :";
    cin >> lanjut;
    if(lanjut == 'y'|| lanjut == 'Y'){
        pilih1 = getoption();
    }
    else if (lanjut == 'n'|| lanjut=='N'){
        break;
    }
    else
    {
        goto label_lanjut;
    }
}

return 0;
}

int getoption(){
    
    int input;
    cout <<"=================================================="<<endl;
cout <<"PROGRAM UNDIAN DOORPRIZE MAHASISWA INFORMATIKA "<<endl;
cout <<"=================================================="<< endl;

cout <<"========MENU========"<<endl;

cout << "1. Masukan Peserta" << endl;
	cout << "2. List peserta" << endl;
	cout << "3. Mulai undi " << endl;
	cout << "4. Selesai" << endl;
	cout << "==================================================" << endl;
	cout << "pilih [1-4]? : ";
	cin >> input;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	return input;
}
void adData(){
    
    i=0;
    disp=0;
   int jml ;
    cout <<"masukan jumlah peserta :";
    cin >> jml;
    label_ulang:
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    
    disp ++;
     i++;
    cout << "Nama: ";
	getline(cin, inppeserta.nama[i]);
	cout << "NIM: ";
	getline(cin, inppeserta.nim[i]);
	int m=0;
	cout << "NO VOUCHER PILIH  ( ";
	for (m;m<jml;m++){
	    
	    cout<< m;
	    if (m+1!=jml){
	        cout<<" / ";
	    }
	} 
	cout << " ) ? : ";
	cin>>inppeserta.voc[i];
    if (jml!=disp){
        goto label_ulang;
    }
    else {
            }
}

void listData(){
   cout<< "NO   NAMA               NIM                   NO VOUCHER"<<endl;
    for (int j=1 ;j<=disp ;j++){
        cout <<j<< ".   "<< inppeserta.nama[j]<<"             ";
         cout << inppeserta.nim[j]<<"               ";
         cout << inppeserta.voc[j]<<" "<<endl;
    }
}
void undi(){
    int k=1;
    int wadah=0;
    label_undian:
	cout<< "UNDI SEKARANG ? y/n :";
    cin>> undian;
    
    if(undian == 'y'|| undian == 'Y'){
        int random;
        random = rand()%disp;
    
    for (k;k<=disp;k++){
        
        if (random==inppeserta.voc[k]){
            cout<<"\n\n\n";
         cout << "  VOUCHER KEMENANGAN NOMOR :" <<random << endl;
       
           
           cout<< "==== SELAMAT KEPADA ====" <<endl;
            
          cout<< "NAMA : "<<inppeserta.nama[k]<<endl;
            cout<<"NIM : "<<inppeserta.nim[k]<<endl;
           cout<< "TELAH MEMENANGKAN DOOR PRIZE INI\n"<<endl;
           wadah++;
    }
     
    }
    
    if (wadah==0){
         cout<<"\n";
         cout << "  VOUCHER KEMENANGAN NOMOR :" <<random << endl;
          cout << " == TIDAK ADA PEMENANG SILAHKAN UNDI ULANG == :\n" << endl;
    
    }
   

       
    
    }
    

    else if (undian == 'n'|| undian=='N'){
       
        
    }
    else
    {
        goto label_undian;
    }
    }
    



