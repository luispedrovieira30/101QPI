void appendL(LInt *l, int x){
	LInt atual=*l, ant=newLInt(0,*l), novo=newLInt(x,NULL);
	if(*l==NULL){ 
		*l=novo;
		return;
	}
	*l=ant;
	while(atual->prox!=NULL){
		atual=atual->prox;
		ant=ant->prox;
	}
	atual->prox=novo;

	atual=*l;
	*l=atual->prox;
	free(atual);
}
