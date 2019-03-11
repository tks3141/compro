#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
std::vector<int> v1 = { 1, 2, 3 };
std::vector<int> v2 = { 1, 1, 1 };

std::vector<int> v3;
std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), std::plus<int>());

std::vector<int> v4(v1.size());
std::transform(v1.begin(), v1.end(), v2.begin(), v4.begin(), std::plus<int>());

std::cout << "v3:" << std::endl;
for (int x : v3)
{
std::cout << x << std::endl;
}
std::cout << "v4:" << std::endl;
for (int x : v4)
{
std::cout << x << std::endl;
}
}
