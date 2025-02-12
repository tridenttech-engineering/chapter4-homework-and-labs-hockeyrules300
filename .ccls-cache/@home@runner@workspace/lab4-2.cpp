//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
double sales=0.0;
  const double commRate=0.10;
  double comm=0.0;
  cout << "Sales amount: ";
  cin >> sales;
  comm=sales * commRate;
  cout << "Commission: $" << comm << endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/