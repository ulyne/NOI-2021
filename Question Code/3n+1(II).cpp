#include <iostream>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long length,time,check;
  time=0;
  cin>>length>>check;
  
  while(length != 1){
    if(length%2 == 0){
      ++time ;
      if(time == check){
        cout<<length;
      }
      length = length/2;      
    }else if(length%2 != 0){
      ++time ;
      if (time == check){
        cout<<length;
      }
      length = 3 * length + 1;
    }
  }
  if (check > time){
    cout<<-1;
  }
return 0;
} 
