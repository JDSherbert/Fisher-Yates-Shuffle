// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <cstdlib>
#include <ctime>
#include <algorithm>

class Shuffle 
{
public:

    template <typename T, size_t N>
    static void FisherYates(T (&array)[N]);

};
