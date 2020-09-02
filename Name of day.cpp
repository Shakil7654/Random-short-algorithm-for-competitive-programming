/*****************************************
* In the name of Almighty Allah*
* AUTHOR:Md Habib Hasan Shakil Buya*
* ID: 201932130119 *
* INSTITUTION: Zhejiang Normal University *
******************************************/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i, n)      for (ll i=0; i<n; i++)
#define PB push_back
#define F first
#define S second
#define MP make_pair

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);


int main()
{
    optimize();
    int main()
{
int date,month,year;
cout<<"enter a date flowing date/month/year formate"<<endl;
cin>>date>>month>>year;
int e;
if(month==1||month==10)
e=0;
else if(month==2||month==3||month==11)
e=3;
else if(month==4||month==7)
e=6;
else if(month==9||month==12)
e=5;
else if(month==8)
e=2;
else if(month==5)
e=1;
else
e=4;
int re=year-1900;
int de=re/4;
int bar=date+e+re+de;
int r=bar%7;
string s;
switch(r)
{
case 0:s="sunday";
break;
case 1:s="monday";
break;
case 2:s="tuesday";
break;
case 3:s="wednesday";
break;
case 4:s="thusday";
break;
case 5:s="friday";
break;
default:s="saturday";
}
cout<<"the day was : "<<s<<endl;
return 0;
}
    
    return 0;
}
