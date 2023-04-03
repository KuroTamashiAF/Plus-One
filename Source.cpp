#include <iostream>
#include <vector>
class Solution {
public:
    static std::vector<int> plusOne(std::vector<int>& digits) 
    {
        if (digits.empty())
            return digits;

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                digits[i] = 1;
                digits.push_back(0);
            }
            else
            {
                digits[i] += 1;
                break;
            }
        }
        return digits;
    }
    static void print(std::vector<int>& digits) {
        std::cout << '[';
        for (int i : digits)
        {
            std::cout << i << ',';
        }
        std::cout << ']';
    }

};





int main()
{
    std::vector<int> input = { 9};
    Solution::plusOne(input);
    Solution::print(input);

    return 0;
}