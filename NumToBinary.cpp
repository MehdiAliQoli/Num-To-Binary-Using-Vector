#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
 int n , rem;
 cin>>n;
 vector<int> binary;
 while(n > 0){
     rem=n%2;
     n/=2;
     binary.push_back(rem);
 }
 for(int i = binary.size()-1; i>=0; i--){
     cout<<binary[i];
 }
      
      
      
    return 0;
}
