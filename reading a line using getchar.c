#include<stdio.h>

int main()
{
    char k[100], ch;

    int i;
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        k[i] = ch;
    }

    k[i] = '\0'; // Terminate the string at the current position of i

    printf("%s", k);

    return 0;
}
