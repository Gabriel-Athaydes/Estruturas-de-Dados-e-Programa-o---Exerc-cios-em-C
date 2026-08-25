#include <stdio.h>
#include <string.h>

void inversor(char *frase)
{
    char *a = frase;
    int tamA = strlen(a);
    int anterior = 0;
    int atual = 0;
    
    printf("%s\n",a);
    
    for (int i=0;i<tamA;i++)
        if (a[i]!=' '){
            printf("%c", a[i]);
            anterior++;
        } else if (anterior&&a[i+1]!=' '&&a[i+1]!='\0'){
            printf("%c", a[i]);
            anterior=0;
        }
    printf("\\0");
}

int main()
{
    inversor("  Olá   mundo  da  programação    ");

    return 0;
}
