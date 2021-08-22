#include <iostream>
using namespace std;

int Euler(int n)
{
    int nr=n;
    for(int d=2;d*d<=n;++d)
    {
        if(n%d==0)
        {
            while (n%d==0) n/=d;
            nr-=nr/d;
            
        }
    }
    if(n>1) nr-=nr/n;
    return nr;
}

int main()
{
    int n;
    cin>>n;
    cout<<Euler(n);
}