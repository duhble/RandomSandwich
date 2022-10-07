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

int init, rand_meat, rand_sauce, rand_pepper;
string ui_meat, ui_sauce, ui_peppers;

string yes = "yes";
string no = "no";

void startup() {
	do {
		if (init < 100) {
			init++;
		}
		system("CLS");
		cout << "DEVELOPMENT VERSION!" << endl;
		cout << "Loading Program: " << init << "%" << endl;
	} while (init < 100);
	Sleep(3000); system("CLS");
}


void howTo() {
	cout << "When you are prompted with a question, answer with \"yes\" or \"no\"." << endl; Sleep(2000); system("CLS");
	cout << "Let's Begin!" << endl; Sleep(1500); system("CLS");
}

void userInput() {
	// Meat
		system("CLS");
		do {
			cout << "Would you like Meat on your sandwich? ONE will be chosen at random. "; cin >> ui_meat;
			if (ui_meat != "yes" && ui_meat != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\"." << endl << endl;
			}
		} while (ui_meat != "yes" && ui_meat != "no");
	// Sauce
		system("CLS");
		do {
			cout << "Would you like Sauce on your sandwich? ONE will be chosen at random. "; cin >> ui_sauce;
			if (ui_sauce != "yes" && ui_sauce != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\"." << endl;
			}
		} while (ui_sauce != "yes" && ui_sauce != "no");
}

void calculations() {
	if (ui_meat == "yes") { rand_meat = rand() % 5 + 1; }
}

void output() {
	cout << "Sandwich Code: " << rand_meat << rand_sauce << endl;
}

int main() {
	startup();
	howTo();
	userInput();
	calculations();
	output();
}