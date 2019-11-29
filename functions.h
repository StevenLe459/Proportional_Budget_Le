#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Budget.h"
#include <vector>
#include <iostream>

void showMenu(std::vector<Budget*>, double&, double&);

void showMenu(std::vector<Budget*> vect, double& p1, double& p2) {
  std::cout << "Menu:" << std::endl;
  std::cout << "Option A: Edit overall budget income" << std::endl;
  std::cout << "Option B: Edit expenses" << std::endl;
  std::cout << "Option C: Edit proportional percentages" << std::endl;
  std::cout << "Option E: Exit" << 
}
#endif