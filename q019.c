int igual(char s1[], char s2[], int i){
    int j;
    for(j=0; s1[i] != '\0';i++, j++){
        if ( s1[i] != s2[j]) return 0;
    }
    return 1;
}
