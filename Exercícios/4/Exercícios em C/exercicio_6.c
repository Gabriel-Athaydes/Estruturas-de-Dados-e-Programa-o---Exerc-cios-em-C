#include <stdio.h>
#include <string.h>

void inversor(char *frase, char *palavra)
{
    int tamF = strlen(frase);
    int tamP = strlen(palavra);
    char *a = frase;
    char *b = palavra;
    int repeticoes;
    
    printf("%s\n",frase);
    
    for (int i=0;i<tamF;i++){
        repeticoes = 0;
        for (int n=0;n<tamP;n++){
            if (b[n]==a[i+n]){
                repeticoes++;
            }
        }
        if (repeticoes!=tamP)
            printf("%c", a[i]);
        else
            i+=tamP;
    }
}

int main()
{
    inversor("Eu gosto bastante de estruturas de dados e gosto muito de programar", "muito");

    return 0;
}
