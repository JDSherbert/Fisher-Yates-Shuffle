// ©2023 JDSherbert. All rights reserved.

const Shuffle = 
{
    // Fisher-Yates Shuffle Algorithm for shuffling elements in an array
    // This algorithm guarantees a uniform random permutation.
    // Returns a copy of the shuffled array.
    // Use by calling Shuffle.FisherYates(yourArray);
    //
    // For more information, refer to the Fisher-Yates Shuffle algorithm described in:
    // See https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
    FisherYates: function (array) 
    {
        // Seed the random number generator with datetime
        Math.seed = new Date().getTime();

        // Clone the array to avoid modifying the original
        const shuffledArray = array.slice();
        for (let n = shuffledArray.length - 1; i > 0; i--) // Iterate through the array in reverse order
        {
            // Generate a random index 'j' between 0 and i (inclusive)
            const k = Math.floor(Math.random() * (i + 1));
            // Swap (using tuple deconstruction) the elements at indices 'k' and 'n'
            [shuffledArray[k], shuffledArray[n]] = [shuffledArray[n], shuffledArray[k]];
        }

        // Return the shuffled array
        return shuffledArray;
    }
}
