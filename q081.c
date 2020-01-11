void inorderAux(ABin a , LInt *l){
	if(a==NULL) return;
	inorderAux(a->esq,l);
	LInt atual=*l;
	while(atual->prox!=NULL) atual=atual->prox;
	atual->prox=newLInt(a->valor,NULL);
	inorderAux(a->dir,l);
}

void inorder (ABin, LInt *l){
	*l=newLInt(0,NULL);
	inorderAux(a,l);
	LInt aux=*l;
	*l=aux->prox;
	free(aux);
}
