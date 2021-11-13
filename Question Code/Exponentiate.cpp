#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  //input of number of row of inputs
  long long T,a,b,m,output=1;
  cin >> T;

  //logic loop
  for (int temp = 0; temp < T; temp++){
    //input of variables per user input row
    cin >> a >> b >> m;
    
    //reset output for each iterations
    output = 1;

    //loop to exponentiate base
    
    /* 
    Idea behind the while loop:
    exponentiating by squaring
    e.g. 3 ** 5 = 3 * 3 * 3 * 3 * 3 can be written as ((3*3) * (3*3) * 3)  
    as such, can just divide power by 2 and multiply base tgt ^
    therefore 3 ** 5 can be written as (9 * 9) * 3

    website : https://www.rookieslab.com/posts/fast-power-algorithm-exponentiation-by-squaring-cpp-python-implementation
    */
    while (b > 0){ //while base > 0

      if (b % 2 == 1){ //if power is odd 
        output = (output * a) % m;
      }

      //if power is even
      a = (a * a) % m; //multiply base tgt
      b = b / 2; //decrease power
    }
    //output of result
    cout << output << "\n";
  } 
  return 0;
} 
