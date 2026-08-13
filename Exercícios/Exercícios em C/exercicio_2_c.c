#include <stdio.h>

void apresentarNum(int n) {
    printf("%d",n);
}


int main()
{
    int n=1;
    for (int j=0;j<5;j++) {
        for (int i=1;i<n+1;i++) {
            apresentarNum(i);
        }
        for (int i=n-1;i>0;i--) {
            apresentarNum(i);
        }
        n++;
        
        printf("\n");
    }

    return 0;
}
