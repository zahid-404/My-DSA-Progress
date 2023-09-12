#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main() {

  int sum = 20;
  vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < a.size(); i++) {

    for (int j = i + 1; j < a.size(); j++) {

      for (int k = j + 1; k < a.size(); k++) {

        if (a[i] + a[j] + a[k] == sum)
          cout << "(" << a[i] << "," << a[j] << "," << a[k] << ")" << endl;
      }
    }
  }

  return 0;
}