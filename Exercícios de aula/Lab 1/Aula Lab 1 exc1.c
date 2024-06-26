//Inserir o elemento (x - 1) antes e o elemento (x + 1) depois de cada ocorrência
// de x dentro de um vetor de resposta. Se o seu vetor original é formado pelos
// elementos {1, 3, 1, 5, 1} (com o tamanho n igual a 5), e se x for igual a 1,
// seu vetor de resposta será {0, 1, 2, 3, 0, 1, 2, 5, 0, 1, 2}, com tamanho igual
// a 11. O protótipo dessa função é o que segue: int* ins_antes_depois_x(int *vet,
// int n, int x, int *tam_vet_resposta).

#include <stdio.h>
#include <stdlib.h>
int* ins_antes_depois_x(int *vet, int n, int x, int *tam_vet_resposta){
    int c=0;
    int indice=0;
    int cont=0;
    int copia[n];
    for (int i=0;i<n;i++) copia[i]=vet[i];
    for (int i=0; i<n;i++){
        if (vet[i]==x) c++;
    }
    *tam_vet_resposta= n+(c*2);
    int* resp = (int *)malloc(n * sizeof(int)+(c*2));
    for (int i=0;i<n+(c*2);i++){
        if (vet[i]==x) {
            resp[indice] = x-1;
            resp[indice+1] = x;
            resp[indice+2] = x+1;
            indice+=3;
            cont++;
            continue;
        }
        else {
            for (int j=0;j<n+(c*2);j++) {
                resp[indice] = copia[cont];
                indice++;
                cont++;
                break;
            }
        }
    }
    return resp;
}
int main(){
    int n;
    do{
        scanf("%d", &n);
        if(n > 0)break;
    }while(1);
    int vet[n], x, tam_vet2;
    for(int i = 0; i < n; i++)scanf("%d", &vet[i]);
    scanf("%d", &x);
    for(int i = 0; i < n; i++)printf("%d\n", vet[i]);
    printf("\n");
    int *resp = ins_antes_depois_x(vet, n, x, &tam_vet2);
    for(int i = 0; i < tam_vet2; i++) printf("%d\n", resp[i]);
    free(resp);
    return 0;
}