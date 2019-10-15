#include<stdio.h>

unsigned long long int getSingle(unsigned long long int arr[], int n)
{
    int ones = 0, twos = 0 ;

    int common_bit_mask;

    for( int i=0; i< n; i++ )
    {
        twos = twos | (ones & arr[i]);
        ones = ones ^ arr[i];
	common_bit_mask = ~(ones & twos);  
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }

    return ones;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int s;
		scanf("%d",&s);
		unsigned long long int a[s];
		for(int i=0;i<s;i++){
			scanf("%llu",&a[i]);
		}
		printf("%llu\n",getSingle(a,s));
	t--;
	}
return 0;
}
