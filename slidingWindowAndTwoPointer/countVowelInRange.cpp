#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int vowel = 0;
    for(int i = 0; i < k; i++){
        char c = s[i];
        bool isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        bool isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        if(isLowercaseVowel || isUppercaseVowel){
            vowel++;
        }
    }
    cout << vowel << " ";
    int j = 0;
    for(int i = k ; i < n; i++){
            char c = s[i];
        bool isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        bool isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        if(isLowercaseVowel || isUppercaseVowel){
            vowel++;
        }
        c = s[j] ;
         isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
         isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
        if(isLowercaseVowel || isUppercaseVowel){
            vowel--;
        }
        cout << vowel << " ";
        j++;
    }
}