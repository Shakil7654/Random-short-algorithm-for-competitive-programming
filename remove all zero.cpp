#include<bits/stdc++.h>
using namespace std;
#include<algorithm>

int removeZeros(int num) {
        int return_value = 0;
        int ten = 1;
        while (num) {
                int reminder = num % 10;
                num = num/10;
                if (reminder) {
                        return_value = return_value + reminder * ten;
                        ten= ten*10;
                }
        }
        return return_value;
}

int main()

{
    int a,b;
    cin>>a>>b;

    int sum1 = a+b;

    int n_a = removeZeros(a);
    int n_b = removeZeros(b);
    int sum2 = removeZeros(sum1);

    //cout<<n_a<<" "<<n_b<<endl;

    //cout<<sum1<<" "<<sum2;
    if(n_a+n_b == sum2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;


}