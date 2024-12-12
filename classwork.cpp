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

  std::cout << add_xy << std::endl << sub_xy << std::endl << mult_xy << std::endl << div_xy << std::endl << mod_xy << std::endl;

  int z = 10;
  bool x_greater_z = x > z;
  bool y_greater_x = y > x;
  std::cout << x_greater_z << std::endl
            << y_greater_x << std::endl;
  
  // Exercise 2
  
  return 0;
}
