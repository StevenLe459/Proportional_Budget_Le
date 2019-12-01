#ifndef BUDGET_H
#define BUDGET_H
#include <string>

class Budget {
  private:
    double cost;
    std::string description;
  public:
    Budget(double c, std::string d) {
      cost = c;
      description = d;
    }
    double getCost() const {
      return cost;
    }
    std::string getDescription() const {
      return description;
    }
    void setCost(double c) {
      cost = c;
    } 
    void setDescription(std::string d) {
      description = d;
    }
};
#endif