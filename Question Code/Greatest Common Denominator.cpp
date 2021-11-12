#include <iostream>
using namespace std;

int gcd (long a,long b)
{
    if ( b == 0)
        return a;  
    return gcd (b, a % b);
}

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int a,b,ans; 

  cin >> a >> b;

  if ( a > b ){
    ans = gcd(a, b);
    cout << ans;
  }else if ( b > a ){
    ans = gcd (b, a);
    cout << ans;
  }
  return 0;
} 

