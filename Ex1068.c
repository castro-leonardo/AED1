#include <stdio.h>
#include <string.h>

int main() {
    
    char expressao[1000];
    
    //

    while(scanf("%s", expressao) != EOF) { //fim do arquivo
    
        int topo = -1; // Pilha vazia
        int erro = 0;

        for(int i=0; i<strlen(expressao); i++) { //le a string
        
        //
        
            if (expressao[i] == '(') {
                topo++; //push
            } 
            
            else if (expressao[i] == ')') {
                if (topo >= 0) {
                    topo--; //pop
                    
                    
                } else {
                    erro = 1; // Tentou fechar sem abrir
                    break;
                }
            }
        }

        //// -1 se nao
        if(topo == -1 && !erro) {
            printf("correct\n");
            
        } else{
            printf("incorrect\n");
        }
    }
    
    return 0;
}