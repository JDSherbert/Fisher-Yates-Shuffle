// ©2023 JDSherbert. All rights reserved.

#include "Shuffle.h"

template <typename T, size_t N>
void Shuffle::FisherYates(T (&array)[N]) 
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    size_t n = N;
    while (n > 1) 
    {
        n--;
        
        size_t k = std::rand() % (n + 1);
        std::swap(array[k], array[n]);
    }
}
