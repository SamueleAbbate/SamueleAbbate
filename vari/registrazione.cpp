#include <iostream>
#include <string>
using namespace std;

//funzione per rilascio menu
void menu(){
	
	cout <<"*****************************************"<<endl;
	cout <<"* 1)Rilascio tutte le persone registrate*"<<endl;
	cout <<"* 99)Esci                               *"<<endl;
	cout <<"*****************************************"<<endl;
	cout <<"inserisci una scelta: ";
}	
	
//main
int main(){

	//variabili
	int x=1, req=0;
	string user[x][2];
	
	
	//richiedo numero di persone da registrare
	cout <<"quante persone devi registrare"<<endl;
	cin>>x;
	
	for(int c=0;c<x;c++){
		for(int i=0;i<=1;i++){
			switch(i){
				case 0:
					cout <<"inserisci nome utente: ";
					cin >>user[c][0];
					break;
				case 1:
					cout <<"inserisci password utente: ";
					cin >>user[c][1];
					break;
				}
		}
	}
	
	system("cls");
	while(req!=99){
		menu();
		cin>>req;
		system("cls");
		switch(req){
			//condizione di default in modo che se la richiesta fosse diversa dai casi presi in considerazione il codice non vada in errore
			default:
				cout <<"inserisci una richiesta"<<endl;
				break;
				
			//rilascio tutte le persone registrate
			case 1:
				for(int c=0;c<x;c++){
					for(int i=0;i<=1;i++){
						switch(i){
							case 0:
								cout <<"--utenti--"<<endl;
								cout <<"--user | password--"<<endl;
								cout <<c<<")"<<user[c][0]<<" | ";
								break;
							case 1:
								cout <<user[c][1]<<endl<<endl;
								break;
						}
					}
				}
				break;
				
			case 99:
				cout <<"***arrivederci***"<<endl;
				break;
			
		}
	}
	
	
	return 0;
	
	
}