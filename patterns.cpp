// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             cout<<"*";
            
           
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int  num=1;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=n;j>=1;j--){
//             cout<<j<<" ";
            
           
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int  num=1;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             cout<<num<<" ";
//             num = num+1;
            
           
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<j ;
            
           
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<i ;
            
           
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int num = 1;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<num << " ";
//             num=num+1;
            
           
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cin>>n;
//     int i,j=1;
    
//     for(i=1;i<=n;i++){
//          int num = i;
//         for(j=1;j<=i;j++){
//             cout<<num << " ";
//             num=num+1;
            
           
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<i-j+1<<" " ;

            
           
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         char ch = 'A'+i-1;
//         for(j=1;j<=n;j++){
//             cout<<ch<<" " ;
           

            
           
//         }
        
//         cout<<endl;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//         char ch = 'A';
//         for(j=1;j<=n;j++){
//             cout<<ch<<" " ;
//             ch = ch+1;
           

            
           
//         }
        
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//          char ch = 'A';
//     int i,j=1;
//     for(i=1;i<=n;i++){
   
//         for(j=1;j<=n;j++){
//             cout<<ch<<" " ;
//             ch = ch+1;
           

            
           
//         }
        
//         cout<<endl;
//     }
// }

/*
Input:
3

Output:
A B C
D E F
G H I
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++)
//     {
//         char ch = 'A' + i;

//         for(int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//     for(i=1;i<=n;i++){
//        char ch = 'A'+i-1;
//         for(j=1;j<=i;j++){
//             cout<<ch<<" ";
           
            
           
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
//      char ch = 'A';
//     for(i=1;i<=n;i++){
      
//         for(j=1;j<=i;j++){
//             cout<<ch<<" ";
//             ch=ch+1;

           
            
           
//         }
//         cout<<endl;
//     }
// }

// 5
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i,j=1;
     
//     for(i=1;i<=n;i++){
      
//         for(j=1;j<=i;j++){
//             char ch = 'A'+i+j-2;
//             cout<<ch<<" ";

           
            
           
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++)
//     {
//         int space = n - i;

//         while(space)
//         {
//             cout << " ";
//             space--;
//         }

//         int j = 1;
//         while(j <= i)
//         {
//             cout << "*";
//             j++;
//         }

//         cout << endl;
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
    
//     for(int i = 1; i <= n; i++)
//     {
//         for(int k= 1; k<= i-1; k++){

       
//         cout<<" ";
//     }
//      int star = n-i+1;
//       for(int j=1;j<=star;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }

//     return 0;
// }
// 5
// *****
//  ****
//   ***
//    **
//     *


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     for(int i = 1; i <= n; i++)
//     {
//         for(int k= 1; k<= i-1; k++){

       
//         cout<<" ";
//     }
//      int num = i;
//       for(int j=1;j<=n-i+1;j++){
//         cout<<num;
//       }
//       cout<<endl;
//     }

//     return 0;
// }
// 5
// 11111
//  2222
//   333
//    44
//     5


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     for(int i = 1; i <= n; i++)
//     {
//         for(int k= 1; k<= n-i; k++){

       
//         cout<<" ";
//     }
//      int num = i;
//       for(int j=1;j<=i;j++){
//         cout<<num;
//       }
//       cout<<endl;
//     }

//     return 0;
// }
// 5
//     1
//    22
//   333
//  4444
// 55555


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     for(int i = 1; i <= n; i++)
//     {
//         for(int k= 1; k<= i-1; k++){

       
//         cout<<" ";
//     }
//      int num = i;
//       for(int j=i;j<=n;j++){
//         cout<<num;
//         num++;
//       }
//       cout<<endl;
//     }

//     return 0;
// }
// 5
// 12345
//  2345
//   345
//    45
//     5



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//          int num = 1;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int k= 1; k<= n-i; k++){

       
//         cout<<" ";
//     }

//       for(int j=1;j<=i;j++){
//         cout<<j;
       
//       }
//       int start = i-1;
//       for (start = i-1;start>=1;start--){
//         cout<<start;
//       }

//       cout<<endl;
//     }

//     return 0;
// }




#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
        
    for(int i = 1; i <= n; i++){
     for(int num =1;num<=n-i+1;num++){
        cout<<num;
    }

      for(int j=1;j<=i-1;j++){
        cout<<"*";
       
       }
       for(int k=1;k<=i-1;k++){
        cout<<"*";
       
       }

             
  

     for(int num =n-i+1;num>=1;num--){
        cout<<num;
     }
      cout<<endl;
    }

    return 0;
}