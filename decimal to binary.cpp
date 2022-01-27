#include<stdio.h>

int main()
{
    int n,r,i=1,count=0,temp;
    int arr[100];

    printf("Enter the decimal number");
    scanf("%d",&n);

    temp=n;

    arr[0]=n%2;

    while(n/2!=0)
    {
        n=n/2;
        r=n%2;
        arr[i]=r;
        i+=1;
        count+=1;

    }

    printf("\nThe binary equivalent of decimal number %d is ",temp);

    for(int i=count;i>=0;i-=1)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}
