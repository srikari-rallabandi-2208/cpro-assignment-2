#include<stdio.h>
long long int a[500001],s=0,j=0,c=0,t=0;
int main()
{
	long long int n,i,a[1000001],s,j,c,t;
	s = 0;
	j = 0;
	c = 0;
	t = 0;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		s+=a[i];
	}
	if(s%3==0){
		s=s/3;
		for(i=0;i<n-1;i++){
			t+=a[i];
			if(t==2*s)j+=c;
			if(t==s)c++;
		}
		printf("%lld\n",j);
	}
	else
		printf("0\n");
	return 0;
}

