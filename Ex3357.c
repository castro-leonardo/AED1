#include <stdio.h>
#include <string.h>

int main() {
    int N;
    double L, Q;
    
    scanf("%d %lf %lf", &N, &L, &Q);
    
    char nomes[10][13];
    for(int i = 0; i < N; i++) {
        scanf("%s", nomes[i]);
    }
    
    // Calcular quantas cuias cheias cabem
    
    int cuias_cheias = (int)(L / Q);
    double resto = L - (cuias_cheias * Q);
    
    // a pessoa que pega a última cuia
    int ultima_pessoa = (cuias_cheias % N);
    
    //Se sobrou agua, eh a próxima pessoa que vai tomar o resto
    ///// Se n sobrou, foi a pessoa anterior q tomou a ultim cuia cheia
    if(resto > 0) {
        printf("%s %.1f\n", nomes[ultima_pessoa], resto);
    } else {
        // ajst p a pessoa anterior (ult cuia cheia
        int pessoa_anterior = (ultima_pessoa - 1 + N) % N;
        printf("%s %.1f\n", nomes[pessoa_anterior], Q);
    }
    
    return 0;
}