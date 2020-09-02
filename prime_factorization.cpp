#include<bits/stdc++.h>
using namespace std;

void primeFact(int n)
{
	for(int i=2; i<n; i++){
		if(n%i==0){
			int count =0;
			while(n%i==0)
				{
					count++;
					n=n/i;
				}
		cout<<i<<"^"<<count<<endl;		
		}
	}
}

int main()
{

}