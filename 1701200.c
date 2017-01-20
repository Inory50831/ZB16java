#include<stdio.h>
int main()
{
	int M=2,n,t,i,k;
	scanf("%d",&n);
	int a[n+1],b[n+1];
	for(i=1;i<=n;i++)
		a[i]=i;
	k=i-1;
	for(i=1;i<=(k+M-1)/M;i++)
		b[i]=a[i*M-1];
	k=i-1;
	M++;
	if(k==1)
		{
			printf("%d\n",b[1]);
		}
	while(1)
	{
		for(i=1,t=k;i<=(k-1+M)/M;i++,t=t-M)
			a[i]=b[t];
		k=i-1;
		M++;
		if(k==1)
		{
			printf("%d\n",a[1]);
			break;
		}
		for(i=1,t=k;i<=(k-1+M)/M;i++,t=t-M)
			b[i]=a[t];
		k=i-1;
		M++;
		if(k==1)
		{
			printf("%d\n",b[1]);
			break;
		}
	}
	return 0;
}
