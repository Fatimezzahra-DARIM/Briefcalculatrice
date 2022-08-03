#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N1, N2;
    char op, q;
    printf("veuiller entrer le nombre N1: ");
    scanf("%d", &N1);
    printf("veuiller entrer l'operation: ");
    scanf("%s", &op);
    if (op == 'q')
    {
        printf("operation arreter!!");
        exit(0);
    }
    else
    {
        printf("entrer le nombre 2: ");
        scanf("%d", &N2);

        switch (op)
        {
        case '+':
            printf("%d", N1 + N2);
            break;
        case '-':
            printf("%d", N1 - N2);
            break;
        case '*':
            printf("%d", N1 * N2);
            break;
        case '/':
            if (N2 != 0)
                printf("%d", N1 / N2);
            else
            {
                printf("impossible");
            }
            break;

        default:
            printf("operation non reconnu");
            break;
        }
    }
}
