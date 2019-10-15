#include<stdio.h>
#include<math.h>

#define LOL 1000000007

long long int hash(long long int A[],long long int size){
	long long int lol,Lol;
	lol=0;
	Lol=0;
	for(long long int k=0;k<size;k++){
		if(k==0) lol=1;
		else
		lol=(lol*107)%LOL;
		Lol=(Lol+(((lol*(A[k]%LOL))%LOL))+LOL)%LOL;
	}
	return (Lol+LOL) % LOL;
}

void update(long long int D[], long long int left, long long int right, long long int num){
    D[left] += num;
    D[right + 1] -= num;
}

int main(){
	 long long int n,q;
	 scanf("%lld %lld",&n,&q);
	 long long int a[n],d[n];
	 for(long long int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	 }
	 d[0] = a[0];
	 for(long long int j=1;j<n;j++){
		d[j] =a[j]-a[j-1];
	 }
	 while(q>0){
		long long int l,r,x;
		scanf("%lld %lld %lld",&l,&r,&x);
		update(d,l,r,x);
	 q--;
	 }
	 for (long long int i = 0; i < n; i++){
               if (i == 0)
                       a[i] = d[i];
	       else
                       a[i] = d[i] + a[i - 1];
         }
	 long long int y;
	 y=hash(a,n);
	 printf("%lld\n",y);
         return 0;
}
