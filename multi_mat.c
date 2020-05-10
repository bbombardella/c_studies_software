/* multiplication de 2 matrices */

#include <stdio.h>
#include <stdlib.h>

void multiplication_mat(int m1, int n1, int matA[m1][n1], int n2, int p2, int matB[n2][p2], int matC[m1][p2]) {
    for(int i=0;i<m1;i++) {
        for(int j=0;j<p2;j++) {
                matC[i][j]=0;
            for(int k=0;k<n1;k++) {
                matC[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }

}

void saisitTabEnt(int l, int c, int t[l][c]) {
    printf("\nEntrez les valeurs entieres dans le tableau :\n");
    for(int i=0;i<l;i++) {
        printf("\nValeurs de la %deme ligne :\n\n", i+1);
        for(int j=0;j<c;j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d", &t[i][j]);
        }
    }
}

void afficheTabEnt(int l, int c, int t[l][c]) {
    printf("\nAffichage du tableau :\n\n");
    for(int i=0;i<l;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1, n1, n2, p2;
    printf("/// Programme de multiplication de 2 matrices ///\n\n");
    printf("Veuillez indiquer les dimensions de la 1ere matrice de format m n : ");
    scanf("%d %d", &m1, &n1);
    int mat1[m1][n1];
    saisitTabEnt(m1, n1, mat1);
    printf("\nVeuillez indiquer les dimensions de la 2eme matrice de format n p : ");
    scanf("%d %d", &n2, &p2);
    if (n1!=n2) {           /* on teste si les matrices sont compatibles */
        printf("Desole mais les matrices ne sont pas compatibles !");
        return 1;
    }
    int mat2[n2][p2];
    saisitTabEnt(n2, p2, mat2);
    int mat3[m1][p2];
    multiplication_mat(m1, n1, mat1, n2, p2, mat2, mat3);
    afficheTabEnt(m1, p2, mat3);
    system("PAUSE");
    return 0;
}

