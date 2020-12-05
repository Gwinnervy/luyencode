#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int convert_str_to_int(std::string &str) {
  int val;
  try {
    val = std::stoi(str);
  } catch (std::invalid_argument &) {
  } catch (std::out_of_range &) {
  }

  return val;
}

std::vector<std::string> split_string(std::string &str) {
  char delim = ' ';
  std::string token;
  std::stringstream ss(str);
  std::vector<std::string> vect = {};

  while (std::getline(ss, token, delim)) {
    vect.push_back(token);
  }

  return vect;
}

int add(int &a, int &b) { return a + b; }

int subtract(int &a, int &b) { return a - b; }

int multiply(int &a, int &b) { return a * b; }

int main(int argc, char *argv[]) {
  int a;
  int b;
  std::string str;
  std::vector<std::string> vect;

  std::getline(std::cin, str);
  vect = split_string(str);

  a = convert_str_to_int(vect.at(0));
  b = convert_str_to_int(vect.at(1));

  std::cout << add(a, b) << ' ';
  std::cout << subtract(a, b) << ' ';
  std::cout << multiply(a, b) << '\n';

  return 0;
}
