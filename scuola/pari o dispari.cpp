#include <iostream>
using namespace std;

int main(){
	float val1;
	cin >>val1;
	
	while(val1 > 1){
		val1 = val1-2;
	}
	if (val1 != 0){
			cout <<"dispari";
	}else{
		cout <<"pari";
	}
	return 0;
	system ("pause");
}
