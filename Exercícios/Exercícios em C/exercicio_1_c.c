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
    for (int j=0;j<11;j++) {
        
        for (int i=11-n/2;i<11;i++) {
            apresentarEspaco();
        }
        
        for (int i=n;i<11;i++) {
            apresentarTraco();
        }
        
        printf("\n");
        
        n+=2;
        
    }

    return 0;
}
