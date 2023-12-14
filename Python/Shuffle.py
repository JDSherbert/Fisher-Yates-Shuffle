# ©2023 JDSherbert. All rights reserved.
import random

# Utility class for shuffling arrays using various algorithms.
class Shuffle:
    @staticmethod
    def FisherYates(array):
        # Clone the array to avoid modifying the original
        shuffledArray = array.copy()

        # Iterate through the array in reverse order
        for n in range(len(shuffled_array) - 1, 0, -1):
            # Generate a random index 'k' between 0 and n (inclusive)
            k = random.randint(0, n)

            # Swap (using tuple deconstruction) the elements at indices 'k' and 'n'
            shuffled_array[n], shuffled_array[k] = shuffled_array[k], shuffled_array[n]

        # Return the shuffled array
        return shuffled_array
