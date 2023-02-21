class Solution {
    public boolean isPalindrome(int x) {
        String s = String.valueOf(x);
        StringBuilder str = new StringBuilder(s);
        if(s.equals( str.reverse().toString())){
            return true;
        }
        return false;
    }
}