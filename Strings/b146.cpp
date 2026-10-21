// to find if the string is valid palindrome or not.
#include<iostream>
#include<cstring>
using namespace std;
bool isAlphaNum(char ch){
    if((ch>='a' && ch<='z') || (ch>=0 && ch<=9) || (ch>='A' && ch<='Z')){
        return true;
    }else{
        return false;
    }
}
bool isPalindrome(string s){
    int st = 0, end = s.length()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st ++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end --;
            continue;
        }
        if(tolower(s[st] != tolower(s[end]))){
            return false;
        }

    }
    return true;
}
int main()
{
    string s = "Ac3?e3c&a";
    isPalindrome(s);
    if(isPalindrome){
        cout << "A valid palindrome.";
    }else{
        cout << "Not a valid Palindrome.";
    }
}