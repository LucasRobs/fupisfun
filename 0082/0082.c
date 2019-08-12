#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0;
    scanf("%d", &n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d", v[i]);
    }
    
    return 0;
}
Fim da conversa no bate-papo
Digite uma mensagem...