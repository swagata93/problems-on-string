#include <bits/stdc++.h>
using namespace std;



void myReverse(char str[], int low, int high){
    while(low<=high){
        swap(str[low], str[high]);
        low++; high--;
    }
}

void reverseWords(char str[], int n){
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
    int n=str.length();
    char s[n];
    strcpy(s, str.c_str());
    reverseWords(s, n);
    for(int i=0; i<n; i++)
        cout<< s[i];
    return 0;
}

