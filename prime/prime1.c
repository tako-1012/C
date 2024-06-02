#include <stdio.h>

int main()
{
    int number;
    printf("素因数分解したい数字を入力してください。\n");
    scanf("%d", &number);

    int k = 2;

    while (number > 1)
    {
        if (number % k == 0)
        {
            printf("%d ", k);
            number /= k;

            if (number != 1)
            {
                printf("* ");
            }
            
        }
        else
        {
            k++;
        }
    }

    printf("\n");

    return 0;
}