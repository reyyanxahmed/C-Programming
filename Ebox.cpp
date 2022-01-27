#include <stdio.h>
#include <stdlib.h>
 
int main()
{

    int num1,num2,num3; 
    printf("Please Enter three numbers: ");
    
    scanf("%d %d %d",&num1,&num2,&num3);
    

int result=num3>(num1>num2?num1:num2)?num3:((num1>num2)? num1:num2);

printf("Largest number is: %d",result);


    return 0;
}
