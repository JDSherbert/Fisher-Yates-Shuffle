# ©2023 JDSherbert. All rights reserved.

# Fisher-Yates Shuffle Algorithm for shuffling elements in an array.
# This algorithm guarantees a uniform random permutation.
# Shuffling is performed by using destruction swap on elements in the provided array.
# For more information, refer to https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle"
def FisherYatesShuffle(array)
    a = array.length

    # Iterate through the array in reverse order
    (a - 1).downto(1) do |n|
        k = rand(n + 1)
        # Swap (using tuple deconstruction) the elements at indices 'k' and 'n'
        array[n], array[k] = array[k], array[n]
    end    
    array
end
