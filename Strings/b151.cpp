
#include<iostream>
#include<string>
using namespace std;

bool checkAnagrams(string s1, string s2){
    int n = s1.length();
    int m = s2.length();

    int count1[26] = {0};
    int count2[26] = {0};

    if(n != m){
        return false;
    }

    for(int i = 0; i < n; i++){
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(count1[i] != count2[i]){
            return false;
        }
    }

    return true;
}

int main(){
    cout << boolalpha << checkAnagrams("listen", "silent");
    return 0;
}
