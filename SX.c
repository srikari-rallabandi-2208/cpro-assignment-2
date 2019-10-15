#include<stdio.h>
#include<math.h>

long long int largest(long long int arr[],long long int n)
{
    long long int i;
    long long int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

long long int min(long long int arr[],long long int size){
	long long int c;
    long long int minimum = arr[0];
    for (c = 1; c < size; c++){
        if (arr[c] < minimum)
           minimum = arr[c];
    }
    return minimum;
}
    
int main(){
	long long int n;
	scanf("%lld",&n);
	long long int x[n],y[n];
	for(long long int i=0;i<n;i++)
		scanf("%lld %lld",&x[i],&y[i]);
	long long int xd[n],yd[n];
	for(long long int i=0;i<n-1;i++){
		xd[i]=fabs(x[i+1]-x[i]);
		yd[i]=fabs(y[i+1]-y[i]);
	}
	xd[n-1]=fabs(x[0]-x[n-1]);
	yd[n-1]=fabs(y[0]-y[n-1]);
	long long int sumx,sumy;
	sumx=0;
	sumy=0;
	for(long long int i=0;i<n;i++){
		sumx += xd[i];
		sumy += yd[i];
	}
	long long int peri;
	peri = sumx+sumy;
	long long int x_max,x_min,y_max,y_min;
	x_max = largest(x,n);
	x_min = min(x,n);
	y_max = largest(y,n);
	y_min = min(y,n);
	long long int visible;
	visible = 2*(x_max - x_min) + 2*(y_max - y_min);
	long long int answer;
	answer = peri - visible;
	printf("%lld\n",answer);
return 0;
}
