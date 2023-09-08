#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Input";
  cout << endl;
  cin >> n;

  for (int i = 0; i < 2 * n; i++) {
    int cond = i < n ? i : i % n;
    int k = 0;
    for (int j = 0; j < 2 * n - 1; j++) {
      if (i < n) {
        if (j < n - cond - 1)
          cout << " ";
        else if (j == n - cond - 1 || j == n + cond - 1)
          cout << "*";
        else
          cout << " ";
      } else {
        if (j < cond)
          cout << " ";
        else if (j == cond || j == 2*n-2-cond)
          cout << "*";

        else
          cout << " ";
      }
    }
    cout << endl;
  }  
}
