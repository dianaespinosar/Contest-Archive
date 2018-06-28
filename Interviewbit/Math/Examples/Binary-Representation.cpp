string Solution::findDigitsInBinary(int A) {
    /*
	*Poner el residuo de A al dividirlo entre 2.
	*Voltear binary porque usaste push_back.
	*/
	
	string binary;
    int i;
    if (A == 0){
        binary.push_back ('0');
        return binary;
    }
    for (; A != 0; A/= 2) {
        if (A%2 ==0){
          binary.push_back('0');
        }
        else {
            binary.push_back('1');
        }
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
