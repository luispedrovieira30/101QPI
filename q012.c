int isVowel(char s){
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' || s== 'A' || s== 'E' || s=='I' || s=='O' || s=='U') return 1;
    else return 0;
}

void strnoV (char s[]){
    int i, j= strlen(s), n;
    char v[j];
    strcpy(v,s);
    for (i=n=0; v[i]|= '\0'; i++){
        if(!(isVowel(s[i]))){
            s[n]=v[i];
            n++;
        }
    }
    s[n]='\0';
}
