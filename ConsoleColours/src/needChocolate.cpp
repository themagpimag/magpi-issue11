  #include <iostream>
  #include <string>
  int main() {
    std::string redBoldBlinking = "\033[0;1;5;31m";
    std::string defaultConsole = "\033[0m";
    std::cout << redBoldBlinking 
                    << "NEED CHOCOLATE!"
                    << defaultConsole << std::endl;
     return 0;
  }

