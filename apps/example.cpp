#include <SimpleClass.hpp>
#include <iostream>

int main(int argc, char const *argv[]) {
  SimpleClass simple;
  simple.setNumber(100);
  std::cout << simple.getNumber();
}
