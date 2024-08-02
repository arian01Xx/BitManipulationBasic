#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class SolutionTwo{
public:
    int singleNumber(vector<int>& nums) {
        int find=0;
        for(int i=0; i<nums.size(); i++){
            find^=nums[i]; //XOR operation ^
        }
        return find;
/*
Key XOR Properties:
Identity: ( a ^ 0 = a ). XOR-ing any number with 0 leaves the number unchanged.
Self-Inverse: ( a ^ a = 0 ). XOR-ing a number with itself results in 0.
Commutative and Associative: XOR operation is both commutative and associative, meaning the order in which numbers are XOR-ed does not matter.
*/
    }
};

#endif // SOLUTION_TWO_HPP