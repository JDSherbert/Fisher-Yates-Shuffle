// ©2023 JDSherbert. All rights reserved.

// Utility class for shuffling arrays using various algorithms.
class Shuffle
{

    // Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
    // This algorithm guarantees a uniform random permutation.
    // Returns a copy of the shuffled array.
    // Refer to Fisher-Yates Shuffle: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
    function FisherYatesShuffle<T>(array: T[]): T[] 
    {
        // Clone the array to avoid modifying the original
        const shuffledArray = [...array];

        // Iterate through the array in reverse order
        for (let i = shuffledArray.length - 1; i > 0; i--) 
        {
            // Generate a random index 'j' between 0 and i (inclusive)
            const j = Math.floor(Math.random() * (i + 1));

            // Swap the elements at indices 'i' and 'j'
            [shuffledArray[i], shuffledArray[j]] = [shuffledArray[j], shuffledArray[i]];
        }

        return shuffledArray;
    }
}
