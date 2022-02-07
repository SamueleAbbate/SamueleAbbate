#include <iostream>
#include <string>
using namespace std;

int main(){
	
	float val_parc,c_docu,contr,b_imp,iva,tot_int,tot_fat,rit_acc,netto_pag;
	string req;
	
	cout <<"stai facendo la parcella di un notaio?(si,no)"<<endl;
	cin >>req;
	if(req!="si"){
		
		system("cls");
		cout <<"inserisci onorario: ";
		cin >>val_parc;
		cout <<"inserisci costi documentati: ";
		cin >>c_docu;
		
		contr = val_parc*4/100;
		
		b_imp = val_parc+contr;
		
		iva = b_imp*22/100;
		
		tot_int = b_imp+iva;
			
		tot_fat = tot_int + c_docu;
			
		rit_acc = tot_fat*20/100;
			
		netto_pag = tot_fat-rit_acc;
			
		
		cout <<"*****PARCELLA*****"<<endl;
		cout <<"onorario: "<<val_parc<<endl;
		cout <<"contributo 4%: "<<contr<<endl;
		cout <<"base imponibilie: "<<b_imp<<endl;
		cout <<"iva: "<<iva<<endl;
		cout <<"totale intermedio: "<<tot_int<<endl;
		cout <<"costi documentati: "<<c_docu<<endl;
		cout <<"totale fattura: "<<tot_fat<<endl;
		cout <<"ritenuta d'acconto: "<<rit_acc<<endl;
		cout <<"netto a pagare: "<<netto_pag<<endl<<endl;
	}else{
		
		system("cls");
		cout <<"inserisci onorario: ";
		cin >>val_parc;
		cout <<"inserisci costi documentati: ";
		cin >>c_docu;
		
		b_imp = val_parc+contr;
		
		iva = b_imp*22/100;
		
		tot_int = b_imp+iva;
			
		tot_fat = tot_int + c_docu;
			
		rit_acc = tot_fat*20/100;
			
		netto_pag = tot_fat-rit_acc;
			
		
		cout <<"*****PARCELLA*****"<<endl;
		cout <<"onorario: "<<val_parc<<endl;
		cout <<"base imponibilie: "<<b_imp<<endl;
		cout <<"iva: "<<iva<<endl;
		cout <<"totale intermedio: "<<tot_int<<endl;
		cout <<"costi documentati: "<<c_docu<<endl;
		cout <<"totale fattura: "<<tot_fat<<endl;
		cout <<"ritenuta d'acconto: "<<rit_acc<<endl;
		cout <<"netto a pagare: "<<netto_pag<<endl<<endl;
	}
	
	system ("pause");
	return 0;
}
