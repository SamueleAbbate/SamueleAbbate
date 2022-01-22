#include <iostream>
using namespace std;
int main(){
	int num;
	cout <<"inserisci un numero:\n";
	cin >>num;
	if (num >0){
		while(num>0){
			num=num-2;
		}
	}else{
		if(num!=0){
			cout<<"non puoi inserire valori negativi";
			return 0;
		}else{
			cout <<num <<" dispari";
			return 0;
		}
	}
	if (num==0){
		cout <<" pari"<<endl;
	}else{
		cout <<" dispari"<<endl;
	}
	system("pause");
	return 0;
}
