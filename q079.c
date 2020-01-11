ABin newABin(int x, ABin e, ABin d){
	ABin new;
	if(new!=NULL){
		new->valor=x;
		new->esq=e;
		new->dir=d;
	}
	return new;
}

ABin cloneAB(ABin a){
	ABin new;
	if(a==NULL) new=NULL;
	else{
		new = newABin(a->valor,cloneAB(a->esq),cloneAB(a->dir));
	}
	return new;
}
