#include <iostream>
#include <cmath>

double a; /*we declare the 3 variables of the quadratic equation */
double b;
double c; 
int main() {
  /*we declare the 3 variables of the quadratic equation */
  double a; 
  double b;
  double c;

  //we ask user to enter the variables
  std::cout << "Enter a: ";
  std::cin>> a;

  std::cout << "Enter b: ";
  std::cin>> b;

  std::cout << "Enter c: ";
  std::cin>> c;

  //we declare the roots variable
  double root1;
  double root2;

  root1= (-b+std::sqrt(b*b-4*a*c))/(2*a);
  root2= (-b -std::sqrt(b*b-4*a*c))/(2*a);

  //we output the results 
  std::cout <<"Root 1 is " << root1 << "\n";
  std::cout<<"Root 2 is "<< root2 << "\n";
  
  
}
