int iguaisAB(ABin a, ABin b){
	 int i;
	 if(a== NULL && b== NULL) i=1;
	 else if(a==NULL || b == NULL) i=0;
	 else{
	 	if(a->valor==b->valor){
	 		if(iguaisAB(a->esq,b->esq)==0 || iguaisAB(a->dir,b->dir)==0) i=0;
	 		else i=1;
	 	}
	 	else i=0;
	 }
	 return i;
}
