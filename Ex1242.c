#include <stdio.h>
#include <string.h>

#define MAX 305

typedef struct pilha{

    char itens[305];
    int topo;

} Pilha;


void inicializar(Pilha *p) {

    p->topo = -1; //pilha vazia
}

void push(Pilha *p, char base) {

    p->itens[++(p->topo)] = base; //push
}

void pop(Pilha *p) {
    if (p->topo >= 0) p->topo--; //desempilha
}

char verTopo(Pilha *p) {
    if (p->topo >= 0) return p->itens[p->topo]; //retorna topo
    return '\0'; //vazia

}

int estaVazia(Pilha *p) {

    return p->topo == -1; //ver vazia e retorna
}

///fx verificar se duas bases formam um par 
int formamPar(char a, char b) {

    if ((a == 'B' && b == 'S') || (a == 'S' && b == 'B')) return 1;

    if ((a == 'C' && b == 'F') || (a == 'F' && b == 'C')) return 1;

    return 0;
}

int main() {

    char rna[305];
    Pilha p;
//

    while (scanf("%s", rna) != EOF) { //ler doc
                inicializar(&p);
        int ligacoes = 0; //cont

        for (int i=0;rna[i]!='\0';i++) {

            /////se a base atual faz par com quem está no topo da pilha
            if (!estaVazia(&p) && formamPar(verTopo(&p), rna[i])) {

                pop(&p);      //com par
                ligacoes++; 

            } else {
                push(&p, rna[i]); //sem par
            }
        }

        printf("%d\n", ligacoes); 
    }

    return 0;
}