#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {

  int ans = 0;

  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {
  int n;
  cout << "Enter Size of array" << endl;
  cin >> n;

  vector<int> arr(n);

  cout << "Enter Elements" << endl;

  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  int uniqueElemnt = findUnique(arr);
  cout << "Unique Element is " << uniqueElemnt;
}