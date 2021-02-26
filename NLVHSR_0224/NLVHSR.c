#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("Tisza.txt", "w");
    fputs("Tisza Marcell, Programtervezo Informatikus, NLVHSR", f);
    fclose(f);
    printf("The file has been written...\n\n");

    printf("Content of the file:\n");
    char content[100];
    f = fopen("Tisza.txt", "r");
    fgets(content, 100, f);
    printf(content);
    printf("\n");
    fclose(f);

    return 0;
}
