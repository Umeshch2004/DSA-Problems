//Link: https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
bool checkPalindrome(string s) {

        int left = 0, right = s.length()-1;
        while(left<right)
        {
            if(!isalnum(s[left])) 
                left++;
            else if(!isalnum(s[right])) 
                right--;
            else if(tolower(s[left])!=tolower(s[right])) 
                return false;
            else {
                left++; 
                right--;
            }
        }
        return true;

}