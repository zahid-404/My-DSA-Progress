#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main() {

  vector<int> a{1, 2, 3, 3, 4, 6, 8};
  vector<int> b{3, 4, 9, 10};
  vector<int> ans;

  for (int i = 0; i < a.size(); i++) {

    for (int j = 0; j < b.size(); j++) {
      if (a[i] == b[j]) {
        b[j] = INT32_MIN;
        ans.push_back(a[i]);
      }
    }
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}