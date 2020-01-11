void mergeL(LInt *r, LInt a, LInt b){
    LInt ultimo;
    if (a==NULL) *r=b;
    else if (b==NULL) *r=a;
    else{
        if (a->valor < b->valor) {
            *r=a;
            a = a->prox;
        }
        else {
            *r=b;
            b= b->prox;
        }
        ultimo = *r;
        while (a!=NULL && b!=NULL){
            if (a->valor < b->valor){
                ultimo->prox=a;
                a=a->prox;
            }
            else{
                ultimo->prox = b;
                b = b->prox;
            }
        }
        if(a == NULL) ultimo->prox= b;
        else ultimo->prox=a;
    }
}
