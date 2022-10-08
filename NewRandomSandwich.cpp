// Program Title: RandomSandwich
// Program Description: This program asks the user what ingredients to put on their sandwich, and outputs a series of specialized ingredients according to the sandwich place "Which Wich?"
// Program Author: Dylan Dover
// Last Updated: 10-07-2022

using namespace std;

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

const int COL1 = 20;

int init, rand_meat, rand_sauce, rand_pepper, rand_toppings, rand_toppings1, rand_toppings2, rand_toppings3, rand_cheese, rand_seasoning, rand_bread;
string ui_meat, ui_sauce, ui_peppers, ui_toppings, ui_cheese, ui_seasoning, ui_bread;

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
	// Toppings
		system("CLS");
		do {
			cout << endl << "Would you like Toppings on your sandwich? THREE will be chosen at random. "; cin >> ui_toppings;
			if (ui_toppings != "yes" && ui_toppings != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_toppings != "yes" && ui_toppings != "no");
	// Cheese
		system("CLS");
		do {
			cout << endl << "Would you like Cheese on your sandwich? ONE will be chosen at random. "; cin >> ui_cheese;
			if (ui_cheese != "yes" && ui_cheese != "no") {
				system("CLS");
				cout << "Invalid Input! Answer with \"yes\" or \"no\".";
			}
		} while (ui_cheese != "yes" && ui_cheese != "no");
	// Seasoning
		system("CLS");
		do {
			cout << endl << "Would you like Seasoning on your sandwich? ONE will be chosen at random. "; cin >> ui_seasoning;
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
	if (ui_peppers == "yes") { rand_pepper = rand() % 3 + 1; }
	if (ui_toppings == "yes") { rand_toppings1 = rand() % 9 + 1; rand_toppings2 = rand() % 9 + 1; rand_toppings3 = rand() % 9 + 1; }
	if (ui_cheese == "yes") { rand_cheese = rand() % 4 + 1; }
	if (ui_seasoning == "yes") { rand_seasoning = rand() % 2 + 1; }
	if (ui_bread == "yes") { rand_bread = rand() % 2 + 1; }
}

void output() {
	system("CLS");
	cout << fixed;
	// Meat
		cout << setw(COL1) << left << "Meat: ";
		if (rand_meat == 1) { cout << "Roast Beef" << endl; }
		else if (rand_meat == 2) { cout << "Chicken" << endl; }
		else if (rand_meat == 3) { cout << "Ham" << endl; }
		else if (rand_meat == 4) { cout << "Turkey" << endl; }
		else if (rand_meat == 5) { cout << "Bacon" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Sauce
		cout << setw(COL1) << left << "Sauce: ";
		if (rand_sauce == 1) { cout << "Ranch" << endl; }
		else if (rand_sauce == 2) { cout << "Thousand Island" << endl; }
		else if (rand_sauce == 3) { cout << "Mustard" << endl; }
		else if (rand_sauce == 4) { cout << "Mayo" << endl; }
		else if (rand_sauce == 5) { cout << "Pesto" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Peppers
		cout << setw(COL1) << left << "Peppers: ";
		if (rand_pepper == 1) { cout << "Bell Peppers" << endl; }
		else if (rand_pepper == 2) { cout << "Jalapenos" << endl; }
		else if (rand_pepper == 3) { cout << "Banana Peppers" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Toppings 1
		cout << setw(COL1) << left << "First Topping: ";
		if (rand_toppings1 == 1) { cout << "Red Onions" << endl; }
		else if (rand_toppings1 == 2) { cout << "Crispy Red Onions" << endl; }
		else if (rand_toppings1 == 3) { cout << "Caramelized Onions" << endl; }
		else if (rand_toppings1 == 4) { cout << "Avocados" << endl; }
		else if (rand_toppings1 == 5) { cout << "Pickles" << endl; }
		else if (rand_toppings1 == 6) { cout << "Tomatoes" << endl; }
		else if (rand_toppings1 == 7) { cout << "Lettuce" << endl; }
		else if (rand_toppings1 == 8) { cout << "Black Olives" << endl; }
		else if (rand_toppings1 == 9) { cout << "Cucumbers" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Toppings 2
		cout << setw(COL1) << left << "Second Topping: ";
		if (rand_toppings2 == 1) { cout << "Red Onions" << endl; }
		else if (rand_toppings2 == 2) { cout << "Crispy Red Onions" << endl; }
		else if (rand_toppings2 == 3) { cout << "Caramelized Onions" << endl; }
		else if (rand_toppings2 == 4) { cout << "Avocados" << endl; }
		else if (rand_toppings2 == 5) { cout << "Pickles" << endl; }
		else if (rand_toppings2 == 6) { cout << "Tomatoes" << endl; }
		else if (rand_toppings2 == 7) { cout << "Lettuce" << endl; }
		else if (rand_toppings2 == 8) { cout << "Black Olives" << endl; }
		else if (rand_toppings2 == 9) { cout << "Cucumbers" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Toppings 3
		cout << setw(COL1) << left << "Third Topping: ";
		if (rand_toppings3 == 1) { cout << "Red Onions" << endl; }
		else if (rand_toppings3 == 2) { cout << "Crispy Red Onions" << endl; }
		else if (rand_toppings3 == 3) { cout << "Caramelized Onions" << endl; }
		else if (rand_toppings3 == 4) { cout << "Avocados" << endl; }
		else if (rand_toppings3 == 5) { cout << "Pickles" << endl; }
		else if (rand_toppings3 == 6) { cout << "Tomatoes" << endl; }
		else if (rand_toppings3 == 7) { cout << "Lettuce" << endl; }
		else if (rand_toppings3 == 8) { cout << "Black Olives" << endl; }
		else if (rand_toppings3 == 9) { cout << "Cucumbers" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Cheese
		cout << setw(COL1) << left << "Cheese: ";
		if (rand_cheese == 1) { cout << "Cheddar" << endl; }
		else if (rand_cheese == 2) { cout << "Provolone" << endl; }
		else if (rand_cheese == 3) { cout << "Pepper Jack" << endl; }
		else if (rand_cheese == 4) { cout << "Swiss" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Seasoning
		cout << setw(COL1) << left << "Seasoning: ";
		if (rand_seasoning == 1) { cout << "Salt" << endl; }
		else if (rand_seasoning == 2) { cout << "Pepper" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }
	// Bread
		cout << setw(COL1) << left << "Bread: ";
		if (rand_bread == 1) { cout << "White Bread" << endl; }
		else if (rand_bread == 2) { cout << "Whole Bread" << endl; }
		else { cout << "There was an unexpected error, please check the sandwich code." << endl; }

	cout << endl << "Sandwich Code: " << rand_meat << rand_sauce << rand_pepper << rand_toppings1 << rand_toppings2 << rand_toppings3 << rand_cheese << rand_seasoning << rand_bread << endl;
}

int main() {
	userInput();
	calculations();
	output();
}