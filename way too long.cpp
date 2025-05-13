#include<iostream>
using namespace std;
int main (){

int lines;
cin>>lines;
while(lines!=0){
    string word;
    cin>>word;
    int wordlength;
    wordlength=word.length();
    if(wordlength>10){
        cout<<word[0]<<wordlength-2<<word[wordlength-1]<<endl;
    }
    else{
        cout<<word<<endl;
    }
    lines--;
}
return 0;}
