#include <iostream>
using namespace std;
//quale è magiore
void mag(float& a, float& b){
	int tmp;
	if(a<b){
		tmp = a;
		a = b;
		b = tmp;
	}
}
//funzione per il rilascio menu
void rel_menu(){
	cout <<"1-inserisci numero"<<endl;
	cout <<"2-somma numeri"<<endl;
	cout <<"3-sottrazione"<<endl;
	cout <<"4-prodotto dei numeri"<<endl;
	cout <<"5-divisone"<<endl;
	cout <<"6-esci"<<endl;
	cout <<"effetua una scelta: ";
}
//funzione per l'inserimento dei numeri
void ins(float& a, float& b){
	cout <<"inserisci n.1\n";
	cin >>a;
	cout <<"inserisci n.2\n";
	cin >>b;
}
//funzione per la somma dei numeri
int sum(float& a, float& b){
	cout <<"somma:"<<a+b<<endl<<endl;
	return 0;
}
//funzione per la sottrazione
int sot(float& a, float& b){
	mag(a,b);
	cout <<"sottrazione:"<<a-b<<endl<<endl;
	return 0;
}
//funzione per il prodotto dei numeri
int prod(float& a, float& b){
	cout <<"prodotto:"<<a*b<<endl<<endl;
	return 0;
}
//funzione per la divisione
float div(float& a, float& b){
	mag(a,b);
	cout <<"divisione:"<<a/b<<endl;
	return 0;
}


//main
int main(float a=0, float b=0, int req=0){
	
	while(req!=6){
		
		float ck1=a,ck2=b;
		
		rel_menu();
		cin >>req;
		
		if(req!=6){
			if((req ==1)&&(a==ck1)||(b==ck2)){
			
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
						sot(a,b);
						break;
					case 4:
						system("cls");
						prod(a,b);
						break;
					case 5:
						system("cls");
						div(a,b);
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















