#include<bits/stdc++.h>
using namespace std;
int x[200100];
int ans[200100];
int maxx=0;
int main()
{
	int n,k;
	scanf(" %d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(x[i]>x[j] && ans[i]<ans[j]+1){
                ans[i]=ans[j]+1;
            }
        }
	}
	for(int i=0;i<200050;i++){
        maxx=max(ans[i],maxx);
	}
	cout << maxx+1;
}
