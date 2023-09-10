#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n) {
  int count = 1;
  for(int i=1; i<=n; i++)
    count = count * i;
  return count;
}

int main() {
  int n;
  cout << "Enter Number" << endl;
  cin >> n;
  int fact = factorial(n);
  cout<<fact;
}
