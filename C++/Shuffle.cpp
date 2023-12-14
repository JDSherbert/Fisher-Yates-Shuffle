// ©2023 JDSherbert. All rights reserved.

#include "Shuffle.h"

/**
 * Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
 * This algorithm guarantees a uniform random permutation.
 * The array is shuffled in place.
 * @note See Fisher-Yates Shuffle: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
 *
 * @tparam T The type of elements in the array.
 * @tparam N The size of the array.
 * @param array The array to shuffle.
 *
 * @since 13/12/2023
 * @author JDSherbert
 */
template <typename T, size_t N>
void Shuffle::FisherYates(T (&array)[N]) 
{
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    size_t n = N; // Get the length of the array
    while (n > 1) // Iterate through the array in reverse order 
    {
        n--;

        // Generate a random index 'k' between 0 and n (inclusive)
        size_t k = std::rand() % (n + 1);
        // Swap the elements at indices 'k' and 'n'
        std::swap(array[k], array[n]);
    }
}

/**
 * Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
 * This algorithm guarantees a uniform random permutation.
 * Returns a copy of the shuffled array.
 * @note See Fisher-Yates Shuffle: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
 *
 * @tparam T The type of elements in the array.
 * @param array The array to shuffle.
 * @returns a copy of the shuffled array.
 *
 * @since 13/12/2023
 * @author JDSherbert
 */
template <typename T>
T Shuffle::FisherYates(const T& array) 
{
    // Create a copy of the array and shuffle it
    T shuffledArray = array;
    Shuffle::FisherYates(shuffledArray);

    return shuffledArray;
}
