-- ©2023 JDSherbert. All rights reserved.

-- Fisher-Yates Shuffle Algorithm for shuffling elements in a table
-- This algorithm guarantees a uniform random permutation.
-- Returns a copy of the shuffled array
-- For more information, refer to https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
function FisherYatesShuffle(array)
    local a = #array

    for n = a, 2, -1 do
        local k = math.random(n)
        -- Swap (using tuple deconstruction) the elements at indices 'k' and 'n'
        array[n], array[k] = array[k], array[n]
    end

    return array
end
