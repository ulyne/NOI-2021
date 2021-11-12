#include <bits/stdc++.h>
using namespace std;

long a,b,choice;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> choice;

  if (choice == 1){
    cout << "Hello World";
  } else if (choice == 2){
    cin >> a >> b;
    cout << a*b;
  }

  return 0;
} 
