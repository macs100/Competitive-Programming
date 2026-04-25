#include <iostream>
using namespace std;

int main() {
    int n;
    long long k, l = 0;
    long long total = 0;
    cin>>n;

    for (int i=0; i<n; i++) {
        cin>>k;
        if (k<l) {
            total+=l-k;
        }
        l = max(l, k);
    }

    cout<<total;
    return 0;
}