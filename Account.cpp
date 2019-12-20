#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fin freopen("account.txt","r",stdin)
int main()
{
    Fin;
    string nm;
    ll n, x, i, j, k,test, Total=0;
    cin>>n;
    cout<<"Room"<<"\t"<<"Name"<<"\t"<<"Cash"<<"($)"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>j>>nm>>x;
        cout<<j<<"\t"<<nm<<"\t"<<x<<"$"<<endl;
        Total+=x;
    }
    cout<<"\n\n"<<"Total Cash== "<<Total<<"$";
    puts("\n\n");
    return 0;
}


