LInt cloneRev(LInt l){
	LInt auxl=newLInt(0,l);
	l=auxl;
	LInt novo=NULL;
	while(auxl->prox !=NULL){
		auxl=auxl->prox;
		novo=newLInt(auxl->valor,novo);
	}
	auxl=l;
	l=auxl->prox;
	free(auxl);
	return novo;
}
