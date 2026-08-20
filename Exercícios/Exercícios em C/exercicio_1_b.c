#include <stdio.h>

void apresentarTraco() {
    printf("-");
}
void apresentarEspaco() {
    printf(" ");
}


int main()
{
    int n=0;
    for (int j=0;j<10;j++) {
        
        n++;
        
        for (int i=10-n;i<10;i++) {
            apresentarEspaco();
        }
        
        for (int i=n;i<10;i++) {
            apresentarTraco();
        }
        
        printf("\n");
        
    }

    return 0;
}
