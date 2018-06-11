tor<int> div;
    int numdiv = 0;
    for (d = 1; d * d <= A; d++){
        if (A%d == 0 ){
            div.push_back(d);
            numdiv++;
        }
    }
    
    for (int i = numdiv - 1; i >= 0; i--) {
        if (div[i] * div[i] == A)
          continue;
        div.push_back(A/div[i]);
    }
    
    return div;
}

