#include <stdio.h>

void apresentarNum(int n) {
    printf("%d",n);
}


int main()
{
    int n=5;
    for (int j=0;j<5;j++) {
        for (int i=n;i>0;i--) {
            apresentarNum(i);
        }
        n--;
        
        printf("\n");
    }

    return 0;
}
