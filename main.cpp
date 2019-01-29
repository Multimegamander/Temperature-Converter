#include <iostream>

int main(int argc, char const *argv[]) {

//Celsius and Fahrenheit
double tempc; //Celsius
double tempf; //Fahrenheit

//Equation for C to F, and VICE VERSA
tempc = (tempf - 32)/1.8; //Calculator for F to C
tempf = (tempc + 32)*0.55; //Calculator for C to F

//Ask if using Celsius or Fahrenheit
char input;
std::cout << "Are you using [C]elsius, or [F]ahrenheit" << endl;
cin >> input;
if (input == 'C')
{
  std::cout << "Enter the temperature in Celsius";
  std::cin >> tempc;
  std::cout << "The temp is " << tempf << " degrees Fahrenheit\n";
}
elseif (input == 'F')
{
  std::cout << "Enter the temperature in Fahrenheit";
  std::cin >> tempf;
  std::cout << "The temp is " << tempc << " degrees Celsius\n";
}

  return 0;
}
