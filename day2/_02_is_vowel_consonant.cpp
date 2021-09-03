#include<bits/stdc++.h>
using namespace std;
int isVowel(char c){
    if(c == 'a'|| c == 'A' || c == 'e' || c=='E' || c == 'i'|| c=='I' ||c == 'o'|| c == 'O' ||c == 'u' || c == 'U'){
        return 1;
    }
    return 0;
}
int main(){
    char c;
    cin>>c;
    if(isVowel(c)){
        cout<<"Vowel";
    }else{
        cout<<"Consonant";
    }
    return 0;
}