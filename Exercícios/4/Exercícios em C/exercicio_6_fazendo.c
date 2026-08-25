#include <stdio.h>
#include <string.h>

void inversor(char *frase, char *palavra)
{
    int tamF = strlen(frase);
    int tamP = strlen(palavra);
    char anterior = ' ';
    int repeticoes = 0;
    
    printf("%s\n",frase);
    
    for (int i=0;i<tamF;i++)
        if (frase[i]!=anterior){
            if (repeticoes)
                printf("%d", repeticoes);
            printf("%c", frase[i]);
            anterior = frase[i];
            repeticoes=1;
        } else {
            //printf("%c", a[i]);
            repeticoes++;
        }
        printf("%d", repeticoes);
}

int main()
{
    inversor("Eu gosto bastante de estruturas de dados e gosto muito de programar", "muito");

    return 0;
}
