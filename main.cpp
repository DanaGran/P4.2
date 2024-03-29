#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>


int main(){

    std::string word , min;
    std::vector<std::string>cuvinte;
    while(std::cin>>word){

        cuvinte.push_back(word);

    }
    min=cuvinte[0];
    for( auto x: cuvinte){
        if( x < min)min=x;
    }
    std::cout<<min;

    return 0;
}