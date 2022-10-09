// Title: RandomSandwich
// Description: This program asks the user what ingredients to put on their sandwich, and outputs a series of specialized ingredients according to the sandwich place "Which Wich?"
// Author: Dylan Dover
// Last Updated: 10-08-2022

using namespace std;

#include <iomanip> 
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

const int COL1 = 17;

int per, rand_meat, rand_sauce, rand_pepper, rand_toppings, rand_toppings1, rand_toppings2, rand_toppings3, rand_cheese, rand_seasoning, rand_bread;
string end_meat, end_sauce, end_pepper, end_topping1, end_topping2, end_topping3, end_cheese, end_season, end_bread;
string ui_meat, ui_sauce, ui_peppers, ui_toppings, ui_cheese, ui_seasoning, ui_bread, ui_repeat;
string output_file_answer;

string yes = "yes";
string no = "no";

void end() { exit; }

void welcome() {
	cout << "Welcome to the Random Sandwich program!" << endl; Sleep(3000); system("CLS");
	cout << "This program will ask you several questions about what ingredients you want on a sandwich." << endl; Sleep(4000); system("CLS");
	cout << "Let's start by loading the program." << endl; Sleep(1500); system("CLS");
	do {
		if (per < 100) {
			per++;
		}
		system("CLS");

		cout << "DEVELOPMENT VERSION!" << endl;

		cout << "Loading Program: " << per << "%" << endl;
	} while (per < 100);
	Sleep(3000); system("CLS");
}


void howTo() {
	cout << "Remember, when you are prompted with a question, answer with \"yes\" or \"no\"." << endl; Sleep(2500); system("CLS");
	cout << "On another note, you will not get the same topping twice in one sandwich." << endl; Sleep(2500); system("CLS");
	cout << "Let's Start!" << endl; Sleep(1500); system("CLS");
}

void userInput() {
	// Meat
		system("CLS");
		do {
			cout << endl << "Would you like Meat on your sandwich? ONE will be chosen at random at the end. "; cin >> ui_meat;
			if (ui_meat != "yes" && ui_meat != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_meat != "yes" && ui_meat != "no");
	// Sauce
		system("CLS");
		do {
			cout << endl << "Would you like Sauce on your sandwich? ONE will be chosen at random at the end. "; cin >> ui_sauce;
			if (ui_sauce != "yes" && ui_sauce != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_sauce != "yes" && ui_sauce != "no");
	// Peppers
		system("CLS");
		do {
			cout << endl << "Would you like Peppers on your sandwich? ONE will be chosen at random at the end. "; cin >> ui_peppers;
			if (ui_peppers != "yes" && ui_peppers != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_peppers != "yes" && ui_peppers != "no");
	// Toppings
		system("CLS");
		do {
			cout << endl << "Would you like Toppings on your sandwich? THREE will be chosen at random at the end. "; cin >> ui_toppings;
			if (ui_toppings != "yes" && ui_toppings != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_toppings != "yes" && ui_toppings != "no");
	// Cheese
		system("CLS");
		do {
			cout << endl << "Would you like Cheese on your sandwich? ONE will be chosen at random at the end. "; cin >> ui_cheese;
			if (ui_cheese != "yes" && ui_cheese != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_cheese != "yes" && ui_cheese != "no");
	// Seasoning
		system("CLS");
		do {
			cout << endl << "Would you like Seasoning on your sandwich? ONE will be chosen at random at the end. "; cin >> ui_seasoning;
			if (ui_seasoning != "yes" && ui_seasoning != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_seasoning != "yes" && ui_seasoning != "no");
	// Bread
		system("CLS");
		if (ui_meat == "yes" || ui_sauce == "yes" || ui_peppers == "yes" || ui_toppings == "yes" || ui_cheese == "yes" || ui_seasoning == "yes") {
			ui_bread = "yes";
			cout << "Since this will become a sandwich, the bread will automatically be chosen randomly." << endl; Sleep(4000);
		}
		else if (ui_meat == "no" && ui_sauce == "no" && ui_peppers == "no" && ui_toppings == "no" && ui_cheese == "no" && ui_seasoning == "no") {
			ui_bread = "no";
			cout << "You cannot order just bread..." << endl; Sleep(2500);
			system("CLS");
			cout << "Please restart the program." << endl; Sleep(2500);
			
		}
}

void calculations() {
	srand(time(NULL)); // This resets the tick for a random number.
	ui_repeat == " "; // This resets the repeat answer.
	cout << "Calculating Sandwich." << endl;

	// Meat
		if (ui_meat == "yes") { rand_meat = rand() % 5 + 1; }

		if (rand_meat == 1) { end_meat = "Roast Beef"; }
		else if (rand_meat == 2) { end_meat = "Chicken"; }
		else if (rand_meat == 3) { end_meat = "Ham"; }
		else if (rand_meat == 4) { end_meat = "Turkey"; }
		else if (rand_meat == 5) { end_meat = "Bacon"; }
		else if (rand_meat == 0) { end_meat = "No meat."; }
		else { end_meat = "There was an unexpected error, please check the sandwich code."; }
	// Sauce
		if (ui_sauce == "yes") { rand_sauce = rand() % 5 + 1; }

		if (rand_sauce == 1) { end_sauce = "Ranch"; }
		else if (rand_sauce == 2) { end_sauce = "Thousand Island"; }
		else if (rand_sauce == 3) { end_sauce = "Mustard"; }
		else if (rand_sauce == 4) { end_sauce = "Mayo"; }
		else if (rand_sauce == 5) { end_sauce = "Pesto"; }
		else if (rand_sauce == 0) { end_sauce = "No sauce."; }
		else { end_sauce = "There was an unexpected error, please check the sandwich code."; }
	// Peppers
		if (ui_peppers == "yes") { rand_pepper = rand() % 3 + 1; }

		if (rand_pepper == 1) { end_pepper = "Bell Peppers"; }
		else if (rand_pepper == 2) { end_pepper = "Jalapenos"; }
		else if (rand_pepper == 3) { end_pepper =  "Banana Peppers"; }
		else if (rand_pepper == 0) { end_pepper = "No peppers."; }
		else { end_pepper = "There was an unexpected error, please check the sandwich code."; }
	// Toppings 1
		if (ui_toppings == "yes") { rand_toppings1 = rand() % 9 + 1; }

		if (rand_toppings1 == 1) { end_topping1 = "Red Onions"; }
		else if (rand_toppings1 == 2) { end_topping1 = "Crispy Red Onions"; }
		else if (rand_toppings1 == 3) { end_topping1 = "Caramelized Onions"; }
		else if (rand_toppings1 == 4) { end_topping1 = "Avocados"; }
		else if (rand_toppings1 == 5) { end_topping1 = "Pickles"; }
		else if (rand_toppings1 == 6) { end_topping1 = "Tomatoes"; }
		else if (rand_toppings1 == 7) { end_topping1 = "Lettuce"; }
		else if (rand_toppings1 == 8) { end_topping1 = "Black Olives"; }
		else if (rand_toppings1 == 9) { end_topping1 = "Cucumbers"; }
		else { end_topping1 = "There was an unexpected error, please check the sandwich code."; }
	// Toppings 2
		do {
			if (ui_toppings == "yes") { rand_toppings2 = rand() % 9 + 1; }

			if (rand_toppings2 == 1) { end_topping2 = "Red Onions"; }
			else if (rand_toppings2 == 2) { end_topping2 = "Crispy Red Onions"; }
			else if (rand_toppings2 == 3) { end_topping2 = "Caramelized Onions"; }
			else if (rand_toppings2 == 4) { end_topping2 = "Avocados"; }
			else if (rand_toppings2 == 5) { end_topping2 = "Pickles"; }
			else if (rand_toppings2 == 6) { end_topping2 = "Tomatoes"; }
			else if (rand_toppings2 == 7) { end_topping2 = "Lettuce"; }
			else if (rand_toppings2 == 8) { end_topping2 = "Black Olives"; }
			else if (rand_toppings2 == 9) { end_topping2 = "Cucumbers"; }
			else { end_topping2 = "There was an unexpected error, please check the sandwich code."; }
		} while (rand_toppings2 == rand_toppings1);
	// Toppings 3
		do {
			if (ui_toppings == "yes") { rand_toppings3 = rand() % 9 + 1; }

			if (rand_toppings3 == 1) { end_topping3 = "Red Onions"; }
			else if (rand_toppings3 == 2) { end_topping3 = "Crispy Red Onions"; }
			else if (rand_toppings3 == 3) { end_topping3 = "Caramelized Onions"; }
			else if (rand_toppings3 == 4) { end_topping3 = "Avocados"; }
			else if (rand_toppings3 == 5) { end_topping3 = "Pickles"; }
			else if (rand_toppings3 == 6) { end_topping3 = "Tomatoes"; }
			else if (rand_toppings3 == 7) { end_topping3 = "Lettuce"; }
			else if (rand_toppings3 == 8) { end_topping3 = "Black Olives"; }
			else if (rand_toppings3 == 9) { end_topping3 = "Cucumbers"; }
			else { end_topping3 = "There was an unexpected error, please check the sandwich code."; }
		} while (rand_toppings3 == rand_toppings1 || rand_toppings3 == rand_toppings2);
	// Cheese
		if (ui_cheese == "yes") { rand_cheese = rand() % 4 + 1; }

		if (rand_cheese == 1) { end_cheese = "Cheddar"; }
		else if (rand_cheese == 2) { end_cheese = "Provolone"; }
		else if (rand_cheese == 3) { end_cheese = "Pepper Jack"; }
		else if (rand_cheese == 4) { end_cheese = "Swiss"; }
		else if (rand_cheese == 0) { end_cheese = "No cheese."; }
		else { end_cheese = "There was an unexpected error, please check the sandwich code."; }
	// Seasoning
		if (ui_seasoning == "yes") { rand_seasoning = rand() % 2 + 1; }

		if (rand_seasoning == 1) { end_season = "Salt"; }
		else if (rand_seasoning == 2) { end_season = "Pepper"; }
		else if (rand_seasoning == 0) { end_season = "No seasoning."; }
		else { end_season = "There was an unexpected error, please check the sandwich code."; }
	// Bread
		if (ui_bread == "yes") { rand_bread = rand() % 2 + 1; }

		if (rand_bread == 1) { end_bread = "White Bread"; }
		else if (rand_bread == 2) { end_bread = "Whole Bread"; }
		else if (rand_bread == 0) { end_bread = "No bread, weird."; }
		else { end_bread = "There was an unexpected error, please check the sandwich code."; }
}

void repeat() {
	do {
		cout << endl << "Do you want to make another sandwich? "; cin >> ui_repeat;
		if (ui_repeat != "no" && ui_repeat != "yes") {
			cout << endl << "Invalid Input! Answer with \"yes\" or \"no\".";
		}
	} while (ui_repeat != "no" && ui_repeat != "yes");
}

void output() {
	system("CLS");
	cout << fixed;
	cout << setw(COL1) << left << "Meat:" << end_meat << endl; Sleep(100);
	cout << setw(COL1) << left << "Sauce:" << end_sauce << endl; Sleep(100);
	cout << setw(COL1) << left << "Peppers:" << end_pepper << endl; Sleep(100);
	if (ui_toppings == "yes") { cout << setw(COL1) << left << "Toppings:" << end_topping1 << ", " << end_topping2 << ", and " << end_topping3 << endl; Sleep(100); }
	if (ui_toppings == "no") { cout << "No toppings." << endl; Sleep(100); }
	cout << setw(COL1) << left << "Cheese:" << end_cheese << endl; Sleep(100);
	cout << setw(COL1) << left << "Seasoning:" << end_season << endl; Sleep(100);
	cout << setw(COL1) << left << "Bread:" << end_bread << endl; Sleep(100);

	cout << endl << "Sandwich Code: " << rand_meat << rand_pepper << rand_toppings1 << rand_toppings2 << rand_toppings3 << rand_cheese << rand_seasoning << rand_bread << endl;
}

void file() {
	ofstream outData;
	outData.open("OutputSandwich.txt");
	do {
		cout << endl << "Do you want to output this sandwich to a text file. WARNING: IT WILL OVERRIDE AN EXISTING SANDWICH! "; cin >> output_file_answer;
		if (output_file_answer == "yes") {
			outData << fixed;
			outData << setw(17) << left << "Meat:" << end_meat << endl;
			outData << setw(17) << left << "Sauce:" << end_sauce << endl;
			outData << setw(17) << left << "Peppers:" << end_pepper << endl;
			if (ui_toppings == "yes") { outData << setw(17) << left << "Toppings:" << end_topping1 << ", " << end_topping2 << ", and " << end_topping3 << endl; }
			if (ui_toppings == "no") { outData << "No toppings." << endl; }
			outData << setw(17) << left << "Cheese:" << end_cheese << endl;
			outData << setw(17) << left << "Seasoning:" << end_season << endl;
			outData << setw(17) << left << "Bread:" << end_bread << endl;

			outData << endl << "Sandwich Code: " << rand_meat << rand_pepper << rand_toppings1 << rand_toppings2 << rand_toppings3 << rand_cheese << rand_seasoning << rand_bread << endl;
		}
	} while (output_file_answer != "yes" && output_file_answer != "no");
	outData.close();
}

int main() {

	// welcome();
	howTo();
	do {
		do {
			userInput();
			calculations();
			output();
			file();
			repeat();
			if (ui_repeat != "no" && ui_repeat != "yes") {
				cout << endl << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_repeat == "yes");
		if (ui_repeat == "no") {
			cout << endl << "Enjoy Your Sandwich!" << endl;
		}
	} while (ui_repeat == " ");
	end();
}