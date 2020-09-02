#include <bits/stdc++.h>
using namespace std;

int power(int x, int n){
	if(n==0) 
		return 1;
	int res = power(x, n/2);
	if(n & 1){
		return x*res*res;
	}
	return res*res;
}

int main()
{
	int x,n; cin>>x>>n;
	int ans = power(x,n);
	cout << "Answer is : "<< ans<<endl;

}