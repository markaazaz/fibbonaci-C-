#include <iostream>
using namespace std;

int main(){
	int n;
	int f_n;
	int f_n1;
	int f_n2;//deklarasi variabel
	
	cout<<"Masukkan Nilai n : ";
	cin>>n;//meminta user untuk memasukkan nilai n
  
//   rumus fibbonaci f(n) = f(n-1) + f(n-2) atau bisa pakai fn = fn1 + fn2
	
	f_n1 = 1;//deklarasi nilai
	f_n2 = 0;
	for(int i = 1; i <= n; i++){//looping
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout<< f_n;
	}
}
