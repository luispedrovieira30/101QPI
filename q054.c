LInt reverseL (LInt l){
    LInt aux , ant = NULL;
    while (l != NULL){
        aux = l->prox;
        l->prox = ant;
        ant = l;
        l = aux;
    }
    return ant;
}
