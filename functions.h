#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Budget.h"
#include "input_validation.h"
#include "color.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

void showMenu();
void handleOption(std::string, std::vector<Budget*>&, double&, double&, double&);
void showExpenseMenu(std::vector<Budget*>&);
void showPercentMenu(double&, double&);
void handleExpense(std::string, std::vector<Budget*>&);
void handlePercent(std::string, double&, double&);
void printResults(std::vector<Budget*>, double, double, double);
void printToFile(std::vector<Budget*>, double, double, double);

void showMenu() {
  std::cout << "Menu:" << std::endl;
  std::cout << "Option A: Edit overall budget income" << std::endl;
  std::cout << "Option B: Edit expenses" << std::endl;
  std::cout << "Option C: Edit proportional percentages" << std::endl;
  std::cout << "Option E: Exit" << std::endl;
}

void handleOption(std::string userOption, std::vector<Budget*>& vect, double& p1, double & p2, double& budgetIncome) {
  if (userOption == "A" || userOption == "a") {
    std::cout << "Please enter the overall budget income." << std::endl;
    budgetIncome = validateDouble(budgetIncome);
  }
  else if (userOption == "B" || userOption == "b") {
    showExpenseMenu(vect);
  }
  else if (userOption == "C" || userOption == "c") {
    showPercentMenu(p1, p2);
  }
  else if (userOption == "E" || userOption == "e") {
    std::cout << "Goodbye!" << std::endl;
  }
  else {
    std::cout << "Invalid option." << std::endl;
  }
}

void showExpenseMenu(std::vector<Budget*>& vect){
  std::string option;
  std::cout << "Option A: Edit Mortgage/Rent" << std::endl;
  std::cout << "Option B: Edit Electric Bills" << std::endl;
  std::cout << "Option C: Edit Gas Bills" << std::endl;
  std::cout << "Option D: Edit Water Bills" << std::endl;
  std::cout << "Option E: Edit Savings" << std::endl;
  std::cout << "Option F: Edit Entertainment Expenses" << std::endl;
  std::cout << "Option G: Edit Clothes Expenses" << std::endl;
  std::cout << "Option H: Edit Shoes Expenses" << std::endl;
  std::cout << "Option I: Edit Vending Machine Expenses" << std::endl;
  std::cout << "Option J: Edit Credit Card Payments" << std::endl;
  std::cout << "Option K: Edit Car Payments" << std::endl;
  std::cout << "Option L: Edit Car Insurance Expenses" << std::endl;
  std::cout << "Option M: Edit Car Maintenance Expenses" << std::endl;
  std::cout << "Option N: Edit Car Gas Expenses" << std::endl;
  std::cout << "Option O: Edit School Books Expenses" << std::endl;
  std::cout << "Option P: Edit Groceries Expenses" << std::endl;
  std::cout << "Option Q: Edit Dining Out Expenses" << std::endl;
  std::cout << "Option R: Edit Cleaning Supplies Expenses" << std::endl;
  std::cout << "Option S: Edit Personal Care Expenses" << std::endl;
  std::cout << "Option T: Edit Charity Expenses" << std::endl;
  std::cout << "Option U: Edit Day Care Expenses" << std::endl;
  std::cout << "Option V: Edit Pet Care Expenses" << std::endl;
  std::cout << "Option W: Edit Cell Phone Expenses" << std::endl;
  std::cout << "Option X: Edit Internet Expenses" << std::endl;
  std::cout << "Option Y: Edit Cable/Satellite Expenses" << std::endl;
  std::cout << "Option Z: Edit Streaming Services Expenses" << std::endl;
  std::cout << "Option AA: Edit Amazon Spendings" << std::endl;
  std::cout << "Option AB: Return" << std::endl;
  std::cout << "Please enter your option: ";
  std::cin >> option;
  handleExpense(option, vect);
}

void showPercentMenu(double& p1, double& p2) {
  std::string option;
  std::cout << "Option A: Edit Person One's Percentage" << std::endl;
  std::cout << "Option B: Edit Person Two's Percentage" << std::endl;
  std::cout << "Option C: Return" << std::endl;
  std::cout << "Please enter your option: ";
  std::cin >> option;
  handlePercent(option, p1, p2);
}

void handleExpense(std::string userOption, std::vector<Budget*>& vect) {
  double d;
  if (userOption == "A" || userOption == "a") {
    std::cout << "Please enter the mortgage/rent." << std::endl;
    d = validateDouble(d);
    vect[0]->setCost(d);
  }
  else if (userOption == "B" || userOption == "b") {
    std::cout << "Please enter the electric bills." << std::endl;
    d = validateDouble(d);
    vect[1]->setCost(d);
  }
  else if (userOption == "C" || userOption == "c") {
    std::cout << "Please enter the gas bills." << std::endl;
    d = validateDouble(d);
    vect[2]->setCost(d);
  }
  else if (userOption == "D" || userOption == "d") {
    std::cout << "Please enter the water bills." << std::endl;
    d = validateDouble(d);
    vect[3]->setCost(d);
  }
  else if (userOption == "E" || userOption == "e") {
    std::cout << "Please enter the savings." << std::endl;
    d = validateDouble(d);
    vect[4]->setCost(d);
  }
  else if (userOption == "F" || userOption == "f") {
    std::cout << "Please enter the entertainment expenses." << std::endl;
    d = validateDouble(d);
    vect[5]->setCost(d);
  }
  else if (userOption == "G" || userOption == "g") {
    std::cout << "Please enter the clothes expenses." << std::endl;
    d = validateDouble(d);
    vect[6]->setCost(d);
  }
  else if (userOption == "H" || userOption == "h") {
    std::cout << "Please enter the shoes expenses." << std::endl;
    d = validateDouble(d);
    vect[7]->setCost(d);
  }
  else if (userOption == "I" || userOption == "i") {
    std::cout << "Please enter the vending machine expenses." << std::endl;
    d = validateDouble(d);
    vect[8]->setCost(d);
  }
  else if (userOption == "J" || userOption == "j") {
    std::cout << "Please enter the credit card payments." << std::endl;
    d = validateDouble(d);
    vect[9]->setCost(d);
  }
  else if (userOption == "K" || userOption == "k") {
    std::cout << "Please enter the car payments." << std::endl;
    d = validateDouble(d);
    vect[10]->setCost(d);
  }
  else if (userOption == "L" || userOption == "l") {
    std::cout << "Please enter the car insurance expenses." << std::endl;
    d = validateDouble(d);
    vect[11]->setCost(d);
  }
  else if (userOption == "M" || userOption == "m") {
    std::cout << "Please enter the car maintenance expenses." << std::endl;
    d = validateDouble(d);
    vect[12]->setCost(d);
  }
  else if (userOption == "N" || userOption == "n") {
    std::cout << "Please enter the car gas expenses." << std::endl;
    d = validateDouble(d);
    vect[13]->setCost(d);
  }
  else if (userOption == "O" || userOption == "o") {
    std::cout << "Please enter the school books expenses." << std::endl;
    d = validateDouble(d);
    vect[14]->setCost(d);
  }
  else if (userOption == "P" || userOption == "p") {
    std::cout << "Please enter the groceries expenses." << std::endl;
    d = validateDouble(d);
    vect[15]->setCost(d);
  }
  else if (userOption == "Q" || userOption == "q") {
    std::cout << "Please enter the dining out expenses." << std::endl;
    d = validateDouble(d);
    vect[16]->setCost(d);
  }
  else if (userOption == "R" || userOption == "r") {
    std::cout << "Please enter the cleaning supplies expenses." << std::endl;
    d = validateDouble(d);
    vect[17]->setCost(d);
  }
  else if (userOption == "S" || userOption == "s") {
    std::cout << "Please enter the personal care expenses." << std::endl;
    d = validateDouble(d);
    vect[18]->setCost(d);
  }
  else if (userOption == "T" || userOption == "t") {
    std::cout << "Please enter the charity expenses." << std::endl;
    d = validateDouble(d);
    vect[19]->setCost(d);
  }
  else if (userOption == "U" || userOption == "u") {
    std::cout << "Please enter the day care expenses." << std::endl;
    d = validateDouble(d);
    vect[20]->setCost(d);
  }
  else if (userOption == "V" || userOption == "v") {
    std::cout << "Please enter the pet care expenses." << std::endl;
    d = validateDouble(d);
    vect[21]->setCost(d);
  }
  else if (userOption == "W" || userOption == "w") {
    std::cout << "Please enter the cell phone expenses." << std::endl;
    d = validateDouble(d);
    vect[22]->setCost(d);
  }
  else if (userOption == "X" || userOption == "x") {
    std::cout << "Please enter the internet expenses." << std::endl;
    d = validateDouble(d);
    vect[23]->setCost(d);
  }
  else if (userOption == "Y" || userOption == "y") {
    std::cout << "Please enter the cable/satellite expenses." << std::endl;
    d = validateDouble(d);
    vect[24]->setCost(d);
  }
  else if (userOption == "Z" || userOption == "z") {
    std::cout << "Please enter the streaming services expenses." << std::endl;
    d = validateDouble(d);
    vect[25]->setCost(d);
  }
  else if (userOption == "AA" || userOption == "aa") {
    std::cout << "Please enter the Amazon spendings." << std::endl;
    d = validateDouble(d);
    vect[26]->setCost(d);
  }
  else if (userOption == "AB" || userOption == "ab") {
    ;
  }
  else {
    std::cout << "Invalid option." << std::endl;
  }
}

void handlePercent(std::string userOption, double& p1, double& p2) {
  if (userOption == "A" || userOption == "a") {
    std::cout << "Please enter the proportional percentage of Person One." << std::endl;
    p1 = validateDouble(p1);
  }
  else if (userOption == "B" || userOption == "b") {
    std::cout << "Please enter the proportional percentage of Person Two." << std::endl;
    p2 = validateDouble(p2);
  }
  else if (userOption == "C" || userOption == "c") {
    ;
  }
  else {
    std::cout << "Invalid option." << std::endl;
  }
}

void printResults(std::vector<Budget*> vect, double income, double p1, double p2) {
  double totalExpenses = 0.0;
  double totalP1 = 0.0;
  double totalP2 = 0.0;
  std::cout << "Total Income: " << "$" << std::fixed << std::setprecision(2) << income << std::endl;
  std::cout << "Proportional Percentage P1: " << p1 << "%" << std::endl;
  std::cout << "Proportional Percentage P2: " << p2 << "%" << std::endl;
  std::cout << std::setw(20) << "Description" << std::setw(10) << "Expense" << std::setw(10) << "P1" << std::setw(10) << "P2" << std::endl;
  std::cout << "-------------------------------------------------" << std::endl;
  for (Budget* b : vect) {
    std::cout << std::right << std::setw(20) << b->getDescription() << std::setw(10) << std::fixed << std::setprecision(2) << "$" << b->getCost() << std::setw(10) << std::fixed << std::setprecision(2) << "$" << b->getCost() * p1 / 100.00 << std::setw(10) << std::fixed << std::setprecision(2) << "$" << b->getCost() * p2 / 100.00 << std::endl;
    totalExpenses += b->getCost();
    totalP1 += b->getCost() * p1 / 100.00;
    totalP2 += b->getCost() * p2 / 100.00;
  }
  std::cout << std::right << std::setprecision(20) << "Total" << std::setw(10) << std::fixed << std::setprecision(2) << "$" << totalExpenses << std::setw(10) << std::fixed << std::setprecision(2) << "$" << totalP1 << std::setw(10) << std::fixed << std::setprecision(2) << "$" << totalP2 << std::endl;
  std::cout << "Remaining: $" << std::fixed << std::setprecision(2) << income - totalExpenses << std::endl;  
}

void printToFile(std::vector<Budget*> vect, double income, double p1, double p2) {
  std::ofstream file;
  double totalExpenses = 0.0;
  double totalP1 = 0.0;
  double totalP2 = 0.0;
  file.open("Budget.txt");
  file << "Total Income: " << income << std::endl;
  file << "Proportional Percentage P1: " << p1 << "%" << std::endl;
  file << "Proportional Percentage P2: " << p2 << "%" << std::endl;
  file << std::right << std::setw(20) << "Description" << std::setw(10) << "Expense" << std::setw(10) << "P1" << std::setw(10) << "P2" << std::endl;
  file << "---------------------------------------------------------" << std::endl;
  for (Budget* b : vect) {
    totalExpenses += b->getCost();
    totalP1 += b->getCost() * p1 / 100.00;
    totalP2 += b->getCost() * p2 / 100.00;
    file << std::setw(20) << b->getDescription() << std::setw(10) << std::fixed <<std::setprecision(2) << "$" << b->getCost() << std::setw(10) << std::fixed << std::setprecision(2) << "$" << b->getCost() * p1 / 100.00 << std::setw(10) << std::fixed << std::setprecision(2) << "$" << b->getCost() * p2 / 100.00 << std::endl;
  }
  file << std::setprecision(20) << "Total" << std::setw(10) << std::fixed << std::setprecision(2) << "$" << totalExpenses << std::setw(10) << std::fixed << std::setprecision(2) << "$" << totalP1 << std::setw(10) << std::fixed << std::setprecision(2) << "$" << totalP2 << std::endl;
  file << "Remaining: $" << std::fixed << std::setprecision(2) << income - totalExpenses << std::endl;
  file.close();
}
#endif