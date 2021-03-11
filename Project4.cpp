#include <iostream>

int main()
{
    const int N = 4;
    int array[N][N];
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            array[i][j] = i + j;
            std::cout << array[i][j];  
        }
        std::cout << "\n";
    }
    int sum = 0;
    int M = 11 % N;
    for (int j = 0; j <N; ++j) 
    {
        sum += array[M][j];   
    }
    std::cout <<"Sum of elements: " << sum;
}
