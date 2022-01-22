#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1,num2,num3,temp;
	string command;
	string command2 = "temp, commands, no, clear";
	cout << "inserisci un valore: \n";
	cin >> num1;
	
	if (num1>0)
	{
		temp = num1;
		num2 = num1;
		num3 = num1-num2;
		cout << num3;
	}
	else
	{
		temp = num1;
		num2 = num1;
		num3 = num1-num2;
		cout << num3;
	}
	up:
		cout <<endl << "comando(no, per uscire): \n";
		cin >> command;
		if (command == "temp")
		{
			cout << temp;
			goto up;
		}else if(command =="no") {
			goto fine;
		}else if(command =="commands" || command=="help"){
			cout << command2 <<endl;
			goto up;
		}else if(command =="clear"){
			system("cls");
			goto up;
		}
		else{
			cout << "command not found\n" <<endl;
			goto up;
		}
	fine:
		system("pause");
		return 0;
}
