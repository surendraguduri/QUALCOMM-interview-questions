#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=0,c=0;
    int x=1;
    while(x<=n)
    {
        r=n&x;
        if(r>0)
        {
            c++;
        }
        x=(x<<1);
    }
    if(c==1)
    {
    	printf("power of 2");
    	
	}
	else
	{
		printf("not power of 2");
	}
    return 0;
}
