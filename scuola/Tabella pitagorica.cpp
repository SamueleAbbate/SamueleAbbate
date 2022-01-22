//tabella pitagorica
#include <iostream>

using namespace std;

int main(){
	int num,ci,var;
	cout <<"inserisci un numero"<<endl;
	cin >>num;
	
	for(ci=1;ci<=num;ci++){
		cout <<"\n";
		for(var=1;var<=num;var++){
			cout <<"\t" <<ci*var;
		}
	}
	
} 
