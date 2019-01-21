#include <stdio.h>
int main (void)
{
    int T,b,c,i;
    int sum;
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
        scanf("%d",&b);
        scanf("%d",&c);
        sum = b+c;
        printf("%d\n",sum);
    }

    return 0;
}
