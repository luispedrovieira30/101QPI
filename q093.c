ABin cloneMirror(ABin a){
	ABin new;
	if(a==NULL) return NULL;
	else{
		new=malloc(sizeof(ABin));
		new->valor=a->valor;
		new->esq=cloneMirror(a->dir);
		new->dir=cloneMirror(a->esq);
	}
	return new;
}
