#include<stdio.h>
#include<math.h>

#define pr 0.0000001

long double newtonRaphson(long double x,long double c){
    long double h = (2*x*x*x+6*x*x+7*x-3*c)/(6*x*x+12*x+7);
    while (fabs(h) >= pr)
    {
        h = (2*x*x*x+6*x*x+7*x-3*c)/(6*x*x+12*x+7);
        x = x - h;
    }

    return x;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		long double n,k;
		unsigned long long int h;
		scanf("%Lf",&n);
		k = newtonRaphson(3,n);
		h = ceil(k);
		printf("%llu\n",h);
	t--;
	}
return 0;
}
