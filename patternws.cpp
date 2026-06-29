/*
=====================================================
PATTERN 1 : SQUARE STAR PATTERN
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

Input:
4

Output:
****
****
****
****
*/


/*
=====================================================
PATTERN 2 : REVERSE COUNTING SQUARE
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

Input:
4

Output:
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/


/*
=====================================================
PATTERN 3 : CONTINUOUS COUNTING SQUARE
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

Input:
3

Output:
1 2 3
4 5 6
7 8 9
*/


/*
=====================================================
PATTERN 4 : NUMBER TRIANGLE (j)
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

Input:
4

Output:
1
12
123
1234
*/


/*
=====================================================
PATTERN 5 : NUMBER TRIANGLE (i)
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

Input:
4

Output:
1
22
333
4444
*/


/*
=====================================================
PATTERN 6 : CONTINUOUS COUNTING TRIANGLE
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

Input:
4

Output:
1
2 3
4 5 6
7 8 9 10
*/


/*
=====================================================
PATTERN 7 : START FROM ROW NUMBER
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int num=i;

        for(int j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

Input:
4

Output:
1
2 3
3 4 5
4 5 6 7
*/


/*
=====================================================
PATTERN 8 : REVERSE COUNTING TRIANGLE
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
}

Input:
4

Output:
1
2 1
3 2 1
4 3 2 1
*/


/*
=====================================================
PATTERN 9 : CHARACTER SQUARE (AAA, BBB)
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        char ch='A'+i-1;

        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

Input:
4

Output:
A A A A
B B B B
C C C C
D D D D
*/


/*
=====================================================
PATTERN 10 : CHARACTER SQUARE (ABC)
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        char ch='A';

        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

Input:
4

Output:
A B C D
A B C D
A B C D
A B C D
*/


/*
=====================================================
PATTERN 11 : CONTINUOUS CHARACTER PATTERN
=====================================================

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char ch='A';

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

Input:
3

Output:
A B C
D E F
G H I
*/