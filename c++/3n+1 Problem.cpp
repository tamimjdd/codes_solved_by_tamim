#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j;

    while(cin>>i>>j)
    {
        int res=0,flag=0;

        if(i>j)
        {
            flag=1;

            int tmp=i;
            i=j;
            j=tmp;
        }
        for(int a=i;a<=j;a++)
        {
            int sum=1,n=a;

            while(n!=1)
            {
                if(n%2==0)
                    n=n/2;

                else if(n%2!=0)
                    n=(3*n)+1;

                sum++;
            }
            res=max(sum,res);
        }

        if(flag==1)
            cout<<j<<' '<<i<<' ';
        else
            cout<<i<<' '<<j<<' ';

        cout<<res<<endl;
    }

    return 0;
}
