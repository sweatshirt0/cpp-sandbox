#include <iostream>

int main() {
  char op;
  double num1;
  double num2;
  double result;

  std::cout << "************CALCULATOR************\n";

  std::cout << "Enter the operation you would like to do (+,-,*,/): ";

  std::cin >> op;

  std::cout << "Enter the first number: ";

  std::cin >> num1;

  std::cout << "Enter your second number: ";

  std::cin >> num2;

  switch(op) {
  case '+':
    result = num1 + num2;
    std::cout << "The addition of " << num1 << " and " << num2 << " is " << result << ".\n";
    break;

  case '-':
    result = num1 - num2;
    std::cout << "The subtraction of " << num1 << " and " << num2 << " is " << result << ".\n";
    break;

  case '*':
    result =  num1 * num2;
    std::cout << "The multiplication of " << num1 << " and " << num2 << " is " << result << ".\n";
    break;

  case '/':
    result = num1 / num2;
    std::cout << "The division of " << num1 << " and " << num2 << " is " << result << ".\n";
    break;
  default:
    std::cout << "Please enter a valid operator.\n";
    break;
    
  }

  
  std::cout << "**********************************";
  

  return 0;
}
