// 110 A CF
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define M (ll)(1e9+7)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

string s;

cin>>s;

ll a = 0;
ll b = 0;

for(int i = 0 ; i < s.length() ; i++)
{
	if(s[i] == '4' || s[i] == '7')
		a++;
}

if(a == 4 || a == 7)
cout<<"YES";
else
cout<<"NO";


return 0;
}