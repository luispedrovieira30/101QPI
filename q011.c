void strrev(char s[]){
    int i=strlen(s)-1,j =0;
    char rev[i+1];
    for(i; i>=0; i--){
        rev[j]=s[i];
        j++;
    }
    rev[j] = '\0';
    i=0;

    for(i=0; rev[i] != '\0'; i++){
        s[i] = rev[i];
    }
    s[i]= '\0';
}
