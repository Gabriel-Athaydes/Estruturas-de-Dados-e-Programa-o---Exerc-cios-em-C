#include <stdio.h>
#include <string.h>

char *palindromo(char *palavra)
{
    char *a = palavra;
    int tamA = strlen(a);
    int processo = 0;
    
    printf("%s\n",a);
    
    for (int i=0;i<tamA/2;i++)
        if (a[i]!=a[tamA-i-1]){
             processo=1;
             break;
        }
    
    return processo?"não é palíndromo":"é palíndromo";
}

int main()
{
    printf("%s\n",palindromo("arara"));
    printf("%s\n",palindromo("radar"));
    printf("%s\n",palindromo("aula"));

    return 0;
}
