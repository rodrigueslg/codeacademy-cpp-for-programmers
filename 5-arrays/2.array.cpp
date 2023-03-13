/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
  int userInput[40];
  for (int i = 0; i < 40; i++)
  {
    std::cout << "Enter the next number: ";
    std::cin >> userInput[i];
  }

  for (int i = 40; i >= 0; i--)
  {
    std::cout
  }

  return 0;
}