// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;
  name = "bill";
  // build the message that we intend to write
  const static std::string greeting = "Hello, " + name + "!";

  // build the second and fourth lines of the output
  const static std::string spaces(greeting.size(), ' ');
  const static std::string second = "* " + spaces + " *";

  // build the first and fifth lines of the output
  const static std::string first(second.size(), '*');

  // write it all
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}
