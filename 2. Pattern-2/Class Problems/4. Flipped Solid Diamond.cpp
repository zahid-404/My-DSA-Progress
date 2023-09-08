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
    for (int j = 0; j < 2 * n; j++) {
      if (i < n) {
        if (j < n - cond || i == 0 || i == 2 * n - 1)
          cout << "* ";
        else if (k < 2 * cond) {
          cout << "  ";
          k++;
        } else
          cout << "* ";
      } else {
        if (j < cond+1)
          cout << "* ";
        else if (k < 2 * n - 2 * cond - 2) {
          cout << "  ";
          k++;
        } else
          cout << "* ";
      }
    }
    cout << endl;
  }
}
