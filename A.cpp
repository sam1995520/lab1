#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",n);

    while(1){
    if(n==1)
        return 0;
    else
    {
        if(n%2==1)
            n=3*n+1;
        else
        n=n/2;
    printf("%d ",n);
    }
    }
    return 0;
}
