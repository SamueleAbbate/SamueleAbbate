#include <iostream>
using namespace std;
//funzione per il rilascio menu
void rel_menu(){
	cout <<"1-inserisci numero"<<endl;
	cout <<"2-somma numeri"<<endl;
	cout <<"3-prodotto dei numeri"<<endl;
	cout <<"4-esci"<<endl;
	cout <<"effetua una scelta: ";
}
//funzione per l'insrimento dei numeri
void ins(int& a, int& b){
	cout <<"inserisci n.1\n";
	cin >>a;
	cout <<"inserisci n.2\n";
	cin >>b;
}
//funzione per la somma dei numeri
int sum(int& a, int& b){
	cout <<"somma:"<<a+b<<endl<<endl;
	return 0;
}
//funzione per il prodotto dei numeri
int prod(int& a, int& b){
	cout <<"prodotto:"<<a*b<<endl<<endl;
	return 0;
}

//main
int main(int a=0, int b=0, int req=0){
	
	while(req!=4){
		
		rel_menu();
		cin >>req;
		
		if(req!=4){
			if((req ==1 )&& (a!=0)||(b!=0)){
			
				switch(req){
					case 1:
						ins(a,b);
						system("cls");
						cout <<"i numeri inseriti sono:"<<a<<","<<b<<endl<<endl;
						break;
					case 2:
						system("cls");
						sum(a,b);
						break;
					case 3:
						system("cls");
						prod(a,b);
						break;
					
					default:
						system("cls");
						cout <<"richiesta errata!!!"<<endl;
						break;
			}
			}else{
				system("cls");
				cout<<"come prima cosa inserisci i numeri"<<endl<<endl;
			}
		}else{
			cout <<"Arrivederci"<<endl;
		}
	}
	system("pause");
	return 0;
}















