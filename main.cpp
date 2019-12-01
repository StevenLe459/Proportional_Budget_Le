#include "functions.h"

int main() {
  std::string option;
  Budget a(900, "Mortgage/Rent");
  Budget b(100, "Electric");
  Budget c(0, "Gas(Home)");
  Budget d(55, "Water");
  Budget e(500, "Savings");
  Budget f(50, "Entertainment");
  Budget g(83.33, "Clothes");
  Budget h(12.50, "Shoes");
  Budget i(18, "Vending Machine");
  Budget j(200, "Credit Card Payments");
  Budget k(315, "Car Payments");
  Budget l(88, "Car Insurance");
  Budget m(25, "Car Maintenance");
  Budget n(90, "Car Gas");
  Budget o(0, "School Books");
  Budget p(100, "Groceries");
  Budget q(105, "Dining Out");
  Budget r(12, "Cleaning Supplies");
  Budget s(50, "Personal Care");
  Budget t(100, "Charity");
  Budget u(0, "Day Care");
  Budget v(100, "Pet Care");
  Budget w(100, "Cell Phone");
  Budget x(90, "Internet");
  Budget y(0, "Cable/Satellite");
  Budget z(35, "Streaming Services");
  Budget aa(90, "Amazon Spendings");
  std::vector<Budget*> vect = {&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p, &q, &r, &s, &t, &u, &v, &w, &x, &y, &z, &aa};
  double totalIncome = 7498.33;
  double p1 = 60;
  double p2 = 40;
  do {
    std::cout << "\x1b[2J\x1b[1;1H";
    printResults(vect, totalIncome, p1, p2);
    printToFile(vect, totalIncome, p1, p2);
    showMenu();
    std::cout << "Please enter your option: ";
    std::cin >> option;
    handleOption(option, vect, p1, p2, totalIncome);
  } while (option != "E" && option != "e");
  return 0;
}