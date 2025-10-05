#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10] = {0};
    int cone[5][5] = {0};
    int cruz[5][5] = {0};
    int octaedro[5][5] = {0};
    int l, c, val;

    printf("===== NÍVEL NOVATO =====\n");
    for(i=0;i<2;i++){
        printf("Digite a linha do navio %d (0-9): ", i+1);
        scanf("%d", &l);
        printf("Digite a coluna do navio %d (0-9): ", i+1);
        scanf("%d", &c);
        tabuleiro[l][c] = 3;
    }

    printf("\n===== NÍVEL AVENTUREIRO =====\n");
    for(i=0;i<4;i++){
        printf("Digite a linha do navio %d (0-9): ", i+1);
        scanf("%d", &l);
        printf("Digite a coluna do navio %d (0-9): ", i+1);
        scanf("%d", &c);
        tabuleiro[l][c] = 3;
    }

    printf("\n===== NÍVEL MESTRE =====\n");
    printf("Preenchendo habilidade CONE (5x5) com 0 ou 1:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite valor para cone[%d][%d]: ", i, j);
            scanf("%d",&val);
            cone[i][j] = val;
        }
    }

    printf("Preenchendo habilidade CRUZ (5x5) com 0 ou 1:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite valor para cruz[%d][%d]: ", i, j);
            scanf("%d",&val);
            cruz[i][j] = val;
        }
    }

    printf("Preenchendo habilidade OCTAEDRO (5x5) com 0 ou 1:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite valor para octaedro[%d][%d]: ", i, j);
            scanf("%d",&val);
            octaedro[i][j] = val;
        }
    }

    printf("\nTabuleiro 10x10:\n");
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade CONE:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade CRUZ:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade OCTAEDRO:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
