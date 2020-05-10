#include <stdio.h>
#include <stdlib.h>

void pascal(int id, int t[id][id]) {
    for(int i=0;i<id;i++){
        t[i][i]=1;      /*la diagonale*/
        t[i][0]=1;
        for(int j=1;j<i;j++) {
            t[i][j]=t[i-1][j-1]+t[i-1][j];
        }
    }
}

void afficheTriangleInferieur(int id, int t[id][id]) {
    for(int i=0;i<id;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Veuillez saisir n : ");
    scanf("%d", &n);
    n+=1;

    int tab[n][n];

    pascal(n, tab);
    afficheTriangleInferieur(n, tab);
    system("PAUSE");
    return 0;
}

