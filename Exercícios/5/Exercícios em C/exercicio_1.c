#include <stdio.h>
#include <string.h>

int inversor(int vet[3][3])
{
    int maior = vet[0][0];
    int quant = 1;
    for (int i=0;i<3;i++)
        for (int n=0;n<3;n++){
            printf("%d ",vet[n][i]);
            if (vet[n][i]>maior)
                maior=vet[n][i];
        }
    while (maior>0){
        quant++;
        maior/=10;
    }
    return quant;
}

int main()
{
    int vet[3][3] = {{1, 2, 3,}, {4, 15, 6,}, {7, 8, 439,}};
    printf("\n%d", inversor(vet));

    return 0;
}
