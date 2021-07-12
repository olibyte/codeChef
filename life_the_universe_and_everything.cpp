#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
    int input ;
    while( std::cin >> input && input != 42 ) std::cout << '\t' << input << '\n' ;
    while( std::cin >> input ) ;
}