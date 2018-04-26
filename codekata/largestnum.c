#include <stdio.h>
 
void main()
{
    int num1, num2, num3;
 
    printf("Enter the three values \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("Number1 = %d\tNumber2 = %d\tNumber3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number1 is the greatest among three \n");
        }
        else
        {
            printf("Number3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("Number2 is the greatest among three \n");
    else
        printf("Number3 is the greatest among three \n");
}
