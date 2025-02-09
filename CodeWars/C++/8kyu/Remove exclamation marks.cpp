// link this kata is : https://www.codewars.com/kata/57a0885cbb9944e24c00008e/train/cpp
#include <string>
#include <regex>

std::string removeExclamationMarks(std::string str){
  return std::regex_replace(str, std::regex("!"),"");
  
}
