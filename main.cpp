#include <iostream>
#include <string>
#include <vector>

#include "add_two_numbers/solution.hpp"
#include "longest_unique_substring/solution.hpp"
#include "magnetic_force_between_two_balls/solution.hpp"

int main(int argc, char* argv[]) {

  std::cout << "Hello Leetcode examples" << std::endl;

  int problem_selector = 3;
  if (argc == 2) {
    std::cout << "Selecting the problem with argv[1]" << std::endl;
    try {
      problem_selector = std::stoi(argv[1]);
    } catch (...) {
      std::cout << "ERROR: invalid problem selector " << argv[0] << " ^"
                << argv[1] << "^" << std::endl;
      return 1;
    }
  }
  std::cout << "-> running problem " + std::to_string(problem_selector) << std::endl;

  // Add two numbers
  if (problem_selector == 1) {
    const AddTwoNumbers::ListNode* l1 =  //
    AddTwoNumbers::fromVectorInt(std::vector<int>{ 9, 9, 9, 9, 9, 9, 9 });
    const AddTwoNumbers::ListNode* l2 =  //
    AddTwoNumbers::fromVectorInt(std::vector<int>{ 9, 9, 9, 9 });
    const AddTwoNumbers::ListNode* lresult = AddTwoNumbers::addTwoNumbers(l1, l2);
    AddTwoNumbers::printSolution(lresult);
  } else if (problem_selector == 3) {
    std::string input_str = "abvwcbefgae";
    std::string result = LongestUniqueSubstring::longestUniqueSubstring(input_str);
    std::cout << "The longest unique substring for '" << input_str << "' is '" << result
              << "', of size " << std::to_string(result.length()) << std::endl;
  } else if (problem_selector == 1552) {
    std::cout << "The result for the input bucket [79,74,57,22] w/ 4 is "
                 + std::to_string(MagneticForceBetweenTwoBalls::idealBasketPlacement(
                 std::vector<int>{ 79, 74, 57, 22 }, 4))
              << std::endl;

    std::cout << "The result for the input bucket [1,2,3,4,7] w/ 3 is "
                 + std::to_string(MagneticForceBetweenTwoBalls::idealBasketPlacement(
                 std::vector<int>{ 1, 2, 3, 4, 7 }, 3))
              << std::endl;
  }
}
