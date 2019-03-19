void truncW(char s[], int n){
    int i,j=0,rep=n;
    for(i=0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            s[j]= ' ';
            j++;
            rep=n;
        }
        else
        {
            if(rep != 0)
            {
                s[j] = s[i];
                j++;
                rep--;
            }
        }
    }
    s[j] = '\0';
}
