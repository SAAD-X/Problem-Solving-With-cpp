#include<stdio.h>

int main()

{
    int m=0, n=5, i=1 ;

    for(i=1 ; i<=10 ; i++)
    {
        m=m+n;
        printf("%d x %d = %d\n", n , i , n*i);
    }
    return 0;


}
