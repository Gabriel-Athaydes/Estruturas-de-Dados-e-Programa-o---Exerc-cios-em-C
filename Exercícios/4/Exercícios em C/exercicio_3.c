#include <stdio.h>
#include <string.h>

void inversor(char *frase)
{
    char *a = frase;
    int tamA = strlen(a);
    int anterior = tamA;
    int atual = 0;
    
    printf("%s\n",a);
    
    for (int i=tamA;i>=0;i--)
        if (a[i]==' '||i==0){
            atual=i-(i==0?1:0);
            for (int t=atual+1;t<anterior;t++)
                printf("%c", a[t]);
            printf(" ");
            anterior=atual;
        }
}

int main()
{
    inversor("Eu gosto de programar");

    return 0;
}
