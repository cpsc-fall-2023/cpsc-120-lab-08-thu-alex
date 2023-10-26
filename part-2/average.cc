// Thu Le
// thul2@csu.fullerton.edu
// @thutwo
// Partners: @AlexLopez3114

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (!(arguments.size() > 1)) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double total{0.0};
  bool first_argument{true};
  for (const std::string& number : arguments) {
    if (first_argument) {
      first_argument = false;
      continue;
    }
    double added_number{std::stod(number)};
    total += added_number;
  }

  total /= static_cast<double>(arguments.size() - 1);

  std::cout << "average = " << total << "\n";

  return 0;
}
