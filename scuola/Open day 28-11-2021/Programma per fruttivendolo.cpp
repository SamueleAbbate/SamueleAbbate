//dev by Samuele Abbate

#include <iostream>
#include <string>
using namespace std;

int main(){
	//definisco le variabili
	int banane=0,mele=0,arance=0,fragole=0,prodotto,req3;
	string req, req2;
	string prefix="$";//qui puoi inserire la moneta del tuo stato cambia il $ se non sei negli USA
	float costo_banane=1.50,costo_mele=3.00,costo_arance=2.50,costo_fragole=5.00;
	float peso, totale, v_totale;
	
	
	//inizio lo script chiedendo se si vogliono riassegnare dei nuovi valori alle merci sconti giornalieri ecc
	cout <<"vuoi dare un nuovo prezzo ai tuoi prodotti (si,no,solo1)"<<endl;
	cin>> req2;
	if (req2=="si"|req2=="Si"){
		cout <<"ok\n"<<"inserisci prezzo banane:\n";
		cin >>costo_banane;
		cout <<"ora inserisci prezzo mele\n";
		cin >>costo_mele;
		cout <<"ora inserisci prezzo arance\n";
		cin >>costo_arance;
		cout <<"ora inserisci prezzo fragole\n";
		cin >>costo_fragole;
	}else if(req2 =="solo1"){
		cout <<"a quale prodotto vuoi assegnare un nuovo valore?"<<endl;
		cout <<"1- banane Il prezzo attuale e' "<<costo_banane<<endl;
		cout <<"2- mele Il prezzo attuale e' "<<costo_mele<<endl;
		cout <<"3- arance Il prezzo attuale e' "<<costo_arance<<endl;
		cout <<"4- fragole Il prezzo attuale e' "<<costo_fragole<<endl;
		cin >>req3;
		
		switch(req3){
			default:
				cout<<"prodotto non trovato"<<endl;
				break;

			case 1:
				system("cls");
				cout <<"reimposta il valore delle banane"<<endl;
				cin >>costo_banane;
				break;
				
			case 2:
				system("cls");
				cout <<"reimposta il valore delle mele"<<endl;
				cin >>costo_mele;
				break;

			case 3:
				system("cls");
				cout <<"reimposta il valore delle arance"<<endl;
				cin >>costo_arance;
				break;

			case 4:
				system("cls");
				cout <<"reimposta il valore delle fragole"<<endl;
				cin >>costo_fragole;
				break;
		}
	}
	//inizio un ciclo che mi permette di eseguire il programma fino a quando l’ user non inserisce si(ovvero che ha finito la giornata)
	while(req!="si"){
	
	
		cout <<"hai finito la giornata?\n";
		cin >>req;
		if(req!="si"){ 
			//qui chiedo al utente un carattere numerico che varia da 1 a 4 (nel esempio)
			cout <<"inserisci numero prodotto:\n";
			cout <<"1- banane"<<endl;
			cout <<"2- mele"<<endl;
			cout <<"3- arance"<<endl;
			cout <<"4- fragole"<<endl;
			cin >>prodotto;
			
			//qui inizio lo switch per verificare l'input che mi è stato dato sopra
			switch(prodotto)
			{
			
				case 1://banane
					banane++;
					cout <<"inserisci peso:\t";
					cin>>peso;
					totale = peso*costo_banane;
					v_totale = v_totale+totale;
					system("cls");
					cout <<"totale: "<<prefix<<totale<<endl;
					break;
					
				case 2://mele
					mele++;
					cout <<"inserisci peso:\t";
					cin>>peso;
					totale = peso*costo_mele;
					v_totale = v_totale+totale;
					system("cls");
					cout <<"totale: "<<prefix<<totale<<endl;
					break;
					
				case 3://arance
					arance++;
					cout <<"inserisci peso:\t";
					cin>>peso;
					totale = peso*costo_arance;
					v_totale = v_totale+totale;
					system("cls");
					cout <<"totale: "<<prefix<<totale<<endl;
					break;
					
				case 4://fragole
					fragole++;
					cout <<"inserisci peso:\t";
					cin>>peso;
					totale = peso*costo_fragole;
					v_totale = v_totale+totale;
					system("cls");
					cout <<"totale: "<<prefix<<totale<<endl;
					break;
					
				default:
					cout <<"prodotto non trovato. hai inserito il numero del prodotto?"<<endl;
					break;
			}
		//quando l'user avrà finito la giornata digiterà si e gli verrà riportato lo schema di vendita sotto riportato
		}else{
			
			system("cls");
			cout<<"volte che sono state vendute le banane:\t"<<banane <<endl;
			cout<<"volte che sono state vendute le mele:\t"<<mele <<endl;
			cout<<"volte che sono state vendute le arance:\t"<<arance <<endl;
			cout<<"volte che sono state vendute le fragole: "<<fragole <<endl;
			cout<<"totale in cassa di tutta la giornata:\t"<<prefix<<v_totale<<endl;
		}
	}
	return 0;
	
		
		
	
}




