#include <bits/stdc++.h>
#define MAX 9999
using namespace std;

int fibonacci(int n) {
    int a=0, b=1, next=0;
    for (int i=0;i<n;++i) {
        next = a+b;
        a=b;
        b=next;
    }
    return a;
}

int prime(int n) {
    int i, j, flag, count =0;
    //as prime numbers in given question start from 2
    for (i=2; i<=MAX; i++)
    {
        flag = 0;
        //to check if divisible apart from 1 & itself
        //loop starts from 2 to ignore divisibilty by 1 & ends before the number itself
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                //number is not prime
                flag = 1;
                break;
            }
        }
        //is prime
        if (flag == 0){
            //if found the nth prime number
            if(++count == n)
            {
                return i;
                break;
            }
        }
    }
    return 0;
}
void solve(int n) {
    if (n%2==0) { // fibonacci
        cout<< fibonacci(n/2)<<" ";;
    }    
    else { // prime
        cout<< prime((n+1)/2-1)<<" ";
    }
}

int main() {
    for (int i=1;i<=100;i++) solve(i); // prints the series for first 100 numbers
}