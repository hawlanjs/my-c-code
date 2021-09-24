#include <stdio.h>

int main()
{
        char user_input;
        int sum = 0, a, b;
        scanf("%d", &a);
        scanf("%c", &user_input);
        scanf("%d", &b);

        switch(user_input)
        {
                case '+':
                sum = a + b;
                        break;
                case '-':
                sum = a - b;
                        break;
                case '*':
                sum = a * b;
                        break;
                case '/':
                sum = a / b;
                        break;
                default:
                printf("Not Found\n");
                        break;
        }

        printf("%d\n", sum);
}
