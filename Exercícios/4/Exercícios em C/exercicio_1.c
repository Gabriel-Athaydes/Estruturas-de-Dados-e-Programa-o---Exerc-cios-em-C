#include <stdio.h>

int main()
{
    char *a = "Aula de estruturas de dados e programação";
    int processo = -1;
    
    printf("%s\n",a);
    
    for (int i=0;i<43-4;i++) {
        if ('s'==a[i]&&'t'==a[i+1]&&'r'==a[i+2]&&'u'==a[i+3]&&'t'==a[i+4]){
            processo=i;
        }
    }
    
    printf("%d\n",processo);

    return 0;
}
