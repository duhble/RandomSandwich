// Program Title: RandomSandwich
// Program Description: This program asks the user what ingredients to put on their sandwich, and outputs a series of specialized ingredients according to the sandwich place "Which Wich?"
// Program Author: Dylan Dover
// Last Updated: 10-07-2022

/*
What was updated:
1) Added random number generators for each ingredient.
2) Program will end when no ingredient is selected.
3) Added a loading screen when running the program (nothing actually loads).
*/

using namespace std;

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int init, rand_meat, rand_sauce, rand_pepper, rand_bread;
string ui_meat, ui_sauce, ui_peppers, ui_bread;

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
	cout << "When you are prompted with a question, answer with \"yes\" or \"no\"." << endl; Sleep(2500); system("CLS");
	cout << "Let's Begin!" << endl; Sleep(1500); system("CLS");
}

void userInput() {
	// Meat
		system("CLS");
		do {
			cout << endl << "Would you like Meat on your sandwich? ONE will be chosen at random. "; cin >> ui_meat;
			if (ui_meat != "yes" && ui_meat != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_meat != "yes" && ui_meat != "no");
	// Sauce
		system("CLS");
		do {
			cout << endl << "Would you like Sauce on your sandwich? ONE will be chosen at random. "; cin >> ui_sauce;
			if (ui_sauce != "yes" && ui_sauce != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_sauce != "yes" && ui_sauce != "no");
	// Peppers
		system("CLS");
		do {
			cout << endl << "Would you like Peppers on your sandwich? ONE will be chosen at random. "; cin >> ui_peppers;
			if (ui_peppers != "yes" && ui_peppers != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_peppers != "yes" && ui_peppers != "no");
	// Bread
		system("CLS");
		if (ui_meat == "yes" || ui_sauce == "yes" || ui_peppers == "yes") {
			ui_bread = "yes";
			cout << "Since this will become a sandwich, the bread will automatically be chosen randomly." << endl; Sleep(4000);
		}
		else if (ui_meat == "no" && ui_sauce == "no" && ui_peppers == "no") {
			ui_bread = "no";
			cout << "Since this will not become a sandwich, this program will not continue to run" << endl; Sleep(4000);
			system("CLS");
			cout << "Goodbye." << endl; Sleep(1500);
			exit;
		}
}

void calculations() {
	srand(time(NULL)); // This resets the tick for random number
	if (ui_meat == "yes") { rand_meat = rand() % 5 + 1; }
	if (ui_sauce == "yes") { rand_sauce = rand() % 5 + 1; }
	if (ui_peppers == "yes") { rand_pepper = rand() % 5 + 1; }
	if (ui_bread == "yes") { rand_bread = rand() % 2 + 1; }
}

void output() {
	system("CLS");
	cout << "Sandwich Code: " << rand_meat << rand_sauce << rand_pepper << rand_bread << endl;
}

int main() {
	userInput();
	calculations();
	output();
}