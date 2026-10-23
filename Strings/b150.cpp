#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[] = "aabbcccd";
    int n = strlen(ch);
    int idx =0;
    for(int i =0; i<n ; i++){
        char c = ch[i];
        int count = 0;
        while(i<n && ch[i]==c){
            count ++;
            i++;
        }
        if(count ==1){
            ch[idx++]=c;
        }else{
            ch[idx++]=c;
            string str = to_string(count);
            for(char dig:str){
                ch[idx++]=dig;
            }
        }
        i --;
    }
    
    cout << idx;

}