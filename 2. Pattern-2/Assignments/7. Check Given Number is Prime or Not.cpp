#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int n) {
  for (int i = 2; i < sqrt(n); i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  cout << "Enter Number" << endl;
  cin >> n;
  int isPrime = checkPrime(n);
  if (isPrime)
    cout << "Prime";
  else
    cout << "Not Prime";
}
