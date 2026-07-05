// #include <iostream>
// #include<math.h>
// using namespace std;
// int main() {
//     int n;
//     int i=0; long long ans =0;
//     cout<<"Enter a decimal number : ";
//     cin>>n;
//     while(n !=0){
//         int digit = n&1;
       
//         ans = (digit * pow(10,i)) + ans ;
//         n = n>>1;
//         i++;
//     }
//     cout<<"Binary number is : "<<ans<< endl;


    
//     return 0;
// }
#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    int i=0; long long ans =0;
    cout<<"Enter a binary number : ";
    cin>>n;
    while(n !=0){
        int digit = n%10;
        if(digit==1){
            ans = ans +pow(2,i);
        }
        n =n/10;
        i++;
    }
        cout <<"Decimal number is "<< ans ;
    return 0;
    
}