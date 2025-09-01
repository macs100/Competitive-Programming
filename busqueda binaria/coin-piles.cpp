/**
 * Time limit: 1.00 s 
 * Memory limit: 512 MB
 * 
 * You have two coin piles containing a and b coins. 
 * On each move, you can either remove one coin from the left pile and two coins from the right pile, 
 * or two coins from the left pile and one coin from the right pile.
 * 
 * input:
 * The first input line has an integer t: the number of tests.
 * After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.
 * 
 * output:
 * For each test, print "YES" if you can empty the piles and "NO" otherwise.
 * 
 * Constraints:
 * 1 < t < 10^5
 * 0 < a, b < 10^9
 * 
 */
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {

    
    int t, a, b;
    cin>>t;

    for (int i = 0; i<t; i++) {
        cin>>a>>b;

        if (a>2*b || b>2*a) {
            cout<<"NO";
            continue;
        }
        if((a+b)%3 != 0) {
            cout<<"NO";
            continue;
        }


        
    }

    return 0;
}
