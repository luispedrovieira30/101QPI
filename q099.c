int quantosMaiores(ABin a, int x){
	int i=0;
	if(a==NULL) return 0;
	if(a->valor>x)i++;
	i+=quantosMaiores(a->esq,x);
	i+=quantosMaiores(a->dir,x);
	return i;
}
