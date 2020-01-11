int contaFolhas(ABin a){
	int x=0;
	if(a==NULL) return 0;
	if(a->esq == NULL && a->dir==NULL) x++;
	x+=contaFolhas(a->esq);
	x+=contaFolhas(a->dir);
	return x;
}
