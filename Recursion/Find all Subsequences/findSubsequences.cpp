#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void findSubsequences(string input, string& output, int index){
    if(index == input.length()){
        cout << output << endl;
        return;
    }
    //include
    char character = input[index];
    output.push_back(character);
    findSubsequences(input, output, index+1);
    
    //exclude
    output.pop_back();
    findSubsequences(input, output, index+1);
}



int main() {
    string input = "abc";
    string output = "";
    int index = 0;
    findSubsequences(input, output, index);
    return 0;
}