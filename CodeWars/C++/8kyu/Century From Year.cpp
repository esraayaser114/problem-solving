// link this is : https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/cpp
#include <iostream>
using namespace std;
int centuryFromYear(int year) 
{
return (year-1)/100+1 ;
}
int main(){
    int year;
    cout<<"enter the year";
    cin>>year;
    int r =centuryFromYear(year);
    cout<<"r="<<r ;
}
