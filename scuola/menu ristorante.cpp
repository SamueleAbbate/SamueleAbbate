#include <iostream>
using namespace std;

//funzionre rilascio menu
void rel_menu(){
	
	cout<< "1. Hamburger - $6.00"<< endl;
    cout<< "2. Hot dog - $ 4.50" <<endl;
    cout<< "3. Peanuts - $ 3.75" <<endl;
    cout<< "4. Pop Corn - $ 5.50" <<endl;
    cout<< "5. Soda - $ 2.80" <<endl;
    cout<< "6. Chips - $ 1.00" <<endl;
    cout<< "7. Water - $ 1.00" <<endl;
    cout<< "8. Fine ordine" <<endl;
}

//funzione calcolo

void calcolo(int req, float& tot){
	
	float val;
	switch(req){
		case 1:
			val = 6;
			tot=val+tot;
			break;
			
		case 2:
			val = 4.50;
			tot=val+tot;
			break;
		case 3:
			val = 3.75;
			tot=val+tot;
			break;
		case 4:
			val = 5.50;
			tot=val+tot;
			break;
		case 5:
			val = 2.80;
			tot=val+tot;
			break;
		case 6:
			val = 1;
			tot=val+tot;
			break;
		case 7:
			val = 1;
			tot=val+tot;
			break;
		default:
			cout <<"richiesta errata"<<endl;
			break;
		
	}
}
//main
int main(){
	int req_menu=0;
	float tot=0;
	
	while(req_menu!=8){
		rel_menu();
		cin >>req_menu;
		//controllo richiesta
		if(req_menu!=8){
			//funzione per il calcolo attenzione la variabile tot é inizializata a 0 serve soltanto per "prendere il valore totale
			calcolo(req_menu,tot);
		}
	}
	cout <<"totale:$"<<tot<<endl;
	cout <<"arrivederci"<<endl;
	
	system("pause");
	return 0;
}
