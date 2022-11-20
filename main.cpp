#include <iostream>

int getNum(){
  int x{}; 
  std::cout << "Enter a number greater than 10: "; 
  std::cin >> x; 
  
  while (x < 10){
    std::cout << "Invalid entry! Try again: ";
    std::cin >> x; 
  }
  std::cout << "Success! Your number is: " << x; 
  
  return x;
}

int main() {
  getNum();
}