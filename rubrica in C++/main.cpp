/*	
	gestire una rubrica che tiene i nomi dei contatti:
	Cognome, + Nome, + Indirizzo, + Indirizzo Mail, + Numero di telefono.

*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//funzione per riempire la matrice
void fun_riempi_rubrica(string rub[5][5]){
	int conta=1;
	for(int y=0;y<5;y++){
		cout <<"stai inserendo il contatto n."<<conta<<endl;
		cout <<"Inserisci cognome: ";
		getline(cin,rub[y][0]);
		cout <<"Inserisci nome: ";
		getline(cin,rub[y][1]);
		cout <<"Inserisci indirizzo: ";
		getline(cin,rub[y][2]);
		cout <<"Inserisci indirizzo mail: ";
		getline(cin,rub[y][3]);
		cout <<"Inserisci numero di telefono: ";
		getline(cin,rub[y][4]);
		conta++;
	}
	
}
//funzione per scrivere nel file di testo
void scrivi_rubrica(string rub[5][5]){
	
	//apro il file se esiste lo creo se non esiste
	ofstream fout;  
    ifstream fin;
    fin.open("rubrica.txt");
    fout.open ("rubrica.txt",ios::app); // Append mode
	for(int y=0;y<5;y++){
		for(int x=0;x<5;x++){
			fout <<rub[y][x]<<", ";
		}
		fout <<endl;
	}
	//chiudo il file
	fout.close(); 
}
int main(){
	//dichiaro variabili
	string rub[5][5];
	//richiamo funzioni
	fun_riempi_rubrica(rub);
	scrivi_rubrica(rub);
	//fine
	system("pause");
	return 0;
}








