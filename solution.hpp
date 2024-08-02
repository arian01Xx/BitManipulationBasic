#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class Solution{
public:
    int minFlips(int a, int b, int c) {
    	//se convierten los numeros a sus representaciones binarias de 32 bits
        string a1, b1, c1;
        bitset<32> binary(a);
        a1=binary.to_string();

        if(true){
            bitset<32> bitsetRepresentation(b);
            b1=bitsetRepresentation.to_string();
        }

        if(true){
            bitset<32> bitsetRepresentation(c);
            c1=bitsetRepresentation.to_string();
        }

        int changes=0;
        for(int i=31; i>=0; i--){
            if(c1[i] == '1'){
            	//si en c un bit es uno, revisamos en a1 y b1
            	//si es que hay un cero para hacer el cambio
                if(a1[i] != '1' && b1[i] != '1') changes++;
            }else{
            	//si es cero, revisamos en los dos anteriores
            	//si hay un uno para hacer el cambio
                if(a1[i] == '1') changes++;
                if(b1[i] == '1') changes++;
            }
        }
        return changes;
    }
};

#endif // SOLUTION_HPP