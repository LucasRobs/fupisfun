#include <stdio.h>
int main(){
    int size = 0;
    scanf("%d", &size);
    int numeros[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &numeros[i]);
    }
    int divisor = 2;
    int produto[100];
    int sizeProduto = 0;
    for(int i = 0; i != -1;){
        for(int x = 0; x < size; x++){
            int saida = 0;
            if((numeros[x] % divisor) == 0){
                produto[sizeProduto] = divisor;
                sizeProduto++;
                for(int y = 0; y < size; y++){
                    if((numeros[y] % divisor) == 0){
                        numeros[y] = numeros[y] / divisor;
                    }
                    if(numeros[y] == 1){
                        saida++;
                    }else{
                        saida = 0;
                    }
                    if(saida == size){
                        i = -1;
                    }
                }
                
            }
        }
        divisor++;
    }
    int aux = 1;
    for(int i = 0; i < sizeProduto; i++){
        aux = aux * produto[i];
    }
    printf("%d", aux);
}