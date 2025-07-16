#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c', 'd','\0'};
    cout << strlen(str) << endl;
    char str2[] = "hello";
    cout << str2[2] << endl;
    char str3[100];
    cout << "enter an array:";
    cin >> str3;
    cout << "output of the array :" << str3 ;

    return 0;
}