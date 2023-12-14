// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <cstdlib>
#include <ctime>
#include <algorithm>

/// <summary>
/// Utility class for shuffling arrays using various algorithms.
/// </summary>
class Shuffle 
{
public:

    /// <summary>
    /// Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
    /// This algorithm guarantees a uniform random permutation.
    /// For more information, refer to the Fisher-Yates Shuffle algorithm described in:
    /// See https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
    /// </summary>
    /// <typeparam name="T">The type of elements in the array.</typeparam>
    /// <param name="array">The array to shuffle.</param>
    template <typename T, size_t N>
    static void FisherYates(T (&array)[N]);

};
