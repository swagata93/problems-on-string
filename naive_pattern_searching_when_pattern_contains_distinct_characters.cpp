#include <bits/stdc++.h>

using namespace std;

void pattern_search(string& text, string& pattern){
    auto n= text.length();
    auto m= pattern.length();
    for(int i=0; i<=n-m;){
        int j=0;
        for(; j<m; j++){
            if(text[i+j]!=pattern[j])
                break;
        }
        if(j==m){
            cout<< i << " ";
            i++;
        }
        else if(j==0) i++;
        else i=i+j;
    }
}

int main()
{
    string text, pattern;
    cin>> text>> pattern;
    pattern_search(text, pattern);
    return 0;
}
