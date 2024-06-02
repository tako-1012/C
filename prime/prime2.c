#include <stdio.h>

int main()
{
    int number;
    printf("素因数分解したい数字を入力してください。\n");
    scanf("%d", &number);

    int k = 2;
    int i;

    while (number > 1)
    {
        if (number % k == 0)
        {
            number /= k;
            i++;
            if (number % k != 0)
            {
                printf("%d^%d ", k, i);
                if (number != 1)
                {
                    printf(" * ");
                }
            }
        }
        else
        {
            k++;
            i = 0;
        }
    }

    printf("\n");

    return 0;
}