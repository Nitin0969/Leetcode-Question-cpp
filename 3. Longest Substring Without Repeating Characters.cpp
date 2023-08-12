class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        int maxlength = 0;
        Set<Character>charSet = new HashSet<>();
        int left = 0;
        for(int right = 0;right<n;right++){
            // if right not present push in array
            if(!charSet.contains(s.charAt(right))){
                charSet.add(s.charAt(right));
                // compare length of set
                maxlength = Math.max(maxlength,right-left+1);
            }
            else{
                // if element present remove all elements till array has unique element
                while(charSet.contains(s.charAt(right))){
                    charSet.remove(s.charAt(left));
                    left++;
                }
                //push right in array
                 charSet.add(s.charAt(right));
            }
           
        }
return maxlength;
    }
}