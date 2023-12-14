// ©2023 JDSherbert. All rights reserved.

#pragma once

#include <cstdlib>
#include <ctime>
#include <algorithm>

/**
 * Utility class for shuffling arrays using various algorithms.
 */
class Shuffle 
{
public:

    /**
     * Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
     * This algorithm guarantees a uniform random permutation.
     * For more information, refer to the Fisher-Yates Shuffle algorithm described in:
     * See https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
     *
     * @tparam T The type of elements in the array.
     * @tparam N The size of the array.
     * @param array The array to shuffle.
     * @returns the original array, shuffled.
     */
    template <typename T, size_t N>
    static void FisherYates(T (&array)[N]);

    /**
     * Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
     * This algorithm guarantees a uniform random permutation.
     * For more information, refer to the Fisher-Yates Shuffle algorithm described in:
     * See https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
     *
     * @tparam T The type of elements in the array.
     * @tparam N The size of the array.
     * @param array The array to shuffle.
     * @returns a copy of the original array, shuffled.
     */
    template <typename T>
    static T FisherYates(const T& inputArray);

}

};
