#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n;
  cout << "Enter Input" << endl;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int count = 1;
    for (int j = 0; j < n + i; j++) {
      if (j < n - i - 1)
        cout << "  ";

      else {
        if (j < n) {
          cout << count << " ";
          count++;
        } else {
          cout << count - 2 << " ";
          count--;
        }
      }
    }
    cout << endl;
  }
}
