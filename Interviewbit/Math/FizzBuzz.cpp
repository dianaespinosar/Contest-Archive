/*
*4 Casos, lo divide el 3, el 5, ambos o ninguno.*
*/

vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    int i;
    for (i =1; i <= A; i++){
        if (i%3 != 0 && i%5 != 0){
            ans.push_back(to_string(i));
        }
        
        else if (i%3 == 0 && i%5 != 0){
            ans.push_back("Fizz");
        }
        
        else if (i%5 == 0 && i%3 != 0){
            ans.push_back("Buzz");
        }
        
        else {
            ans.push_back("FizzBuzz");
        }
    }
    return ans;  
    
}
