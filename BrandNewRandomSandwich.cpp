// Program Title: NewRandomSandwich
// Program Description: This program asks the user what ingredients to put on their sandwich, and outputs a series of specialized ingredients according to the sandwich place "Which Wich?"
// Program Author: Dylan Dover
// Last Updated: 10-05-2022

using namespace std;

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

string uI_Meat;

void startup() {
	cout << "When you are prompted with a question, please answer with a \"yes\" or \"no\"." << endl; Sleep(2000); system("CLS");
	cout << "Let's begin!" << endl; Sleep(1500); system("CLS");
}

void userInput() {
	do {
		cout << "Would you like Meat on the sandwich? ONE will be chosen at random. "; cin >> uI_Meat;
		if (uI_Meat != 'no' || uI_Meat != 'yes') {
			cout << "Invalid Input, please answer with \"yes\" or \"no\"." << endl;
		}
	} while (uI_Meat != 'no' || uI_Meat != 'yes');
	cout << "Great Answer!" << endl;
}

int main() {
	startup();
	userInput();
}