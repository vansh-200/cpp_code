#include <iostream>
using namespace std;



int fib(int n){
    if(n<2){
    return 1;
}
return fib(n-2) + fib(n-1);
}



int factorial(int n){
    if (n<=1){      //3
        return 1;   //THEy return 1
    }
    return n * factorial(n-1); //3!=3*2*1=6
}



int main(){
    
    
    //factorial of a number:
   // 6! = 6*5*4*3*2*1 = 720
   
   int a;
   
   cout<<"Enter the vlaue of "<<endl;
   cin>>a;
   
   
   //cout<<"Enter the vlaue of a is "<<factorial(a)<<endl;
   
   
   
   cout<<"The term in fibonacci sequence at position" <<" "<<a<<" "<< "is" <<" "<<fib(a)<<endl;
   
    return 0;
}
