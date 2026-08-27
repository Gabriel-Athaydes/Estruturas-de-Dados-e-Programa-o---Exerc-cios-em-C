#include <stdio.h>
#include <string.h>

void desenrolar(int vet[4][4])
{
    int maior = 3;
    int menor = 0;
    int contador = 0;
    int i = 0;
    int n = 0;
    while (contador<16){
        printf("%d ",vet[i][n]);
        printf("%d%d ",i,n);
        if (n<maior&&i<maior)
            n++;
        else if (i<maior)
            i++;
        else if (n>menor)
            n--;
        else
            i--;
        contador++;
            
    }
    // while (maior>0){
    //     quant++;
    //     maior/=10;
    // }
}
// 00 01 02 03 13 23 33 32 31 30 20 10 11 12 22 21 


//  11 12 13 14
//  21 22 23 24
//  31 32 33 34
//  41 42 43 44

//  00 01 02 03
//  10 11 12 13
//  20 21 22 23
//  30 31 32 33

//  0+0 0+0  0+0 1+0  0+0 2+0  0+0 3+0
//  1+0 0+3  1+1 1+2  1+2 2+1  1+2 3-1
//  2+1 0+1  2+1 1-1  2+0 2-1  2+0 3-2
//  3+0 0+0  3+0 1+0  3+0 2+0  3+0 3+0

int main()
{
    int vet[4][4] = {{1, 2, 3, 4}, 
                    {5, 6, 7, 8},  
                    {9, 10, 11, 12}, 
                    {13, 14, 15, 16}};
    desenrolar(vet);

    return 0;
}
