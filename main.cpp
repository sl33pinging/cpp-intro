#include <iostream>

int main(){
  std::string name = "Daniel";
  std::string classroom = "115";
  std::cout << "My name is" << name << std::endl;
  std::cout << "My classroom is " << classroom << std::endl;

  int x = 5;
  int y = 7;
  int z = x + y;
  int w = x * y * z;
  float v = x / (float) y;

  std::cout << "The sum of " << x << " and " << y << " is " << z << std::endl;
  std::cout << "The product of " << x << ", " << y << ",and " << z << " is " << w << std::endl;
  std::cout << "The quotient of " << x << " and " << y << " is " << v << std::endl;


  return 0;
}

int subtract(int x, int y){
  return x - y;
}

int multiply(int x, int y){
  return x * y;
}

int divide(int x, int y){
  return x / y;
}