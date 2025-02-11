// link this kata is : https://www.codewars.com/kata/57f780909f7e8e3183000078/train/cpp
#include <vector>
int grow(std::vector<int> nums) {
  int r=1;
  for(int i=0 ; i< nums.size(); i++){
    r= r*nums[i];
    
  }
  return r;
}
