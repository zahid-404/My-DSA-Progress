#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main() {

  vector<int> a{0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1};

  int s = 0;
  int e = a.size() - 1;

  while (s <= e) {

    if (a[s] == 0)
      s++;

    else {
      swap(a[s], a[e]);
      e--;
    }
  }

  for (auto &element : a)
    cout << element << " ";

  return 0;
}