int comunsOrd(int a[], int na, int b[], int nb){
    int i,j,com=0;
    i=j=0;
    while (i<na && j<nb){
        if(a[i]<b[j]) i++;
        else if (a[i]>b[j]) j++;
        else if (a[i] == b[j]){
            com++;
            i++;
            j++;
        }
    }
    return com;
}
