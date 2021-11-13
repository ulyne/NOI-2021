#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n;
  cin >> n;

  if (n%2==0){
    cout << "Even";
  } else if (n%2!=0){
    cout << "Odd";
  }
  return 0;
}
