int depthOrd(ABin a, int x){
	int i=1,flag=0;
	while(a!=NULL && flag==0){
		if(a->valor==x) flag=1;
		else if(a->valor > x){
			a=a->esq;
			i++;
		}else{
			a=a->dir;
			i++;
		}
	}
	if(a==NULL && flag==0) i=-1;
	return i;
}
