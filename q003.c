int sndmax(){
    int m1=0;
    int m2=0;
    int x;
    scanf("%d", &x);
    while (x != 0){
        if ( x>m1 && x> m2){
            m2 = m1;
            m1 = x;
        }else if (x<m1 && x>m2){
            m2 = x;
        }
        scanf("%d", &x);
    }
    printf("%d", m2);
    return 0;
}
