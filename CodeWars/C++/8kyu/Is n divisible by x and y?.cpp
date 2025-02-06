// link this is : https://www.codewars.com/kata/5545f109004975ea66000086/train/cpp
#include <iostream>
using namespace std;
bool isDivisible(int n, int x, int y) {
  if (n % x == 0 && n % y ==0){
    return true;
    }
  else{
    return false;
  }
}
int main(){
    int n,x,y;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter X";
    cin>>x;
    cout<<"enter Y";
    cin>>y;
    if (isDivisible(n, x, y)) {
        cout << n << " is divisible by both " << x << " and " << y << endl;
    } else {
        cout << n << " is not divisible by both " << x << " and " << y << endl;
    }

    return 0;

}
