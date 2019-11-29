#ifndef BUDGET_H
#define BUDGET_H
#include <string>

class Budget {
  private:
    double cost;
    std::string decription;
  public:
    Budget(double c, std::string d) {
      cost = c;
      description = d;
    }
    double getCost() const {
      return cost;
    }
    std::string getDescription() const {
      return decription;
    }
    void setCost(double c) {
      cost = c;
    } 
    void setDescription(std::string d) {
      description = d;
    }
};
#endif