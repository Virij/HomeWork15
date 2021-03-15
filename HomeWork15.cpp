#include <iostream>

void Print_num(int N, int k)
{
    for (int i = k; i <= N; i += 2)
    std::cout << i << " ";
    std::cout << "\n";
}

int main()
{
    int N;
    std::cout << "N="; std::cin >> N;

    std::cout << "Even:\n";
    Print_num(N, 0);

    std::cout << "Odd:\n";
    Print_num(N, 1);
       
    return 0;
}