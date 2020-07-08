#include <bits/stdc++.h>
using namespace std;

void mySwap(string& str, int i, int j){
    char t=str[i];
    str[i]=str[j];
    str[j]=t;
}

void myReverse(string& str, int low, int high){
    while(low<=high){
        mySwap(str, low, high);
        low++; high--;
    }
}

void reverseWords(string& str, int n){
    int s=0;
    //auto n=str.size();
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
    int n=str.size();
    //cout<<n;
    reverseWords(str, n);
    for(int i=0; i<n; i++) cout<< str[i];
    return 0;
}
