// Name: Annie Van
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double meal_cost, tax, tip, Total_Bill;

  std::cout << "Welcome to the Restaurant Bill Calculator!" << std::endl;

  //Get total meal cost
  std::cout << "What is the total meal cost? ";
  std::cin >> meal_cost;

  //Calculate tax
  tax = meal_cost * 0.0775;
  std::cout << "Tax: \t\t" << tax << std::endl;

  //Calculate tip
  tip = meal_cost * .20;
  std::cout << "Tip: \t\t" << tip << std::endl;

  //Calculate total Bill
  Total_Bill = meal_cost + tax + tip;
  std::cout << "Total Bill: \t" << Total_Bill << std::endl;

  return 0;
}
