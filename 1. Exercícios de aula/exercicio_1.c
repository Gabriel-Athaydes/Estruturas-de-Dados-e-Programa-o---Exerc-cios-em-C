#include <stdio.h>

void apresentarTraco() {
    printf("-");
}

int main()
{
    int n=0;
    for (int j=0;j<10;j++) {
        n++;
        for (int i=n;i<10;i++) {
            apresentarTraco();
        }
        
        printf("\n");
    }

    return 0;
}
