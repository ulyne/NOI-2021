#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n;
  cin >> n;
  cout << n << " ";
  
  // logic loop
  while (n != 1){
    if (n%2==0){
      n = n / 2;
      cout << n << " ";
    } else if (n%2 != 0){
      n = 3 *n + 1;
      cout << n << " ";
    }
  }
  return 0;
} 
