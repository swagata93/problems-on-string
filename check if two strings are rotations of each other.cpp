#include <bits/stdc++.h>

using namespace std;

bool checkRotation(string& str1, string& str2){
    if(str1.length()!=str2.length()) return false;
    return (str1+str1).find(str2)!=string::npos;
}

int main()
{
    string str1, str2;
    cin>> str1 >> str2;
    bool res= checkRotation(str1, str2);
    if(res) cout<< "yes";
    else cout<< "no";
    return 0;
}
