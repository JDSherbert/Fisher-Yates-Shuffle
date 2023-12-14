// ©2023 JDSherbert. All rights reserved.

#include <stdlib.h>
#include <time.h>

// Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
// This algorithm guarantees a uniform random permutation.
// The array is shuffled in place. (No copy generated)
// See Fisher-Yates Shuffle: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
void FisherYatesShuffle(int array[], int size) 
{
    int n, k, temp;
    
    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Iterate through the array in reverse order
    for (n = size - 1; n > 0; n--) 
    {
        // Generate a random index 'k' between 0 and n (inclusive)
        k = rand() % (n + 1);

        // Swap the elements at indices 'n' and 'k'
        temp = array[n];
        array[n] = array[k];
        array[k] = temp;
    }
}
