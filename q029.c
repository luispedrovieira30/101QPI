int retiraNeg(int s[], int N){
    int i,j;
    for(i=0; i<N; i++) {
        if (s[i] < 0) {
            for (j = i; j < N; j++) {
                s[j] = s[j + 1];
            }
            N--;
            i--;
        }
    }
    return 0;
}
