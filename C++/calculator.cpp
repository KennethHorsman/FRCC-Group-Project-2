// A calculator program that takes an operator (+, -, *, /) as input to perform a specified arithmetic operation.

#include <iostream>
#include <string>
using namespace std;

bool isConvertibleToDouble(const string& str) {;
   try {
      stod(str);
      return true;

   } catch (...) {
      return false;
   }
   }

int main() {

   string string1, string2;
   double value1, value2;
   bool checkInput =  true;
   double result;
   char operation;

   while (checkInput) {
      cout << "Enter first value: ";
      cin >> string1;
      if (isConvertibleToDouble(string1)) break;
      if (!isConvertibleToDouble(string1)) cout << "Error: Value entered is not a number." << endl;
   }


   while (checkInput) {
      cout << "Enter operation (+ - * /): ";
      cin >> operation;
      if (operation == '+' || operation == '-' || operation == '*' || operation == '/') break;
      else cout << "Error: Operation invalid." << endl;
   }


   while (checkInput) {
      cout << "Enter second value: ";
      cin >> string2;
      if (isConvertibleToDouble(string2)) break;
      if (!isConvertibleToDouble(string2)) cout << "Error: Value entered is not a number." << endl;
   }


   value1 = stod(string1);
   value2 = stod(string2);

   switch(operation) {

      case('+'):
         result = value1 + value2;
         cout << value1 << " + " << value2 << " = " << result << endl;
         break;
         
      case('-'):
         result = value1 - value2;
         cout << value1 << " - " << value2 << " = " << result << endl;
         break;

      case('*'):
         result = value1 * value2;
         cout << value1 << " * " << value2 << " = " << result << endl;
         break;

      case('/'):
         result = value1 / value2;
         cout << value1 << " / " << value2 << " = " << result << endl;
         break;

   }

   return 0;
}