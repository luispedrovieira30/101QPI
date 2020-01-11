void imprimeL(LInt l){
    while( l!= NULL){
        printf("%d", l->valor);
        l = l->prox;
    }
}
