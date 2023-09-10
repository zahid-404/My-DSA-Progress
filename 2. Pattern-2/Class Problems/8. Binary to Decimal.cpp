#include <iostream>
#include <math.h>
using namespace std;

int dectobin(int n) {
  int number = 0;
  int i = 0;
  while (n > 0) {
    int bit = n % 10;
    number = bit * pow(2, i) + number;
    n = n / 10;
    i++;
  }
  return number;
}

int main() {
  int n;
  cin >> n;
  int binary = dectobin(n);
  cout << binary << endl;
}
