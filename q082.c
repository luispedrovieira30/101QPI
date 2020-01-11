void preorderAux(ABin a, LInt *l){
	if(a==NULL) return;
	LInt atual=*l;
	while( atual->prox!=NULL) atual=atual->prox;
	atual->prox=newLInt(a->valor,NULL);
	preorderAux(a->esq,l);
	preorderAux(a->dir,l);
}

void preorder(ABin a, LInt *l){
	*l=newLInt(0,NULL);
	preorderAux(a,l);
	LInt aux=*l;
	*l=aux->prox;
	free(aux);
}
