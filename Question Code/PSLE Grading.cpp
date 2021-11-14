#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int s;
  cin >> s;

  if (s > 100){
    cin >> s;
  }else if (s < 0){
    cin >> s;
  }else if (s >= 91){
    cout << "A*";
  }else if (s >= 75 && s <= 90){
    cout << "A";
  }else if (s >= 60 && s <= 74){
    cout << "B";
  }else if (s >= 50 && s <= 59){
    cout << "C";
  }else if (s >= 35 && s <= 49){
    cout << "D";
  }else if (s >= 20 && s <= 34){
    cout << "E";
  }else if (s <= 19){
    cout << "U";
  }
  return 0;
} 
