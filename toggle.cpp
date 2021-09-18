#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int r;
    r=n ^ (1<<(k-1));
    if(r)
    {
        printf("%d",r);
        
    }
    
    return 0;
}
