#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
	long long days,sum=0;
	
	cin>>days;
	int arr[days];
	
	for(int i=0;i<days;i++)
		cin>>arr[i];
	
	for(int i=0;i<days;i++)
		sum+=arr[i];
	
	cout<<sum;
	return 0;

}
