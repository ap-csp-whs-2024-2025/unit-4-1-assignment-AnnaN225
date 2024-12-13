#include <iostream>
#include <string>

int main()
{
  //SET age TO 10
  int age = 10;
  double price = 19.99;
  bool hasPets = true;

// \n is a new line
// std::endl is a new line
// std::cout << computer output
  std::cout << age << "\n" << price << std::endl << hasPets << std::endl;

  std::cout << "I am " << age << " years old.\n";
  std:: cout <<"I have " << price << " dollars.\n";
  
  std::string teacher = "Mr. Vu";
  std::string favNum = "5";
  std::cout << "My name is " << teacher << std::endl;

  // Exercise 1
  int x = 25;
  int y = 3;
  int add_xy;
  int sub_xy;
  int mult_xy;
  int div_xy;
  int mod_xy;
  
  add_xy = x + y;
  sub_xy = x - y;
  mult_xy = x*y;
  div_xy = x/y;
  mod_xy = x % y;

  std::cout << "Exercise 1:" << std::endl;
  std::cout << add_xy << std::endl << sub_xy << std::endl << mult_xy << std::endl << div_xy << std::endl << mod_xy << std::endl;

  int z = 10;
  bool x_greater_z = x > z;
  bool y_greater_x = y > x;
  std::cout << x_greater_z << std::endl
            << y_greater_x << std::endl;
  
  // Exercise 2
  bool isSunny = true;
  bool hasUmbrella = false;

  std::cout << "Exercise 2:" << std::endl;
  std::cout << "isSunny && hasUmbrella: " << (isSunny&& hasUmbrella) << std::endl;
  std::cout << "isSunny || hasUmbrella: " << (isSunny|| hasUmbrella) << std::endl;
  std::cout << "!isSunny: " << (!isSunny) << std::endl;
  std::cout << "!isSunny && !hasUmbrella: " << (!isSunny && !hasUmbrella) << std::endl;

  // Exercise 3
  int n = 7;
  double m = 4.0;
  bool hasLicense = false;

  std::cout << "Exercise 3:" << std::endl;
  std::cout <<"n > m: " << (n > m) << std::endl;
  std::cout <<"m == 4.0: " << (m == 4.0) << std::endl;
  std::cout <<"hasLicense && m <= n: " << (hasLicense && m <= n) << std::endl;
  std::cout <<"n > 5 && hasLicense == false: " << (n > 5 && !hasLicense) << std::endl;

  // Exercise 4
  std::string firstName = "John";
  std::string lastName = "Doe";
  double score = 85.75;

  std::cout << "Exercise 4:" << std::endl;
  return 0;
}
