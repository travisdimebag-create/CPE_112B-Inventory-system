#include <iostream>
#include <windows.h>
#include <limits>
using namespace std;

int is_cmd_valid(void){
	if (!(cin.fail())){
		return 0;
	} 
	system("cls");
	cout << "Invalid input! Please enter an integer.\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 1;
}

int menu(void){
	int cmd;
	cout << "Inventory management system.";
	while (1){
		Sleep(1500);
		cout << "\nCommands:\n1. Create cell\n2. Read\n3. Update cell\n4. Delete cell.\nEnter \"0\" to terminate program.\n>";
		cin >> cmd;
		if (is_cmd_valid())
			continue;
		
		system("cls");
		cout << "Command read: " << cmd << endl;//debug. 
		switch (cmd){
			case 0: return 0;
			case 1: //func_Create
			case 2: //func_Read
			case 3: //func_Update
			case 4: cout << "B)\n"; break; //debug. replace later with func_Delete
			default: cout << "Invalid input!\n"; break;
		}
	}
}
