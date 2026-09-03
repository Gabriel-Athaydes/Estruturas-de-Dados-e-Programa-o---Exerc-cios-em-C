#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *v = malloc(5 * sizeof(int));
    int t_ma = 5;
    int t_u = 0;
    for (int i = 0;i<11;i++){
        if (t_u==t_ma) {
            int *nv = realloc(v,t_ma*2*sizeof(int));
            if (nv!=NULL)
                v=nv;
            else
                printf("Sem espaço para realocar.");
            t_ma*=2;
        }
        v[i] = i;
        t_u++;
        
    }
    printf("max %d\n", t_ma);
    printf("utilizado %d\n", t_u);
    
    for (int i = 0;i<t_ma;i++){
        printf("%d ", v[i]);
    }
    free(v);

    return 0;
}
