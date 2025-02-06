//this link is : https://www.codewars.com/kata/583710ccaa6717322c000105/train/cpp
#inculde <iostream>
using namespace std;
int simpleMultiplication(int a){
  return a % 2 ? 9*a : 8*a;
    
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int r =simpleMultiplication(n);
    cout<<"r="<<r ;
}
