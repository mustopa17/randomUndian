#include <iostream>

using namespace std;

int getoption(){
    
    int input;
    cout <<"=================================="<<endl;
cout <<"PROGRAM ARISAN MAHASISWA INFORMATIKA "<<endl;
cout <<"==============================="<< endl;
cout << "1. tambahkan peserta" << endl;
	cout << "2. daftar peserta" << endl;
	cout << "3. mulai undi " << endl;
	cout << "4. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-4]? : ";
	cin >> input;
	return input;




}

int main (){
char lanjut;
int pilih1 = getoption();
enum option{ADD =1 ,LIST , START,FINISH };

while(pilih1 != FINISH)
{
switch (pilih1)
{
case ADD :
    cout <<"TAMBAHKAN PESERTA "<<endl;
    break;
    case LIST:
    cout <<"DAFTAR PESERTA "<<endl;
    break;
    case START:
    cout <<"MULAI UNDI "<<endl;
    break;
    case FINISH:
    cout <<"PROGRAM SELESAI "<<endl;
    break;

default:
    cout <<"angka yang anda masukan salah "<<endl;
    break;
}

    label_lanjut:
	
    cout<<"lanjutkan ? y/n";
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