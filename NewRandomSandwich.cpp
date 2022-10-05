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

const int COMB = 108000;
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

    // cout << "Since this is going to be a sandwich, the bread will automatically be chosen random."; Sleep(3500); system("CLS");
}

void userInputCalculations() {
    // Yes/No Meat
    if (userInputMeat.find(yes) != string::npos) { randomMeat = rand() % 5 + 1; }
    else if (userInputMeat.find(no) != string::npos) { randomMeat = 0; }

    // Meat
    if (randomMeat == 0) { randomMeatAnswer = "You Choose No Meat"; }
    if (randomMeat == 1) { randomMeatAnswer = "Turkey"; }
    else if (randomMeat == 2) { randomMeatAnswer = "Roast Beef"; }
    else if (randomMeat == 3) { randomMeatAnswer = "Ham"; }
    else if (randomMeat == 4) { randomMeatAnswer = "Chicken"; }
    else if (randomMeat == 5) { randomMeatAnswer = "Bacon"; }
    else { randomMeatAnswer = "There was an error, please check the sandwich code."; }

    // Yes/No Peppers
    if (userInputPeppers.find(yes) != string::npos) { randomPeppers = rand() % 4 + 1; }
    else if (userInputPeppers.find(no) != string::npos) { randomPeppers = 0; }

    // Peppers
    if (randomPeppers == 0) { randomPeppersAnswer = "You Choose No Peppers"; }
    if (randomPeppers == 1) { randomPeppersAnswer = "Bell Peppers"; }
    else if (randomPeppers == 2) { randomPeppersAnswer = "Jalapenos"; }
    else if (randomPeppers == 3) { randomPeppersAnswer = "Hot Pepper Mix"; }
    else if (randomPeppers == 4) { randomPeppersAnswer = "Banana Peppers"; }
    else { randomPeppersAnswer = "There was an error, please check the sandwich code."; }

    // Yes/No Dressing
    if (userInputDressing.find(yes) != string::npos) { randomDressing = rand() % 7 + 1; }
    else if (userInputDressing.find(no) != string::npos) { randomDressing = 0; }

    // Dressing
    if (randomDressing == 0) { randomDressingAnswer = "You Choose No Dressing"; }
    if (randomDressing == 1) { randomDressingAnswer = "Ranch"; }
    else if (randomDressing == 2) { randomDressingAnswer = "Spicy Ranch"; }
    else if (randomDressing == 3) { randomDressingAnswer = "Thousand Island Sause"; }
    else if (randomDressing == 4) { randomDressingAnswer = "Mustard"; }
    else if (randomDressing == 5) { randomDressingAnswer = "Wich Sauce"; }
    else if (randomDressing == 6) { randomDressingAnswer = "Mayo"; }
    else if (randomDressing == 7) { randomDressingAnswer = "Pesto"; }
    else { randomDressingAnswer = "There was an error, please check the sandwich code."; }

    // Yes/No Toppings
    if (userInputToppings.find(yes) != string::npos) { randomToppings1 = rand() % 9 + 1; randomToppings2 = rand() % 9 + 1; randomToppings3 = rand() % 9 + 1; }
    if (userInputToppings.find(no) != string::npos) { randomToppings = 0; randomToppingsAnswer = "You Choose No Toppings"; }

    // Toppings1
    if (randomToppings1 == 1) { randomToppingsAnswer1 = "Red Onions"; }
    else if (randomToppings1 == 2) { randomToppingsAnswer1 = "Crispy Onions"; }
    else if (randomToppings1 == 3) { randomToppingsAnswer1 = "Caramelized Onions"; }
    else if (randomToppings1 == 4) { randomToppingsAnswer1 = "Avocado"; }
    else if (randomToppings1 == 5) { randomToppingsAnswer1 = "Pickles"; }
    else if (randomToppings1 == 6) { randomToppingsAnswer1 = "Tomatoes"; }
    else if (randomToppings1 == 7) { randomToppingsAnswer1 = "Lettuce"; }
    else if (randomToppings1 == 8) { randomToppingsAnswer1 = "Black Olives"; }
    else if (randomToppings1 == 9) { randomToppingsAnswer1 = "Cucumbers"; }
    else { randomToppingsAnswer1 = "There was an error, please check the sandwich code."; }

    //  Toppings2
    if (randomToppings2 == 1) { randomToppingsAnswer2 = "Red Onions"; }
    else if (randomToppings2 == 2) { randomToppingsAnswer2 = "Crispy Onions"; }
    else if (randomToppings2 == 3) { randomToppingsAnswer2 = "Caramelized Onions"; }
    else if (randomToppings2 == 4) { randomToppingsAnswer2 = "Avocado"; }
    else if (randomToppings2 == 5) { randomToppingsAnswer2 = "Pickles"; }
    else if (randomToppings2 == 6) { randomToppingsAnswer2 = "Tomatoes"; }
    else if (randomToppings2 == 7) { randomToppingsAnswer2 = "Lettuce"; }
    else if (randomToppings2 == 8) { randomToppingsAnswer2 = "Black Olives"; }
    else if (randomToppings2 == 9) { randomToppingsAnswer2 = "Cucumbers"; }
    else { randomToppingsAnswer2 = "There was an error, please check the sandwich code."; }

    //  Toppings3
    if (randomToppings3 == 1) { randomToppingsAnswer3 = "Red Onions"; }
    else if (randomToppings3 == 2) { randomToppingsAnswer3 = "Crispy Onions"; }
    else if (randomToppings3 == 3) { randomToppingsAnswer3 = "Caramelized Onions"; }
    else if (randomToppings3 == 4) { randomToppingsAnswer3 = "Avocado"; }
    else if (randomToppings3 == 5) { randomToppingsAnswer3 = "Pickles"; }
    else if (randomToppings3 == 6) { randomToppingsAnswer3 = "Tomatoes"; }
    else if (randomToppings3 == 7) { randomToppingsAnswer3 = "Lettuce"; }
    else if (randomToppings3 == 8) { randomToppingsAnswer3 = "Black Olives"; }
    else if (randomToppings3 == 9) { randomToppingsAnswer3 = "Cucumbers"; }
    else { randomToppingsAnswer3 = "There was an error, please check the sandwich code."; }

    // Yes/No Cheese
    if (userInputCheese.find(yes) != string::npos) { randomCheese = rand() % 4 + 1; }
    else if (userInputCheese.find(no) != string::npos) { randomCheese = 0; }

    // Cheese
    if (randomCheese == 0) { randomCheeseAnswer = "You Choose No Cheese"; }
    else if (randomCheese == 1) { randomCheeseAnswer = "Cheddar"; }
    else if (randomCheese == 2) { randomCheeseAnswer = "Provolone"; }
    else if (randomCheese == 3) { randomCheeseAnswer = "Pepper Jack"; }
    else if (randomCheese == 4) { randomCheeseAnswer = "Swiss"; }
    else { randomCheeseAnswer = "There was an error, please check the sandwich code."; }

    // Yes/No Spices
    if (userInputSpice.find(yes) != string::npos) { randomSpice = rand() % 2 + 1; }
    else if (userInputSpice.find(no) != string::npos) { randomSpice = 0; }

    // Spices
    if (randomSpice == 0) { randomSpiceAnswer = "You Choose No Spice"; }
    else if (randomSpice == 1) { randomSpiceAnswer = "Salt"; }
    else if (randomSpice == 2) { randomSpiceAnswer = "Pepper"; }
    else { randomSpiceAnswer = "There was an error, please check the sandwich code."; }

    // Bread
    randomBread = rand() & 2 + 1;
    if (randomBread == 1) { randomBreadAnswer = "White"; }
    else if (randomBread == 2) { randomBreadAnswer = "Whole"; }
    else { randomBreadAnswer = "There was an error, please check the sandwich code."; }

    // Rare Outputs
    if (randomMeat == 0 && randomPeppers == 0 && randomDressing == 0 && randomToppings1 == 0 && randomToppings2 == 0 && randomToppings3 == 0 && randomCheese == 0 && randomSpice == 0) { jokeAnswer = "Uncommon, it's just bread, nothing else."; }
    if (randomMeat == 1 && randomPeppers == 1 && randomDressing == 1 && randomToppings1 == 1 && randomToppings2 == 1 && randomToppings3 == 1 && randomCheese == 1 && randomSpice == 1) { jokeAnswer = "Number One Sandwich, that's pretty rare!"; }
    if (randomMeat == 2 && randomPeppers == 2 && randomDressing == 2 && randomToppings1 == 2 && randomToppings2 == 2 && randomToppings3 == 2 && randomCheese == 2 && randomSpice == 2) { jokeAnswer = "Two for One Sandwich, that's pretty rare!"; }
    if (randomMeat == 0 && randomPeppers == 0 && randomDressing == 0 && randomToppings1 == 5 && randomToppings2 == 5 && randomToppings3 == 5 && randomCheese == 0 && randomSpice == 0) { jokeAnswer = "Hey Morty! I'm a pickle sandwich!"; }
    else { jokeAnswer = "Common Sandwich, nothing too special."; }
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

    cout << endl << "Enjoy!" << endl;
}

int main() {
    srand(time(NULL));
    // welcome();
    userInput();
    userInputCalculations();
    output();
    return 0;
}