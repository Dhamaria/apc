#include<stdio.h>
#define N 4 //linhas i
#define M 5 //colunas j

int main(){
    char line[M * 2];
    char matriz[N][M*2];
    for (int j = 0; j < N; j++){
        scanf(" %[^\n]",line);
        for (int i = 0; i < M * 2; i++){
            matriz[j][i] = line[i];
        }
    }
    printf("\nConteúdo da Matriz: \n\n");
    for (int j = 0; j < N; j++){
        for (int i = 0; i < M * 2; i++){
            printf("%c", matriz[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}