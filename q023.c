int palindorome(char s[]){
    int i, j, r=1;
    for(i=0,j=strlen(s)-1; s[i] != '\0'; i++ , j--){
        if (s[i]!=s[j]) r=0;
    }
    return r;
}
