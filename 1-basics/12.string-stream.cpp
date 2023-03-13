/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include <iostream>
#include <string>
#include <sstream>

int main()
{
  std::string stringHeight, stringWidth;
  float height = 0;
  float width = 0;
  float area = 0;

  std::cout << "Enter the room height: ";
  std::getline(std::cin, stringHeight);
  std::stringstream(stringHeight) >> height;

  std::cout << "Enter the room widht: ";
  std::getline(std::cin, stringWidth);
  std::stringstream(stringWidth) >> width;

  area = width * height;
  std::cout << "The room area is " << area << "\n";
  return 0;
}
