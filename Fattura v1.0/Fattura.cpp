#include <iostream>
#include <string>
using namespace std;

	//variabili stringhe azienda emittente
	string nome_azienda,via_azienda,cap_azienda,citta_azienda,p_i_azienda,tel_azienda,mail_azienda,num_fatt,data_fatt;
	
	//variabili stringa azienda committente
	string nome_azienda2,via_azienda2,cap_azienda2,citta_azienda2,p_i_azienda2,tel_azienda2,mail_azienda2,causale;
	

void rel_intestazione(){
	
	
	cout <<nome_azienda<<endl;
	cout <<"via "<<via_azienda<<"-"<<cap_azienda<<"-"<<citta_azienda<<endl;
	cout <<"Partita IVA: "<<p_i_azienda<<endl;
	cout <<"Telefono: "<<tel_azienda<<endl;
	cout <<"E-mail: "<<mail_azienda<<endl;
	cout <<"fattura nr."<<num_fatt<<" del "<<data_fatt<<endl;
	cout <<endl;
	cout <<"committente:"<<endl;
	cout <<nome_azienda2<<endl;
	cout <<"via "<<via_azienda2<<"-"<<cap_azienda2<<"-"<<citta_azienda2<<endl;
	cout <<"Partita IVA: "<<p_i_azienda2<<endl;
	cout <<"Telefono: "<<tel_azienda2<<endl;
	cout <<"E-mail: "<<mail_azienda2<<endl;
	cout <<"causale: "<<endl<<causale<<endl;
	
	
}
void req_int(){
	//req intestazione
	cout<<"-----AZIENDA EMITTENTE-----"<<endl;
	cout <<"nome azienda:"<<endl;
	getline(cin,nome_azienda);
	cout <<"via:"<<endl;
	getline(cin,via_azienda);
	cout <<"cap:"<<endl;
	getline(cin,cap_azienda);
	cout <<"citta':"<<endl;
	getline(cin,citta_azienda);
	cout <<"partita iva:"<<endl;
	getline(cin,p_i_azienda);
	cout <<"telefono:"<<endl;
	getline(cin,tel_azienda);
	cout <<"email:"<<endl;
	getline(cin,mail_azienda);
	cout <<"numero fattura:"<<endl;
	getline(cin,num_fatt);
	cout <<"data fattura:"<<endl;
	getline(cin,data_fatt);
	system("cls");
	cout<<"-----AZIENDA COMMITTENTE-----"<<endl;
	cout <<"nome azienda:"<<endl;
	getline(cin,nome_azienda2);
	cout <<"via:"<<endl;
	getline(cin,via_azienda2 );
	cout <<"cap:"<<endl;
	getline(cin,cap_azienda2 );
	cout <<"citta':"<<endl;
	getline(cin,citta_azienda2);
	cout <<"partita iva:"<<endl;
	getline(cin,p_i_azienda2);
	cout <<"telefono:"<<endl;
	getline(cin,tel_azienda2 );
	cout <<"email:"<<endl;
	getline(cin,mail_azienda2);
	cout <<"causale:"<<endl;
	getline(cin,causale);
	system("cls");
}

int main(){
	
	req_int();
	
	////parte tabellare
	int tot_s_5=0,tot_s_10=0,tot_s_22=0,tot_s_4=0;
	
	
	///////
	int sei=4;
	int num_merci, merci[num_merci][sei];
	///////////
	string r_sconti="";
	int per_sconti=0,p_tot=0,tot=0,tot_scont=0,temp=0,r_switch=0,imp_iva=0;
	///////////
	float sd_val=0, riparto=0;
	string r_sn_doc="";
	//////////////
	string r_sd_doc="";
	///////
	cout <<"quante merci ci sono:"<<endl;
	cin >>num_merci;
	num_merci--;
	////
	float t_iva4,t_iva5,t_iva10,t_iva22;
	float tot_iva4,tot_iva5,tot_iva10,tot_iva22;
	////
	for(int i=0;i<=num_merci;i++){
		
		for(int x=0;x<=sei;x++){
			
			switch(x){
			
				case 0:
					cout <<"quantita'"<<endl;
					cin >>merci[i][x];
					break;
				case 1:
					cout <<"codice"<<endl;
					cin >>merci[i][x];
					break;
				case 2:
					cout <<"pr.u."<<endl;
					cin >>merci[i][x];
					break;
				case 3:
					cout <<"iva"<<endl;
					cin >>merci[i][x];
					cout<<"--------------"<<endl;
					break;
			}
		}	
	}
	////somma delle merci				!!!!FUNZIONANTE!!!!
	for(int i=0;i<=num_merci;i++){
		p_tot =merci[i][0]*merci[i][2];
		tot=p_tot+tot;
	}
	
	
	
	
	////calcolo sconti					!!!!FUNZIONANTE!!!!
	int sconto=0;
	int val_sconto=0;//lo uso per sapere quale iva va a scontare
	int cal_pr,tot_p,TOT=0,n_prodotti,var=0;
	TOT=tot;
	
	up:
	cout <<"ci sono sconti?(si,no)"<<endl;
	cin >>r_sconti;
	if(r_sconti=="si"||r_sconti=="Si"){
		cout <<"1-calcolo gli sconti su tutti"<<endl;
		cout <<"2-calcolo per iva uguale(manutenzione)"<<endl;
		cout <<"3-sconta per singolo prodotto"<<endl;
		cin >>r_switch;
		switch (r_switch){
			case 1: //////CALCOLO SCONTO SU TUTTI
				cout <<"percentuale di sconto?\n";
				cin >>per_sconti;
				
				for(int i=0;i<=num_merci;i++){
	
					if(merci[i][3]==4){
						tot =merci[i][2]*merci[i][0];
						sconto = tot*per_sconti/100;
						tot_s_4 =tot-sconto;
						temp =temp+sconto;					///assegno il valore 1 alla variabile temp in qunto mi servir� per stampare
					}else if(merci[i][3]==5){				///lo sconto alla fine della fattura quando la rilascio a schermo
						tot =merci[i][2]*merci[i][0];
						sconto = tot*per_sconti/100;
						tot_s_5 =tot-sconto;
						temp =temp+sconto;
					}else if(merci[i][3]==10){
						tot =merci[i][2]*merci[i][0];
						sconto = tot*per_sconti/100;
						tot_s_10 =tot-sconto;
						temp =temp+sconto;		
					}else if(merci[i][3]==22){
						tot =merci[i][2]*merci[i][0];
						sconto = tot*per_sconti/100;
						tot_s_22 =tot-sconto;
						temp =temp+sconto;	
					}
				}
				break;
			
			case 2:////////CALCOLO SCONTO SU TUTTI QUELLI CHE HANNO LA STESSA IVA
				cout <<endl<<"ci dispiace per l'inconveniente ma questa funzione e' in manutenzione"<<endl;
				/*
				cout <<"imponibile iva:"<<endl;
				cin >>imp_iva;
				val_sconto=imp_iva;
				for(int i=0;i<=num_merci;i++){
	
					if(merci[i][3]==imp_iva){
						cal_pr =merci[i][2];
								
					}
					n_prodotti=merci[i][0];
					tot_p =cal_pr*n_prodotti;
				}
				cout <<"percentuale da scontare per prodotti con iva al "<<imp_iva<<":"<<endl;
				cin >>per_sconti;
				temp=TOT;
				temp=temp*per_sconti/100;
				TOT=TOT-temp;				//TOT = al totale scontato
				cout <<TOT;
				*/
				goto up;
				break;
				
			case 3://////CALCOLO SCONTI SU PRODOTTI SPECIFICI
			int merce=0;
			while(merce!=-1){
				var =0;
				for(int i=0;i<=num_merci;i++){
					
					for(int x=0;x<=sei;x++){
	
						switch(x){
					
							case 0:
								cout <<var<<"-";
								cout <<"quantita' ";
								cout <<merci[i][x]<<" ";
								break;
							case 1:
								cout <<" codice ";
								cout <<merci[i][x]<<" ";
								break;
							case 2:
								cout <<"pr.u.";
								cout <<merci[i][x]<<" ";
								break;
							case 3:
								cout <<"iva ";
								cout <<merci[i][x]<<endl;
								break;
						}
					}
					var++;
					
				}
				
				cout <<"scegli quale vuoi scontare(per uscire scrivi -1)"<<endl;
				cin >>merce;
				if(merce!=-1){
				
					cout <<"stai per applicare lo sconto sulla merce "<<merci[merce][1]<<endl;
					n_prodotti=merci[merce][0];
					cal_pr =merci[merce][2];
					tot_p =cal_pr*n_prodotti;
					TOT =TOT-tot_p;
					cout <<"percentuale di sconto?"<<endl;
					cin >>per_sconti;
					temp=tot_p;
					temp=temp*per_sconti/100;
					tot_p=tot_p-temp;
					TOT=TOT+tot_p;
					for(int i=0;i<=num_merci;i++){
						if(merci[merce][3]==5){//iva al 5
							tot_s_5 = tot_p+tot_s_5;
						}else if(merci[merce][3]==10){//iva al 10
							tot_s_10 = tot_p+tot_s_10;
						}else if(merci[merce][3]==22){//iva al 22
							tot_s_22 = tot_p+tot_s_22;
						}else if(merci[merce][3]==4){//iva al 4
							tot_s_4 = tot_p+tot_s_4;
						}
					}
				}
			}
				
		}
		
	}
		
	
	t_iva4 =tot_s_4*4/100;
	t_iva5 =tot_s_5*5/100;
	t_iva10 =tot_s_10*10/100;
	t_iva22 =tot_s_22*22/100;

	tot_iva4=t_iva4+tot_s_4;
	tot_iva5=t_iva5+tot_s_5;
	tot_iva10=t_iva10+tot_s_10;
	tot_iva22=t_iva22+tot_s_22;
	
	
	
	
	
	string req_tras;
	float c_trasporto=0;
	cout <<"ci sono costi di trasporto?(si,no)"<<endl;
	cin >>req_tras;
	if(req_tras =="si"){

		cout <<"inserisci valore costi di trasporto:\n";
		cin >>c_trasporto;
	}
	
	string req_imb;
	float c_imb=0;
	cout <<"ci sono costi diimballaggio?(si,no)"<<endl;
	cin >>req_imb;
	if(req_tras =="si"){

		cout <<"inserisci valore costi di imballaggio:\n";
		cin >>c_imb;
	}
	
	
	
	
	
	///spese NON documentate
	string req_aliq;
	cout <<"ci sono spese NON documentate?(si,no)"<<endl;
	cin >>r_sn_doc;
	float tot_5, tot_10, tot_22, tot_4;
	if(r_sn_doc=="si"){
		
		cout <<"ci sono aliquote iva diverse?"<<endl;
		cin >>req_aliq;
		if(req_aliq=="si"){
		
			cout <<"inserisci valore delle spese NON documentate:\n";
			cin >>sd_val;
			riparto = sd_val/TOT;
			if(tot_s_5 != 0){
				tot_5= riparto*tot_s_5;
			}
			if(tot_s_10 != 0){
				tot_10= riparto*tot_s_10;
			}
			if(tot_s_22 != 0){
				tot_22= riparto*tot_s_22;
			}
			if(tot_s_4 != 0){
				tot_4= riparto*tot_s_4;
			}
		}else{
			cout <<"inserisci valore delle spese NON documentate:\n";
			cin >>sd_val;
			TOT = TOT+sd_val;
		}
	}
	
	
	
	
	///spese documentate
	cout <<"ci sono spese documentate?(si,no)"<<endl;
	cin >>r_sd_doc;
	if(r_sd_doc =="si"){

		cout <<"inserisci valore delle spese documentate:\n";
		cin >>sd_val;
		TOT=sd_val+TOT;

	}
	
	//cauzioni su iballi
	float ca_imb=0.0;
	string req_ca;
	cout <<"ci sono cauzioni su imballi(art.15.4)(si,no)"<<endl;
	cin >>req_ca;
	if(req_ca=="si"){
		cout <<"inserisci valore cauzioni su imballi:\n";
		cin >>ca_imb;
		TOT =TOT+ca_imb;
	}
	
	//interessi
	float interessi=0.0;
	string req_int;
	cout <<"ci sono interessi(art.10.1)(si,no)"<<endl;
	cin >>req_ca;
	if(req_ca=="si"){
		cout <<"inserisci valore interessi:\n";
		cin >>interessi;
		TOT =TOT+interessi;
	}
	
	
	
	
	
	
	//rilascio parte tabellare e descrizione
	
	system("cls");
	rel_intestazione();
	float q=0,p=0,t=0;
	float T=0;
	cout <<"---------------------------------------------------------"<<endl;
	cout<<"|Quantita'\t|"<<"cod.art\t|"<<"Pr.U.\t|"<<"iva\t|"<<"totale\t|"<<endl;
	cout <<"---------------------------------------------------------"<<endl;
	for(int i=0;i<=num_merci;i++){
		
		for(int x=0;x<=5;x++){
			switch(x){
				
				case 0:
					q =merci[i][x];
					cout <<"|"<<merci[i][x]<<"\t\t|";
					break;
				case 1:
					cout <<merci[i][x]<<"\t\t|";
					break;
				case 2:
					p =merci[i][x];
					cout <<merci[i][x]<<"\t|";
					break;
				case 3:
					cout <<merci[i][x]<<"\t|";
					break;
				case 4:
					t=q*p;
					cout<<t<<"\t|"<<endl;
					break;		
			}	
		}
		T=T+t;
	}
	
	
	
	
	cout <<"---------------------------------------------------------"<<endl;
	if(temp!=0){
		cout <<"|sconti incondizionati:\t\t\t\t "<<temp<<"     |"<<endl;
	}
	if(c_trasporto!=0){
		cout <<"|costi di trasporto:\t\t\t\t "<<c_trasporto<<"     |"<<endl;
	}
	if(c_imb!=0){
		cout <<"|costi di imballo:\t\t\t\t "<<c_imb<<"     |"<<endl;
	}
	cout <<"|TOTALE\t\t\t\t\t\t "<<T-temp+c_trasporto+c_imb<<"    |"<<endl;
	cout <<"---------------------------------------------------------"<<endl;
	cout <<endl;
	cout <<"---------------------------------------------------------"<<endl;
	cout <<"|imponibile\t\t|imponibile\t\t|imponibile\t|spese\t\t|cauzioni\t|"<<endl;
	cout <<"|"<<tot_s_4<<"\t\t|"<<tot_s_5<<"\t\t|"<<tot_s_10<<"\t\t|"<<tot_s_22<<"\t\t|documentate\t|su imballi\t|"<<endl;
	cout <<"|"<<tot_iva4<<"\t\t|"<<tot_iva5<<"\t\t|"<<tot_iva10<<"\t\t|"<<tot_iva22<<"\t\t|"<<sd_val<<"\t\t|"<<ca_imb<<"\t\t|"<<endl;
	cout <<"|iva 4%\t\t|iva 5%\t\t|iva 10%\t|iva 22%\t|interessi\t|TOTALE FATTURA|"<<endl;
	cout <<"|"<<t_iva4<<"\t\t|"<<t_iva5<<"\t\t|"<<t_iva10<<"\t\t|"<<t_iva22<<"\t\t|"<<interessi<<"\t\t|"<<TOT<<"\t\t|"<<endl;
	cout <<endl;
	
	system("pause");
	return 0;
}

