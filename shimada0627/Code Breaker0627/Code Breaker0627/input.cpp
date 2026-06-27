#include "input.h"
#include <random>
#include <stdio.h>
//@0‚©‚ç9‚Ì’†‚©‚çƒ‰ƒ“ƒ_ƒ€‚È”’l‚ğ¶¬
std::vector<int> FourRandomNumber()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::vector<int> digits{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::shuffle(digits.begin(), digits.end(), mt);
	std::vector<int> rnd(digits.begin(), digits.begin() + 4);

	return rnd;
}

std::vector<int> FourInputNumber()
{
    std::vector<int> inputNumbers;
    for (int i = 0; i < 4; ++i)
    {
        int num;
        scanf("%d", &num);
        inputNumbers.push_back(num);
    }
    return inputNumbers;
}