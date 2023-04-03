#include <iostream>
#include <vector>
class Solution {
public:
    static std::vector<int> plusOne(std::vector<int>& digits) 
    {
       
        if (digits.empty())
            return digits;
        int size = digits.size();

        for (int i = size - 1; i >= 0; i--)
        {
            if (i == size - 1)
                digits[i] += 1;

            if (digits[i] == 10)
            {
                digits[i] = 0;
                if (i != 0)
                {
                    digits[i - 1] += 1;
                }
                else
                {
                    digits.push_back(0);
                    digits[i] = 1;
                }
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
    std::vector<int> input = { 9,9};
    Solution::plusOne(input);
    Solution::print(input);

    return 0;
}