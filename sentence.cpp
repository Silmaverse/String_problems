#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[12];
    cout << "Enter a char array:";
    cin.getline(sentence, 12);
    for(char ch: sentence){
        cout << ch << " ";
    }
    int len = 0;
    for (int i = 0; sentence[i] != '\0';i++){
        len++;
    }
    cout << len;
    return 0;
}