#include <iostream>
using namespace std;
 
int main(){
    long long a, b, c;
    long long area;
    long long maxBC;
    long long distB;
    long long distC;
    long long CManhattan;
    long long BManhattan;
    long long response = 0;
    cin>> a;
 
    for(int i=0; i<a; i++) {
        cin>>b>>c;
        maxBC = max(b, c); /// 1, 1 => 1
        area = (maxBC -1)*(maxBC-1); ///=> 0
 
        if((maxBC % 2) == 0) { /// =>false
          BManhattan = 1;
          CManhattan = maxBC;
        } else {
          BManhattan = maxBC; /// 1
          CManhattan = 1;     /// 1
        }
 
        distB = abs(BManhattan - b); /// 0
        distC = abs(CManhattan - c); /// 0
 
        response = area + distB + distC + 1 ;
 
        cout<<response<<endl;
    }
}