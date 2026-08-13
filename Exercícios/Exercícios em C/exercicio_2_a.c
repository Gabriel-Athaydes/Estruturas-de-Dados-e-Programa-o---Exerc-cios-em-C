#include <stdio.h>

void apresentarNum(int n) {
    printf("%d",n);
}


int main()
{
    int n=0;
    for (int j=0;j<5;j++) {
        n++;
        for (int i=n;i>0;i--) {
            apresentarNum(n);
        }
        
        printf("\n");
    }

    return 0;
}
