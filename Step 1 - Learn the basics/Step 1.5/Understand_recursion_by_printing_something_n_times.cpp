#include<bits/stdc++.h>
using namespace std;
int solution(int n){
    if(n>1)
    solution(n-1);
    cout << "something" << " ";
}
int main (){
int n = 5;
solution(n);
return 0;
}