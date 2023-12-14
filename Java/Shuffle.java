// ©2023 JDSherbert. All rights reserved.

import java.util.Random;

// Utility class for shuffling arrays using various algorithms.
public class Shuffle 
{
    // Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
    // This algorithm guarantees a uniform random permutation.
    // Returns a copy of the shuffled array.
    // For more information, see https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle"
    public static <T> T[] fisherYatesShuffle(T[] array) 
    {
        Random rand = new Random();

        for (int n = array.length - 1; n > 0; n--)
        {
            int k = rand.nextInt(n + 1);

            // Swap the elements at indices 'n' and 'k'
            T temp = array[n];
            array[n] = array[k];
            array[k] = temp;
        }
    }
}
