// ©2023 JDSherbert. All rights reserved.

// Utility class for shuffling arrays using various algorithms.
class Shuffle 
{
    // Fisher-Yates Shuffle Algorithm for shuffling elements in an array
    // This algorithm guarantees a uniform random permutation.
    // For more information, refer to the Fisher-Yates Shuffle algorithm described in:
    // See https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
    static function FisherYates<T>(array:Array<T>):Array<T> 
    {
        // Clone the array to avoid modifying the original
        var shuffledArray:Array<T> = array.copy();

        // Iterate through the array in reverse order
        for (n in shuffledArray.length - 1...0) 
        {
            // Generate a random index 'k' between 0 and n (inclusive)
            var k:Int = Math.random() * (n + 1);

            // Swap the elements at indices 'k' and 'n'. 
            // Note that haxe does not contain implicit tuple deconstruction.
            var temp:T = shuffledArray[n];
            shuffledArray[n] = shuffledArray[k];
            shuffledArray[k] = temp;
        }

        // Return the shuffled array
        return shuffledArray;
    }
}
