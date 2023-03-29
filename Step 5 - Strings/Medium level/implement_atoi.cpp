#include<bits/stdc++.h>
using namespace std;
int solution(string s){
    int result = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] - '0' <= 9) result = result * 10 + (s[i] - '0');
    }
    return result;
}
int main (){
string s = {"24"};
cout << solution(s) << endl;
return 0;
}