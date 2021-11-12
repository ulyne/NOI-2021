#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long a,i,check= 0, limit = 0;
  cin >> a;

  limit = sqrt(a);

  if ( a == 0 or a == 1){
    check = 1;
    cout << "Not Prime";
  } 
  else 
   for (i = 2; i <= limit; i ++)
  {
    if (a%i == 0){
      cout << "Not Prime";
      check = 1;
      break;
    } 
	}
	if (check == 0){
    cout << "Prime";
  }

  
  return 0;
} 
