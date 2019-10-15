#include<stdio.h>
#include<string.h>

int maxDepth(char S[5000001])
{
    int current_max = 0;
    int max = 0;   
    int n = strlen(S);

    for (int i = 0; i< n; i++)
    {
        if (S[i] == '(')
        {
            current_max++;

            if (current_max> max)
                max = current_max;
        }
        else if (S[i] == ')')
        {
            if (current_max>0)
                current_max--;
        }
    }

    return max;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0){
	    char string[5000001];
	    scanf("%s",string);
	    printf("%d",maxDepth(string));
	    printf("\n");
	t--;
    }
    return 0;
}

