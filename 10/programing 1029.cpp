#include <bits/stdc++.h>
using namespace std;
main()
{
    vector <long long int> x;
    int b,c,countt=0;
    long long int start,endd,a;
    x.push_back(0);
    scanf("%lld",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x.push_back(a+1);
    for(int i=0; i<b; i++)
    {
        scanf("%lld%lld",&start,&endd);
        x.push_back(start);
        x.push_back(start+endd);
    }
    sort(x.begin(),x.end());
    for(int i=1; i<x.size()-2; i++)
    {
        if(x[i]==x[i+1])
        {
            x[i]=100000001;
            x[i+1]=100000001;
            i++;
        }
    }
    long long int findd,k;
    sort(x.begin(),x.end());
    for(int i=0; i<c; i++)
    {
        scanf("%lld",&findd);
        start=0;
        endd=x.size()-1;
        while(1)
        {
            k=(start+endd)/2;
            if(x[k]<=findd && x[k+1]>findd)
            {
                if(x[k]==0)
                {
                    printf("%lld\n",x[k+1]-x[k]-1);
                }
                else
                    printf("%lld\n",x[k+1]-x[k]);
                break;
            }
            if(x[k]>findd)
            {
                endd=k-1;
            }
            if(x[k]<findd)
            {
                start=k+1;
            }
        }
    }
}
