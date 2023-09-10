#include <iostream>
#include <math.h>
using namespace std;

bool checkEven(int n) {
  if((n&1)==0)
return true;
  else 
    return false;
}

int main() {
  int n;
  cout << "Enter Number" << endl;
  cin >> n;
  int check = checkEven(n);
  if(check)
    cout<<"Even";
  else
    cout<<"Odd";
}
