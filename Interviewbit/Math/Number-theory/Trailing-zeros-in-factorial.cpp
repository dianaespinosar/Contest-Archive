/*
*Solo te importan los múltiplos de 5.
*/
int Solution::trailingZeroes(int A) {
    int i;
    int exp;
    int div;
    int counter = 0;
    for (i = 1; i <= A; i++) {
        div = 5;
        for (; div <= i;div *= 5) {
            if (i%div == 0){
                counter ++;
            }
            else {
            break;
            }
        }
    }
    return counter;
}
