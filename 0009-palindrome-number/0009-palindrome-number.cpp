class Solution {
public:
    bool isPalindrome(int x) {
        long reverse  = 0;
        int realnum = x;
        if(x<0){
            return 0;
        }
        while( x!=0){
            long i = x%10;
            reverse = reverse*10 + i;
            x/=10;
        }
        if ( reverse == realnum){
            return 1;
        }
        return 0;

        
    }
};