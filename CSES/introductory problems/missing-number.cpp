#include <iostream>
using namespace std;

int main() {
    int k;
    long long n;
    cin>>n;
    long long total = (n * (n+1))/2;

    for (int i=1; i<n; i++) {
        cin>>k;
        total-=k;
    }

    cout<<total;
    return 0;
}