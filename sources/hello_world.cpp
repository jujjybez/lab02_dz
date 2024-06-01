#include <iostream>

int
main()
{
  std::string name;            // create string
  std::cout << "Enter name: "; // a message to enter a name
  std::cin >> name;            // enter a name from a keyboard
  std::cout << std::endl
            << "Hello world from " << name; // display the message with a name
  return 0;
}
