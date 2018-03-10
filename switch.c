#include <stdio.h>

int main(void)
{
    int a,b;
    char ch;

    scanf("%d %d %c", &a, &b, &ch);

    switch(ch) {
        case '+':
        case 's':
        case 'a':
            printf("Sum: %d\n", a+b);
        break;
        case '-':
        case 'm':
            printf("Sum: %d\n", a-b);
        break;
        case '*':
        case 'p':
            printf("Sum: %d\n", a*b);
        break;
        case '/':
        case 'd':
            printf("Sum: %d\n", a/b);
        break;
        default:
            printf("Invalid Option\n");
        break;
    }
    return 0;
}
