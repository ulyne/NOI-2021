#include <iostream>
using namespace std;

int main() {
  //reads user input n
  long n;
  cin >> n;
  
  // declares string array str at size 
  string str;

  //read input into array str 
  cin >> str;

  //declares new array for keeping track of alphabets
  int i = 0, alphabet[26] = {0}, j;

  //checking for appearance of alphabets
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
        j = str[i] - 'a';
        ++alphabet[j];
    }
    ++i;
  }
  //output the arrays to show
  for (i = 0; i < 26; i++)
  cout<< char(i + 'a')<<" "<< alphabet[i]<< "\n";
  return 0;
}
