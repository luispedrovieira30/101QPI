int lookupAB(ABin a, int x){
	int flag=0;
	while(a!= NULL && flag==0){
		if(a->valor==x) flag=1;
		else if(a->valor>x) a=a->esq;
		else a=a->dir;
	}
	return flag;
}
