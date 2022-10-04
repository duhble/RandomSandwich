// Program Title: NewRandomSandwich
// Program Description: This program asks the user what ingredients to put on their sandwich, and outputs a series of specialized ingredients according to the sandwich place "Which Wich?"
// Program Author: Dylan Dover
// Last Updated: 10-03-2022

using namespace std;

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

const int COMB = 816480;

const int COL1 = 15;

// Input Variables
// Zero is the default number, unless the user wants the topping, it will change to a different value.
int randomMeat, randomPeppers, randomDressing, randomToppings, randomToppings1, randomToppings2, randomToppings3, randomCheese, randomSpice, randomBread;
string userInputMeat, userInputPeppers, userInputDressing, userInputToppings, userInputCheese, userInputSpice, jokeAnswer;
string randomMeatAnswer, randomPeppersAnswer, randomDressingAnswer, randomToppingsAnswer, randomToppingsAnswer1, randomToppingsAnswer2, randomToppingsAnswer3, randomCheeseAnswer, randomSpiceAnswer, randomBreadAnswer;
string yes = "yes";
string no = "no";

void welcome() {
    cout << "Welcome to all new Which Wich challenge!" << endl; Sleep(2000); system("CLS");
    cout << "Much like the original program, this randomizes the ingredients for you to order!" << endl; Sleep(3000); system("CLS");
    cout << "When you are prompted with a quesion, answer with \"yes\" or \"no\"" << endl; Sleep(2500); system("CLS");
    cout << "There are " << COMB << " possible combinations." << endl; Sleep(2500); system("CLS");
    cout << "Have fun!" << endl; Sleep(1000); system("CLS");
}

void userInput() {
    cout << "Would you like Meat on your sandwich? ONE is chosen at random. "; getline(cin, userInputMeat); system("CLS");
    cout << "Would you like Peppers on your sandwich? ONE is chosen at random. "; getline(cin, userInputPeppers); system("CLS");
    cout << "Would you like Dressing on your sandwich? ONE is chosen at random. "; getline(cin, userInputDressing); system("CLS");
    cout << "Would you like Toppings on your sandwich? THREE are chosen at random. "; getline(cin, userInputToppings); system("CLS");
    cout << "Would you like Cheese on your sandwich? ONE is chosen at random. "; getline(cin, userInputCheese); system("CLS");
    cout << "Would you like Spice on your sandwich? ONE is chosen at random. "; getline(cin, userInputSpice); system("CLS");

    cout << "Since this is going to be a sandwich, the bread will automatically be chosen random."; Sleep(3500); system("CLS");
}

void userInputCalculations() {
    // Meat
    if (userInputMeat.find(yes) != string::npos) { randomMeat = rand() % 5 + 1; }
    if (userInputMeat.find(no) != string::npos) { randomMeat = 0; }
    if (randomMeat == 0) { randomMeatAnswer = "You Choose No Meat"; }
    if (randomMeat == 1) { randomMeatAnswer = "Turkey"; }
    if (randomMeat == 2) { randomMeatAnswer = "Roast Beef"; }
    if (randomMeat == 3) { randomMeatAnswer = "Ham"; }
    if (randomMeat == 4) { randomMeatAnswer = "Chicken"; }
    if (randomMeat == 5) { randomMeatAnswer = "Bacon"; }
    else if (randomMeat > 5 && randomMeat < 0) { randomMeatAnswer = "There was an error, please check the sandwich code."; }

    // Peppers
    if (userInputPeppers.find(yes) != string::npos) { randomPeppers = rand() % 4 + 1; }
    if (userInputPeppers.find(no) != string::npos) { randomPeppers = 0; }
    if (randomPeppers == 0) { randomPeppersAnswer = "You Choose No Peppers"; }
    if (randomPeppers == 1) { randomPeppersAnswer = "Bell Peppers"; }
    if (randomPeppers == 2) { randomPeppersAnswer = "Jalapenos"; }
    if (randomPeppers == 3) { randomPeppersAnswer = "Hot Pepper Mix"; }
    if (randomPeppers == 4) { randomPeppersAnswer = "Banana Peppers"; }
    else if (randomPeppers > 4 && randomPeppers < 0) { randomPeppersAnswer = "There was an error, please check the sandwich code."; }

    // Dressing
    if (userInputDressing.find(yes) != string::npos) { randomDressing = rand() % 7 + 1; }
    if (userInputDressing.find(no) != string::npos) { randomDressing = 0; }
    if (randomDressing == 0) { randomDressingAnswer = "You Choose No Dressing"; }
    if (randomDressing == 1) { randomDressingAnswer = "Ranch"; }
    if (randomDressing == 2) { randomDressingAnswer = "Spicy Ranch"; }
    if (randomDressing == 3) { randomDressingAnswer = "Thousand Island Sause"; }
    if (randomDressing == 4) { randomDressingAnswer = "Mustard"; }
    if (randomDressing == 5) { randomDressingAnswer = "Wich Sauce"; }
    if (randomDressing == 6) { randomDressingAnswer = "Mayo"; }
    if (randomDressing == 7) { randomDressingAnswer = "Pesto"; }
    else if (randomDressing > 7 && randomDressing < 0) { randomDressingAnswer = "There was an error, please check the sandwich code."; }

    // Toppings
    if (userInputToppings.find(yes) != string::npos) { randomToppings1 = rand() % 9 + 1; }
    if (userInputToppings.find(yes) != string::npos) { randomToppings2 = rand() % 9 + 1; }
    if (userInputToppings.find(yes) != string::npos) { randomToppings3 = rand() % 9 + 1; }
    if (userInputToppings.find(no) != string::npos) { randomToppings = 0; randomToppingsAnswer = "You Choose No Toppings"; }
    // Toppings1
    if (randomToppings1 == 1) { randomToppingsAnswer1 = "Red Onions"; }
    if (randomToppings1 == 2) { randomToppingsAnswer1 = "Crispy Onions"; }
    if (randomToppings1 == 3) { randomToppingsAnswer1 = "Caramelized Onions"; }
    if (randomToppings1 == 4) { randomToppingsAnswer1 = "Avocado"; }
    if (randomToppings1 == 5) { randomToppingsAnswer1 = "Pickles"; }
    if (randomToppings1 == 6) { randomToppingsAnswer1 = "Tomatoes"; }
    if (randomToppings1 == 7) { randomToppingsAnswer1 = "Lettuce"; }
    if (randomToppings1 == 8) { randomToppingsAnswer1 = "Black Olives"; }
    if (randomToppings1 == 9) { randomToppingsAnswer1 = "Cucumbers"; }
    else if (randomToppings1 > 9 && randomToppings1 < 0) { randomToppingsAnswer1 = "There was an error, please check the sandwich code."; }
    //  Toppings2
    if (randomToppings2 == 1) { randomToppingsAnswer2 = "Red Onions"; }
    if (randomToppings2 == 2) { randomToppingsAnswer2 = "Crispy Onions"; }
    if (randomToppings2 == 3) { randomToppingsAnswer2 = "Caramelized Onions"; }
    if (randomToppings2 == 4) { randomToppingsAnswer2 = "Avocado"; }
    if (randomToppings2 == 5) { randomToppingsAnswer2 = "Pickles"; }
    if (randomToppings2 == 6) { randomToppingsAnswer2 = "Tomatoes"; }
    if (randomToppings2 == 7) { randomToppingsAnswer2 = "Lettuce"; }
    if (randomToppings2 == 8) { randomToppingsAnswer2 = "Black Olives"; }
    if (randomToppings2 == 9) { randomToppingsAnswer2 = "Cucumbers"; }
    else if (randomToppings1 > 9 && randomToppings1 < 0) { randomToppingsAnswer2 = "There was an error, please check the sandwich code."; }
    //  Toppings3
    if (randomToppings3 == 1) { randomToppingsAnswer3 = "Red Onions"; }
    if (randomToppings3 == 2) { randomToppingsAnswer3 = "Crispy Onions"; }
    if (randomToppings3 == 3) { randomToppingsAnswer3 = "Caramelized Onions"; }
    if (randomToppings3 == 4) { randomToppingsAnswer3 = "Avocado"; }
    if (randomToppings3 == 5) { randomToppingsAnswer3 = "Pickles"; }
    if (randomToppings3 == 6) { randomToppingsAnswer3 = "Tomatoes"; }
    if (randomToppings3 == 7) { randomToppingsAnswer3 = "Lettuce"; }
    if (randomToppings3 == 8) { randomToppingsAnswer3 = "Black Olives"; }
    if (randomToppings3 == 9) { randomToppingsAnswer3 = "Cucumbers"; }
    else if (randomToppings3 > 9 && randomToppings3 < 0) { randomToppingsAnswer3 = "There was an error, please check the sandwich code."; }

    // Cheese
    if (userInputCheese.find(yes) != string::npos) { randomCheese = rand() % 4 + 1; }
    if (userInputCheese.find(no) != string::npos) { randomCheese = 0; }
    if (randomCheese == 0) { randomCheeseAnswer = "You Choose No Cheese"; }
    if (randomCheese == 1) { randomCheeseAnswer = "Cheddar"; }
    if (randomCheese == 2) { randomCheeseAnswer = "Provolone"; }
    if (randomCheese == 3) { randomCheeseAnswer = "Pepper Jack"; }
    if (randomCheese == 4) { randomCheeseAnswer = "Swiss"; }
    else if (randomCheese > 4 && randomCheese < 0) { randomCheeseAnswer = "There was an error, please check the sandwich code."; }

    // Spices
    if (userInputSpice.find(yes) != string::npos) { randomSpice = rand() % 2 + 1; }
    if (userInputSpice.find(no) != string::npos) { randomSpice = 0; }
    if (randomSpice == 0) { randomSpiceAnswer = "You Choose No Spice"; }
    if (randomSpice == 1) { randomSpiceAnswer = "Salt"; }
    if (randomSpice == 2) { randomSpiceAnswer = "Pepper"; }
    else if (randomSpice > 2 && randomSpice < 0) { randomSpiceAnswer = "There was an error, please check the sandwich code."; }

    // Bread
    randomBread = rand() & 2 + 1;
    if (randomBread == 1) { randomBreadAnswer = "White"; }
    if (randomBread == 2) { randomBreadAnswer = "Whole"; }
    else if (randomBread > 2 && randomBread < 0) { randomBreadAnswer = "There was an error, please check the sandwich code."; }

    // Rare Outputs
    if (randomMeat == 0 && randomPeppers == 0 && randomDressing == 0 && randomToppings1 == 0 && randomToppings2 == 0 && randomToppings3 == 0 && randomCheese == 0 && randomSpice == 0) { jokeAnswer = "Uncommon, it's just bread"; }
    if (randomMeat == 1 && randomPeppers == 1 && randomDressing == 1 && randomToppings1 == 1 && randomToppings2 == 1 && randomToppings3 == 1 && randomCheese == 1 && randomSpice == 1) { jokeAnswer = "Ultra Rare"; }
    if (randomMeat == 2 && randomPeppers == 2 && randomDressing == 2 && randomToppings1 == 2 && randomToppings2 == 2 && randomToppings3 == 2 && randomCheese == 2 && randomSpice == 2) { jokeAnswer = "Ultra Rare"; }
    else { jokeAnswer = "Common"; }
}

void output() {
    cout << fixed;
    cout << "Here is your random sandwich:" << endl << endl;
    cout << setw(COL1) << left << "MEAT: " << randomMeatAnswer << endl;
    cout << setw(COL1) << left << "Peppers: " << randomPeppersAnswer << endl;
    cout << setw(COL1) << left << "Dressing: " << randomDressingAnswer << endl;
    cout << setw(COL1) << left << "Topping 1: " << randomToppingsAnswer1 << randomToppingsAnswer << endl;
    cout << setw(COL1) << left << "Topping 2: " << randomToppingsAnswer2 << randomToppingsAnswer << endl;
    cout << setw(COL1) << left << "Topping 3: " << randomToppingsAnswer3 << randomToppingsAnswer << endl;
    cout << setw(COL1) << left << "Cheese: " << randomCheeseAnswer << endl;
    cout << setw(COL1) << left << "Spice: " << randomSpiceAnswer << endl;
    cout << setw(COL1) << left << "Bread: " << randomBreadAnswer << endl;
    cout << endl << "Sandwich Rarity: " << jokeAnswer << endl;

    cout << endl << "Sandwich Code: " << randomMeat << randomPeppers << randomDressing << randomToppings1 << randomToppings2 << randomToppings3 << randomCheese << randomSpice << randomBread << endl;
}

int main() {
    srand(time(NULL));
    welcome();
    userInput();
    userInputCalculations();
    output();
    return 0;
}