//prendendo 10 numeri in input controlla quale si ripete piu' volte
#include <iostream>
using namespace std;

int main(){
	//variabili
	int numeri[10];
	int conta,tot[1],conta2;
	//funzione di inserimento dati
	for(int i=0;i<10;i++){
		cout <<"inserisci numero: "<<endl;
		cin >>numeri[i];
	}
	//funzione per controllo quale si ripete piu' volte
	for(int i=0;i<10;i++){
		conta2=0;
		conta =numeri[i];
		for(int x=0;x<10;x++){
			if(conta == numeri[x]){
				conta2++;
				if(conta2>tot[1]){
					tot[0]=numeri[i];
					tot[1]=conta2;
				}
			}
		}
		
	}
	//rilascio risultato
	cout <<"il "<<tot[0]<<" si ripete "<<tot[1]<<endl;
	
	return(0);
}