#include <bits/stdc++.h>
using namespace std;


void myReverse(string& str, int low, int high){
    while(low<=high){
        swap(str[low], str[high]);
        low++; high--;
    }
}

void reverseWords(string& str){
    int s=0;
    auto n=str.size();
    for(int e=0; e<n; e++){
        if(str[e]==' '){
            myReverse(str, s, e-1); s=e+1;
        }
    }
    myReverse(str, s, n-1);
    myReverse(str, 0, n-1);
}



int main()
{
    string str;
    getline(cin, str);
    reverseWords(str);
    cout<<str;
    return 0;
}
