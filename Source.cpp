#include <iostream>
#include <vector>
class Solution {
public:
    static std::vector<int> plusOne(std::vector<int>& digits) {










    }
    static void print(std::vector<int>& digits) {
        for (int i : digits)
        {
            std::cout << '[';
            std::cout << i << ',';
            std::cout << ']';
        }
    }

};





int main()
{
    std::vector<int> input = { 1,2,3 };
    Solution::plusOne(input);
    Solution::print(input);

    return 0;
}