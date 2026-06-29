// #include<iostream>
// using namespace std;
// int main(){

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4 , b = 6;
//     cout << "a & b = " << (a & b) << endl;
//     cout << "a | b = " << (a | b) << endl;
//     cout << "a ^ b = " << (a ^ b) << endl;
//     cout << "~a = " << (~a) << endl;
//     cout << (17<<1)<<endl;
//     cout << (17>>1)<<endl;
//      cout << (17<<2)<<endl;
//     cout << (17>>2)<<endl;

//     int i = 7;
//     cout<<i++<<endl;  //op 7, i= 8
//      cout<<i--<<endl;  //op 8, i= 7
//       cout<<++i<<endl;  //op 8, i= 8
//        cout<<--i<<endl;  //op 7, i= 7
    

// }

// #include<iostream>
// using namespace std;

// int main()
// {
// int n;
// cout << "enter the value of n" << endl;
// cin >> n;


// cout << "printing count from 1 to n" << endl;

// int i = 1;

// for(;;)
// {
//     if(i <= n)
//     {
//         cout << i << endl;
//     }

//     i++;
// }


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int sum=0;
//     cout<<"Enter n : ";
//     cin>>n;
//     for(int i =0;i<=n;i++){
//         sum = sum+i;
//             cout<<"Sum of "<< i << " number is : "<< sum <<endl;
//     }

// return 0;
// }


// Fibbonacci series 

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     int a=0,b=1;
   
//     cout<<"Enter n : ";
//     cin>>n;
//     cout<<a<<" "<<b<<" ";
//     for(int i =0;i<=n;i++){
//         int nextnum = a+b ;
//         cout<< nextnum<< " " ;
//         a = b ;
//         b= nextnum;
//     }

// return 0;
// }

// Prime Number 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    if(n<=1){
        cout<<"Not a prime number .";
        return 0;
    }
    int isPrime = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
          isPrime = 0;
          break;
        } 
    }
    if(isPrime==0){
        cout<<"Not a prime number .";
    }
    else{
        cout<<"It is a prime number .";
    }
}
