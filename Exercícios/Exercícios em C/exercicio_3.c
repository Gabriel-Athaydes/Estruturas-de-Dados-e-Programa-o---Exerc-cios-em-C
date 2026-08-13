#include <stdio.h>

void apresentarLinha(char c, int i) {
    if (i<10) {
        i++;
        apresentarLinha(c,i);
    }
    
    for (int i=0;i<10;i++) {
        printf("%c",c);
    }
    
    printf("\n");
}

int main()
{
    char c = '-';
    int i = 1;
    
    apresentarLinha(c,i);

    return 0;
}
