#include <iostream>
#include <string>

int main()
{
  int age = 16; // SET age TO 16
  double price = 19.99;
  bool isRaining = false;

  std::string stu_name = "John";
  std::string number = "5";

  std::cout << age << "\n" << price << std::endl << isRaining <<"\n";

  int grade_level = 11;
  std::cout<<"I am an " << grade_level << "th grader." << std::endl;
  
  // Exersize 1
  int x = 25;
  int y = 3;
  int add_xy = x+y;
  int sub_xy = x-y; 
  int mult_xy = x*y;
  int div_xy = x/y;
  int mod_xy = x%y;
  std::cout << add_xy << std::endl
            << sub_xy << std::endl
            << mult_xy << std::endl
            << div_xy << std::endl
            << mod_xy << std::endl;
  return 0;
}
