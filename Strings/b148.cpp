// Permutation of strings --> leetcode 567
#include<iostream>
#include<string>
using namespace std;
bool checkInclusion(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    if(n>m){
        return false;
    }
    // array for storing frequencies
    int count1[26] = {0};
    int count2[26] = {0};
    for(int i =0; i<n; i++){ // loop substring ki length tk chla
        count1[s1[i]-'a']++; // from here we start counting freq of char in s1.
        count2[s2[i]-'a']++; // counting frequency of char in window
    }
    //checking if the freq is same.
    bool same = true;
    for(int i =0; i<26; i++){
        if(count1[i]!=count2[i]){
            same = false;
            break;
        }
    }
    if(same){
        return true;
    }
    // sliding window forward
    for(int i = n; i<m; i++){ // n = 2, one window already ran so started from 2
        count2[s2[i-n]-'a']--;
        count2[s2[i]-'a']++;
        same = true;
        for(int j =0; j<26; j++){
            if(count2[j]!=count2[j]){
                same = false;
                break;
            }
        }
        if(same){
            return true;
        }
        return false;
    }
}
    int main(){
        string s1 = "ab";
        string s2= "eidbaooo";
        cout <<  boolalpha << checkInclusion(s1,s2);
        return 0;
    }
