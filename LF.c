#include<stdio.h>

int main(){

	long long int T,i,num,j,k,carry,r,product,m,n,p,q,size;	
        long long int arr[100000];

	scanf("%lld",&T);
	for(i=1;i<=T;i++){

	for(m=0;m<100000;m++) { arr[m]=0; }
		scanf("%lld",&num);
                if(num==0){ printf("1\n"); }
                else{  
		for(j=1;j<=num;j++){	
			if(j==1){ arr[j-1]=1; size=0;}
			else{
				k=0;carry=0;
				while(k<=size){
					product=arr[k]*j+carry; 
					r=product%10;
					arr[k]=r;
					carry=product/10;
					k++;
				}
				for(p=k;carry!=0;p++){
					product=arr[k]*j+carry; 
					q=carry%10;
					arr[p]=q;
					carry=carry/10;
				}
				size=p-1;
			}
		}
		for(n=size;n>=0;n--)
			printf("%lld",arr[n]);
		printf("\n");
          }
	}

	return 0;
}
