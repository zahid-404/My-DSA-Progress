#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Input";
  cout << endl;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int k = i;

    for (int j = 0; j < 2 * i + 1; j++) {

      if (j < i + 1) {
        int ans = j + 1;
        char ch = ans + 'A' - 1;
        cout << ch << " ";

      } else {
        char ch = k + 'A' - 1;
        cout << ch << " ";
        k--;
      }
    }
    cout << endl;
  }
}
