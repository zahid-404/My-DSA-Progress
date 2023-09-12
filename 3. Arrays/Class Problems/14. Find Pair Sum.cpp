#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main() {

  int sum = 9;
  vector<int> a{1, 2, 3, 4, 5, 6, 7, 8};

  for (int i = 0; i < a.size(); i++) {

    for (int j = i + 1; j < a.size(); j++) {
      if (a[i] + a[j] == 9)
        cout << "(" << a[i] << "," << a[j] << ")" << endl;
    }
  }

  return 0;
}