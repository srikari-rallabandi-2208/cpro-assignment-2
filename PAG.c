#include<stdio.h>

int NOP(int m, int n){
    int path = 1;
    for (int i = n; i < (m + n - 1); i++) {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t>0){
		int x,y,k;
		scanf("%d %d",&x,&y);
		k = NOP(x,y);
		printf("%d\n",k);
		t--;
	}
	return 0;
}
