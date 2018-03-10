

#include<iostream>
#include<cstdint>
using namespace std;
void f1( uint64_t const N ) 
{
    for( uint64_t i = 0 ; i < N ; i++ ) {
    }
}

void f2( uint64_t const N ) 
{
    for( uint64_t i = N ; i--; ) {
        
    }
}

int code( void ) 
{
    uint64_t const MAX = uint64_t(1)<<34 ;
    #ifdef F1
        f1( MAX );
    #endif
    #ifdef F2
        f2( MAX );
    #endif
    return 0;    
}

int main( void ) 
{
    return code() ; 
}
