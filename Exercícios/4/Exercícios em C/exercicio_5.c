#include <stdio.h>
#include <string.h>

void inversor(char *frase)
{
    char *a = frase;
    int tamA = strlen(a);
    char anterior = ' ';
    int repeticoes = 0;
    
    printf("%s\n",a);
    
    for (int i=0;i<tamA;i++)
        if (a[i]!=anterior){
            if (repeticoes)
                printf("%d", repeticoes);
            printf("%c", a[i]);
            anterior = a[i];
            repeticoes=1;
        } else {
            //printf("%c", a[i]);
            repeticoes++;
        }
        printf("%d", repeticoes);
}

int main()
{
    inversor("aaabbcddd");

    return 0;
}
