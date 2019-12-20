#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fin freopen("Bajar-Bill.txt","r",stdin)

int main()
{
    Fin;

    ll n, x, i, j, k,test, ans=0;
    ll extra=42;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld", &j, &x);
        cout<<j<<"'th day bajar: "<<x<<"$   Total: "<<ans<<"$"<<endl;
        ans+=x;
    }
    cout<<endl<<endl<<"Finally Total bajar till "<<n<<"'th day: "<<ans;
    cout<<endl<<endl<<"Extracting Extra taka:  "<<ans-extra;
    puts("\n");
    return 0;
}

