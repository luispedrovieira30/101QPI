typedef struct slist{
    int valor;
    struct slist *prox;
} *LInt;

int length(LInt l){
    int conta=0;
    while (l != NULL){
        conta++;
        l = l->prox;
    }
    return conta;
}
