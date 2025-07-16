#include<iostream>
#include<string>
using namespace std;


int main(){
    // string str;
    // getline(cin, str);
    // cout << str << endl;
    string str = "apna college hai";
    // for(char ch: str){
    //     cout << ch;
    // }
    for (int i = 0; i < str.length();i++){
        cout << str[i] << " ";
    }
        return 0;
}