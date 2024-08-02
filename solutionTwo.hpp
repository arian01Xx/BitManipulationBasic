#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class SolutionThree {
public:
    vector<int> countBits(int n){
        vector<int> result(n+1,0);
        if(n==0){
            return result;
        }
        //inicializacion de casos base
        result[0]=0;
        if(n >= 1){
            result[1] = 1;
        }
        //aqui utiliza la operacion binaria de conversion decimal a binario
        for(int x=2; x<=n; ++x){
            if(x%2 == 0){
                result[x] = result[x/2];
            }else{
                result[x] = result[x/2]+1;
            }
        }
        return result;
    }
};

#endif // SOLUTION_THREE_HPP