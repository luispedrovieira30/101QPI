LInt somasAcL(LInt l){
	if(l==NULL) return NULL;

	LInt atual=l,auxn=new,new=newLInt(l->valor,NULL);
	int soma = atual->valor;
	while(atual->prox != NULL){
		atual=atual->prox;
		soma += atual->valor;
		auxn->prox=newLInt(soma,NULL);
		auxn=auxn->prox;
	}
	return new;
}
