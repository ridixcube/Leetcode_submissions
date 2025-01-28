class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0|| (x % 10 == 0 && x != 0)){
        return false;}

        long rev=0;
        long n=x;
        
        while(x > 0){
            int rem = x%10;
            rev = rem + rev*10;
            x=x/10;
            
        }
        return rev==n;    
    }
    
};