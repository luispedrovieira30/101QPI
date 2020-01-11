void posorderAux(ABin a, LInt *l){
	if(a==NULL) return;
	posorderAux(a->esq,l);
	posorderAux(a->dir,l);
	LInt atual=*l;
	while( atual->prox!=NULL) atual=atual->prox;
	atual->prox=newLInt(a->valor,NULL);
}

void posorder(ABin a, LInt *l){
	*l=newLInt(0,NULL);
	posorderAux(a,l);
	LInt aux=*l;
	*l=aux->prox;
	free(aux);
}
