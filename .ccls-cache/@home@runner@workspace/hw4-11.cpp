// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
// declare variables
  double balancef= 0.0;
  double balancei=0.0;
  double deposits=0.0;
  double withdrawals=0.0;
  cout << "Enter beginning balance: \n";
  cin >> balancei;
  cout << "Enter deposits: \n";
  cin >> deposits;
  cout << "Enter withdrawals: \n";
  cin >> withdrawals;
  balancef = balancei + deposits - withdrawals;
  cout << "Ending balance: $" << balancef << endl;
  

  

  return 0;
} // end of main function