#include <iostream>
using namespace std;

int main() {
    string input;
    cin>>input;
    int maximo = 0;
    char letra = 'a';
    int count = 0;
    for (int i=0; i<=input.length(); i++) {
        if (input[i] == letra)
            count++;
        else {
            letra = input[i];
            maximo = max(maximo, count);
            count = 1;
        }    
    }
    cout<<maximo;


    return 0;
}