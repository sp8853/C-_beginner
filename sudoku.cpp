#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  int h[n];
  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }

  sort(h, h+n);

  int days = 0; 
  for(int i = 0; i < n-1; i++) {
    days += max(0, h[i+1] - h[i] - 1);
  }

  if(days <= x) {
    cout << "YES " << days << endl; 
  }
  else {
    cout << "NO" << endl;
  }

  return 0;
}