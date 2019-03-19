int qDig(unsigned int n){
    int contaDig=0;
    while (n != 0){
        n /= 10;
        contaDig++;
    }
    return contaDig;
}
