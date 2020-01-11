int somasAB(ABin a){
	int x;
	if(a==NULL)x=0;
	else x=a->valor+somasAB(a->esq)+somasAB(a->dir);
	return x;
}

ABin somasAcA(ABin a){
	ABin new;
	if(a==NULL) return NULL;
	new=malloc(sizeof(ABIn));
	new->valor=somasAB(a);
	new->esq=somasAcA(a->esq);
	new->dir=somasAcA(a->dir);
	return new;
}
