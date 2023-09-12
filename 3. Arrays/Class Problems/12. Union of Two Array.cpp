#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> a{1, 2, 3, 4, 5};
  vector<int> b{6, 7, 8, 9, 10};
  vector<int> ans;

  for (int i = 0; i < a.size(); i++) {
    ans.push_back(a[i]);
  }

  for (int i = 0; i < b.size(); i++) {
    ans.push_back(b[i]);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}