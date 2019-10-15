#include<stdio.h>

long long int a,b;

long long int veri(long long int g,long long int cord[]){

	long long int previous,counter;
	previous = cord[0];
	counter = 1;
  	for(long long int i = 1; i < b; i++){ 
		if((cord[i] - previous - 1) >= g){ 
			  counter++;
       		          previous = cord[i];
                }
  	}
  	if(counter >= a) 
		  return 1;
 	else   
   		  return 0;
}


int main(){ 
	long long int t;
	scanf("%lld",&t);
	for(long long int k=t;k>0;k--){
       		scanf("%lld %lld",&a,&b);
		long long int cord[b],i;
       		for(i = 0 ; i < b ; i++)
	       		scanf("%lld",&cord[i]);
	   	long long int sol,lower,upper;
	 	sol = -2;
	        lower = 0;
	        upper = cord[b-1] - cord[0] - 1;
       		while (upper > lower){
                	long long int bk;
			bk=(lower + upper)/2;
                	if (veri(bk,cord) == 1){
                        	if (bk > sol)
                                	sol = bk;
                        	lower = bk+1;
                	}
                	else
                        	upper = bk;
        	}
		printf("%lld\n",sol);
	}
 return 0;
}
