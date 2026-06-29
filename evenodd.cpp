// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number ";
//     cin>> n;
//     if(n%2==0){
//         cout<<"Number is even";
//     }
//     else {
//         cout<<"Number is odd";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter numbers\n ";
//     cin>>a>>b>>c;
   
//     if(a+b>c&&b+c>a&&a+c>b){
//         cout<<"Triangle is possible";
//     }
//     else {
//         cout<<"Triangle is not possible \n";
//     }
//      return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>> n;
//     int num = 2;
    
//     // while(num<=n){
//     //     cout<<num<<"\n";
//     //     num = num+2;

//     // }
//     for(num=2;num<=n;num+=2)
//     cout<<num;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch ;
//     cout<<"Enter character \n";
//     cin>> ch;
//     if(ch>='A'&&ch<='Z'){
//         cout<<"Uppercase";
//     }
//     else if(ch>='a'&&ch<='z'){
//         cout<<"Lowercase";
//     }
//      else if(ch>='0'&&ch<='9'){
//         cout<<"Numeric Value";
//     }
//      else {
//         cout<<"Special character";
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     int sum =0;
//     int i = 0;
//     while (i<=n){
//         sum =sum+i;
//         i=i+2;

//     }
//     cout<< sum ;
// }


// farenhiet to celsius 
#include <iostream>
using namespace std ;
int main (){
    float f , c;
    cout<<"ENter the value in farenhiet"<< " ";
    cin>>f;
    c = (5.0 / 9) * (f - 32);
    cout<<"The value in celsius will be ="<< c;
}