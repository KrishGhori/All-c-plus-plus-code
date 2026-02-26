#include<iostream>

using namespace std ;

int main(){

    // Desimal to Binary Conversion
    int n ;
    cin >> n ;

    int pov = 1 ;
    int ans = 0 ;
    
    while ( n != 0 ){
        int bit = n&1 ;
        ans = (bit * pov)+ ans ;
        n = n>>1 ;
        pov *= 10 ;
       
    }
    cout<< "the binary equivalent is :- " << ans << endl ;
    
}