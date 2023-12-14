// ©2023 JDSherbert. All rights reserved.

/// <summary>
/// Utility class for shuffling arrays using various algorithms.
/// </summary>
/// <author>JDSherbert</author>
/// <since>14/12/2023</since>
public class Shuffle
{
    /// <summary>
    /// Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
    /// This algorithm guarantees a uniform random permutation.
    /// Shuffling is performed by using destruction swap on elements in the provided array.
    /// For more information, refer to the Fisher-Yates Shuffle algorithm described in:
    /// <see cref="https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle"/>
    /// </summary>
    /// <typeparam name="T">The type of elements in the array.</typeparam>
    /// <param name="array">The array to shuffle.</param>
    /// <returns>Shuffled copy of the array.</returns>
    public static T[] FisherYatesShuffle<T>(params T[] array)
    {
        // Cannot shuffle a null array or an array with only 1 element. Return early.
        if (array == null || array.Length < 2)
        {
            return array; 
        }

        // Create a copy of the array to maintain immutability
        T[] shuffledArray = array.Clone() as T[];
        // Cache the length of the array
        int n = shuffledArray.Length;

        // Iterate through the array in reverse order
        while (n > 1)
        {
            n--;

            // Generate a random index 'k' between 0 and n (inclusive)
            int k = Random.Range(0, n + 1);
            // Swap (using tuple deconstruction) the elements at indices 'k' and 'n'
            (shuffledArray[k], shuffledArray[n]) = (shuffledArray[n], shuffledArray[k]);
        }

        return shuffledArray;
    }
}
