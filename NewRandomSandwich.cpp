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

string uimeat;
string yes = "yes";
string no = "no";

void startup() {
	cout << "DEVELOPMENT VERSION!" << endl << endl;
	cout << "When you are prompted with a question, answer with \"yes\" or \"no\"." << endl; Sleep(2000); system("CLS");

	cout << "DEVELOPMENT VERSION!" << endl << endl;
	cout << "Let's Begin!" << endl; Sleep(1500); system("CLS");
}

void userInput() {
	do {
		cout << "Would you like Meat on your sandwich? ONE will be chosen at random. "; cin >> uimeat;
		if (uimeat != yes && uimeat != no) {
			cout << "Invalid Input! Answer with \"yes\" or \"no\"." << endl;
		}
	} while (uimeat != yes && uimeat != no);
}

int main() {
	userInput();
}