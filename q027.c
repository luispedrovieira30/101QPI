void merge(int r[], int a[], int b[], int na, int nb){
    int i=0, j=0, k=0;
    while(i<na && j<nb){
        if (a[i] < b[j]){
            r[k] = a[i];
            i++;
            k++;
        }
        else {
            r[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<na){
        r[k]=a[i];
        k++;
        i++;
    }
    while(j<nb){
        r[k]=b[j];
        j++;
        k++;
    }
}
