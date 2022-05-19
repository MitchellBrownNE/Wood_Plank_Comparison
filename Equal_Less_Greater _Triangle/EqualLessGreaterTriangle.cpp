#include <iostream>
#include <cmath>

int main() 
{
  //Variables and bools
  float WoodPlank1 = 0.0;
  float WoodPlank2 = 0.0;
  float hypotenuse = 0.0;
  bool Equals = 0;
  bool LessThan = 0;
  bool GreaterThan = 0;
  
  //Greetings prompt
  std::cout << "Welcome to the plank comparison and hypotenuse program!\n\n";

  //User input for both planks
  std::cout << "Please enter length of plank 1: ";
  std::cin >> WoodPlank1;
  std::cout << "Please enter length of plank 2: ";
  std::cin >> WoodPlank2;
  
  //If else statements determining if equal, less, or greater
  if (WoodPlank1 == WoodPlank2)
  {
      Equals = true;
  }
  else
  {
      Equals = false;
  }
  
  if (WoodPlank1 < WoodPlank2)
  {
      LessThan = true;
  }
  else
  {
      LessThan = false;
  }
  
  if (WoodPlank1 > WoodPlank2)
  {
      GreaterThan = true;
  }
  else
  {
      GreaterThan = false;
  }
 
  //Hypotenuse calculation
  hypotenuse = (sqrt(pow(WoodPlank1,2)+pow(WoodPlank2,2)));
  
  //Output prompts
  std::cout << "\nAre both planks equal to eachother: " << std::boolalpha << Equals << std::endl;
  std::cout << "Is plank 1 less than plank number 2: " << std::boolalpha << LessThan << std::endl;
  std::cout << "Is plank 1 great than plank number 2: " << std::boolalpha << GreaterThan << std::endl;
  std::cout << "\nThe hypotenuse of triangle equals to " << hypotenuse <<std::endl;;
  
  return 0;
}


