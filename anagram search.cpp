#include <bits/stdc++.h>
#define CHAR 256
using namespace std;

bool areSame(int a[], int b[]){
    bool res=true;
    for(int i=0; i<CHAR; i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

bool isPresent(string& text, string& pat){
    int ct[CHAR]={0};
    int cp[CHAR]={0};
    for(int i=0; i<pat.length(); i++){
        ct[text[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.length(); i<text.length(); i++){
        if(areSame(ct, cp))
            return true;
        ct[text[i]]++;
        ct[text[i-pat.length()]]--;
    }
    return false;
}

int main()
{
    string text, pattern;
    cin>> text >> pattern;
    if(isPresent(text, pattern)) cout<< "anagram of pattern is present in text";
    else cout<< "anagram of pattern is not present in text";
    return 0;
}
