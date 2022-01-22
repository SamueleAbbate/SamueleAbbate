#include <iostream>
using namespace std;
int main(){
	int b,e,pot=1;
	cout <<"inserisci un numero:\n";
	cin >>b;
	cout <<"inserisci esponente:\n";
	cin >>e;
	for(int c=1;c<=e;c++){
		pot=pot*b;
	}
	cout <<pot;
	system("pause");
	return 0;
}
