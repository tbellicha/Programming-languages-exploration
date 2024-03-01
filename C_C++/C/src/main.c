#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrconcat(char *s1, char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

void execForLoop()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", i);
    }
    printf("\n");
}

void execWhileLoop()
{
    int i = 0;
    while (i < 10)
    {
        printf("%d, ", i);
        i++;
    }
    printf("\n");
}

void execDoWhileLoop()
{
    int i = 0;
    do
    {
        printf("%d, ", i);
        i++;
    } while (i < 10);
    printf("\n");
}

int main()
{
    int integer = 42;
    float floating = 42.42;
    char *string = "Hello, World!";

    printf("====[C Program]====\n");
    printf("%d\n", integer);
    printf("%f (yes it's not exactly 42.42 x_x)\n", floating);
    printf("%s\n", string);
    char *new_string = mystrconcat(string, " (concatenated)");
    printf("%s\n", new_string);
    free(new_string);
    execForLoop();
    execWhileLoop();
    execDoWhileLoop();
    printf("====[END C]====\n");
    return 0;
}
