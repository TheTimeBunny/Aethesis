//language made for TimeBom game engine.
//barely working, input and output done. This isn't meant to function, rather, to be a prototype of whats to come with how Aesthesis works. It will be designed to work with TimeBom
#include <fstream>
#include <iostream>

class commands {
public:
  void write(std::string val) {
    std::cout << val;
  }

public:
  void writeLine(std::string val) {
    std::cout << val;
    std::cout << "\n";
  }

public:
  // Now returns the string that was input instead of outputting it.
  std::string input(std::string ask) {
    std::cout << ask;
    std::string input;
    std::cin >> input;
    return input;
  };
};

int main() { //testing
  commands com;
  std::string val = "Hello World!";
  com.write(val);
  std::string ask = "Hello World!";
  com.input(ask);
}