#include <iostream>
#include <string>
using namespace std;

int main(){
	
	int banane=0,mele=0;
	string prodotto, req;
	float costo_banane=1.50,costo_mele=3.00;
	float peso, totale, v_totale;
	
	while(req!="si"){
	
	
		cout <<"hai finito la giornata?\n";
		cin >>req;
		if(req!="si"){ 

			cout <<"inserisci nome prodotto:\n";
			cin >>prodotto;
			
			if(prodotto=="banane"){
				banane++;
				cout <<"inserisci peso:\t";
				cin>>peso;
				totale = peso*costo_banane;
				v_totale = v_totale+totale;
				system("cls");
				cout <<"totale: $"<<totale<<endl;
				
			}else if(prodotto=="mele"){
				mele++;
				cout <<"inserisci peso:\t";
				cin>>peso;
				totale = peso*costo_mele;
				v_totale = v_totale+totale;
				system("cls");
				cout <<"totale: $"<<totale<<endl;
			
			}else{
				system("cls");
				cout<<"prodotto non esistente"<<endl;
			}
			
		}else{
			
			system("cls");
			cout<<"volte che sono state vendute le banane:\t"<<banane <<endl;
			cout<<"volte che sono state vendute le mele:\t"<<mele <<endl;
			cout<<"totale in cassa di tutta la giornata:\t"<<"$"<<v_totale<<endl;
		}
	}
	return 0;
				
	
}
