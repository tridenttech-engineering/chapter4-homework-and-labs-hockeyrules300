// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>

using namespace std;

int main() {
 
  double small=0.0;
  double medium=0.0;
  double large=0.0;
  double family=0.0;
  double percentsmall=0.0;
  double percentmedium=0.0;
  double percentlarge=0.0;
  double percentfamily=0.0;
  double total=0.0;
  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;
  
  total = small + medium + large + family;
  
  percentsmall = small / total * 100;
  percentmedium= medium / total * 100;
  percentlarge = large / total * 100;
  percentfamily= family / total * 100;
  
  cout << "Percent Small: " << percentsmall << "%" << endl;
  cout << "Percent Medium: " << percentmedium << "%" << endl;
  cout << "Percent Large: " << percentlarge << "%" << endl;
  cout << "Percent Family: " << percentfamily << "%" << endl;
  cout <<"Total Pizzas Sold: " <<total << endl;


  

  return 0;
} // end of main function