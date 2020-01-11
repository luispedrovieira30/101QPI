LInt NForward(LInt l, int N){
	while(l!=NULL && N>0){
		l=l->prox;
		N--;
	}
	return l;
}
