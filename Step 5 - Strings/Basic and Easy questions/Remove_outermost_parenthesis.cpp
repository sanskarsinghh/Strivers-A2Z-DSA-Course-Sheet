#include<bits/stdc++.h>
using namespace std;
string solution(string s){
    int start = 0;
    int count = 0;
    string out = "";
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(') count++;
        else count--;
        if(count == 0){
            out += s.substr(start+1, i-start - 1);
            start = i + 1;
        }
        return out;
    };
}
int main (){
string s = "(()())(())";
cout << solution(s);
return 0;
}