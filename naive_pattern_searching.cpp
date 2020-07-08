#include <bits/stdc++.h>

using namespace std;

void pattern_search(string& text, string& pattern){
    auto n=text.length();
    auto m=pattern.length();
    for(int i=0; i<=n-m; i++){
        int j=0;
        for(; j<m; j++){
            if(text[i+j]!=pattern[j]) break;
        }
        if(j==m) cout<< i << " ";
    }
}

int main()
{
    string text, pattern;
    getline(cin, text);
    getline(cin, pattern);
    pattern_search(text, pattern);
    return 0;
}
