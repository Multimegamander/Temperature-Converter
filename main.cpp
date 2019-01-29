#include <iostream>

//Celsius and Fahrenheit
double tempc; //Celsius
double tempf; //Fahrenheit

int main()
{
  //Ask if using Celsius or Fahrenheit
  char input;
  std::cout << "Are you using [C]elcius, or [F]ahrenheit?" <<"\n";
  std::cin >> input;
  if (input == 'C')
  {
    std::cout << "Enter the temperature in Celsius";
    std::cin >> tempc;
    tempf = (tempc * 1.8)+32; //Calculator for C to F
    std::cout << "The temp is " << tempf << " degrees Fahrenheit\n";
  }
  else if (input == 'F')
  {
    std::cout << "Enter the temperature in Fahrenheit";
    std::cin >> tempf;
    tempc = (tempf - 32)/0.5556; //Calculator for F to C
    std::cout << "The temp is " << tempc << " degrees Celsius\n";
  }
}
