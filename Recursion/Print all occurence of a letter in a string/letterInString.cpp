#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printAllOccurenceofletter(string &s, int n, char letter, int i){
    if(i == n) return;
    if(s[i] == letter) cout<<i<<" ";
    printAllOccurenceofletter(s,n,letter,i+1);
}



int main() {
    string s = "Digit";
    int n = s.length();
    char letter = 'i'; 
    printAllOccurenceofletter(s,n,letter,0);
    return 0;
}