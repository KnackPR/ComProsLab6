#include<iostream>
using namespace std;

int main(){
    int num = 1 ;
    int even = 0 ;
    int odd = 0 ;
    
    while(num != 0){
    cout << "Enter an integer: ";
    cin >> num ;
    if(num != 0){
         if(num%2==0){
            even++ ;
        }else{
            odd++;
        }
    }
    }
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}