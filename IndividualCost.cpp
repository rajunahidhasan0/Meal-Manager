#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fin freopen("Individual-Bill.txt","r",stdin)

void format()
{
    printf("Room\tName\tLunch\tDinner\tBreakfast  LFriday\tMeal Cost\tTotal Cost(+322)\n\n");
}
ll calc(ll l, ll d, ll b, ll fr)
{
    ll x=0;

    x = (l*25) + (d*20) + (b*10) + (fr*20);

    return x;
}
ll addextra(ll mealC){
    ll khala=140, gas=167, manager=15, y;
    y = mealC + khala + gas + manager;
    return y;
}
int main()
{
    Fin;

    ll n, x, y, i, j, day, ans=0, all=0;
    ll r, l, d, b, fr;
    string nm;

    day=20;
    cin>>n;
    cout<<"Total boarder: "<<n<<endl<<endl;

    format();

    for(i=0;i<n;i++)
    {
        /*1  Malek   19 18 18 2 */
        cin>>r>>nm;
        cin>>l>>d>>b>>fr;
        x=calc(l,d,b,fr);
        y=addextra(x);

        cout<<r<<"\t"<<nm<<"\t"<<l<<"\t"<<d<<"\t"<<b<<"\t   "<<fr<<"\t\t == "<<x;
        cout<<"        "<<y<<endl;

        ans+=x;
        all+=y;
    }
    cout<<endl<<endl<<"Finally Total Meal Cost till "<<day<<"'th day:== "<<ans;
    puts("\n\n");
    cout<<"Finally Total Cost(MealCost + Gas + Khala + Manager) till "<<day<<"'th day:== "<<all;
    puts("\n");
    puts("(( #Note: Here all Cost is Calculate Without Considering Sweet Cost ))\n\n");
    return 0;
}


