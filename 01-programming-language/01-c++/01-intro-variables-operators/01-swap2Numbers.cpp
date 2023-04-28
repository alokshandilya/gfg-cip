#include <bits/stdc++.h>
using namespace std;

void swapWithTemp(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapWithoutTemp(int &a, int &b) {
  a = a + b;
  b = a - b;
  a = a - b;
}

int main() {
  int a = 5, b = 10;
  cout << a << " " << b << endl;
  swapWithTemp(a, b);
  cout << a << " " << b << endl;
  swapWithoutTemp(a, b);
  cout << a << " " << b << endl;
  return 0;
}
