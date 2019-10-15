#include<stdio.h>

unsigned long long int MB(unsigned long long int left, unsigned long long int right){
    while ((left | (left + 1)) <= right)
        left |= left + 1;
    return left;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		unsigned long long int l,r,k;
		scanf("%llu %llu",&l,&r);
		k = MB(l,r);
		printf("%llu\n",k);
	t--;
	}
return 0;
}
