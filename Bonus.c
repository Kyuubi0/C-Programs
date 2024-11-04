#include <stdio.h>
#include <stdlib.h>

typedef struct seytan {
    char* str[4];
}seytan;

int main(int argc, char const *argv[])
{
    int n = 4, i;
    seytan seytan;
    for (i = 0; i < n; i++)
    {
        seytan.str[i] = (char*)malloc(n * sizeof(char));

        if (seytan.str[i] == NULL) exit(1);
    }
    printf("seytanin cennetteki ismi ne olabilir sizce?\n");
    for (i = 0; i < n; i++)
    {
        fgets(seytan.str[i], 80, stdin);
        printf("yok\n");
    }
    printf("rockandrolla kalin.\n");


    printf("kontrol:\n");
    for (i = 0; i < n; i++)
        printf("%s", seytan.str[i]);

    return 0;
}
