#include <stdio.h>
#include <stdlib.h>

void realocar(int **p, int *tam){
    int t_u = 0;
    for (int i = 0;i<11;i++){
        if (t_u==*tam) {
            int *nv = realloc(*p,*tam*2*sizeof(int));
            if (nv!=NULL)
                *p=nv;
            else
                printf("Sem espaço para realocar.");
            *tam*=2;
        }
        (*p)[i] = i;
        t_u++;
        
    }
    
    printf("max %d\n", *tam);
    printf("utilizado %d\n", t_u);
    
}

int main()
{
    int *v = malloc(5 * sizeof(int));
    int t_ma = 5;
    
    realocar(&v, &t_ma);
    
    for (int i = 0;i<t_ma;i++){
        printf("%d ", v[i]);
    }
    
    free(v);

    return 0;
}
