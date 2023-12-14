![image](https://github.com/JDSherbert/Fisher-Yates-Shuffle/assets/43964243/4b345971-3dde-4700-8596-fcb6ebc05fef)


# Fisher Yates Shuffle Algorithm

<!-- Header Start -->
  <a href = "https://docs.unrealengine.com/5.1/en-US/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/unrealengine/white"> </a> 
  <a href = "https://docs.unity.com/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/unity/white"> </a> 
  <a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
    <a href = "https://learn.microsoft.com/en-us/cpp/c-language"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/c"> </a>
  <a href = "https://learn.microsoft.com/en-us/dotnet/csharp"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/csharp"> </a>
  <a href = "https://haxe.org/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/haxe"> </a>
  <a href = "https://www.java.com/en/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/oracle"> </a>
  <a href = "https://www.javascript.com/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/javascript"> </a>
  <a href = "https://www.typescriptlang.org/docs/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/typescript"> </a>
  <a href = "https://www.lua.org/docs.html"> <img align="left" height="40" img width="40" src="https://cdn.simpleicons.org/lua"> </a>
  <a href = "https://www.python.org/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/python"> </a>
  <a href = "https://ruby-doc.org/"> <img align="left" img height="40" img width="40" src="https://cdn.simpleicons.org/ruby"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Fisher-Yates-Shuffle?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Fisher-Yates-Shuffle?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Fisher-Yates-Shuffle?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Fisher-Yates-Shuffle?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FFisher-Yates-Shuffle%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
  <br></br>
<!-- Header End --> 

-----------------------------------------------------------------------

<a href=""> 
  <img align="left" alt="C++ Template" src="https://img.shields.io/badge/Algorithm%20Implementation-black?style=for-the-badge&logo=cpp&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/mit/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20MIT-black?style=for-the-badge&logo=mit&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview
The Fisher-Yates shuffle, also known as the Knuth shuffle, is a popular algorithm used to randomize the order of elements in an array. This algorithm efficiently generates a uniformly random permutation of the input array. The Fisher-Yates shuffle ensures that each permutation is equally likely, providing a uniform distribution of possible outcomes. Fisher-Yates shuffle is widely used in applications such as creating random games, shuffling decks of cards, and generating random test cases.

Where possible, I have provided the means to shuffle elements in-place without requiring additional memory (for performance focused languages like C, C++, and C#, which are normally used in game engines like Unreal Engine or Unity). In other languages that aren't so performance critical, I've provided the means to simply copy the array and then shuffle the copy instead.

In implementations where we can use Tuple Deconstruction, the time complexity is O(n), where n is the size of the array, as each element is visited and swapped once. Some languages do not support this, and usage (or non-usage) of this technique has been docuented in comments where required.

It follows a common set of steps:

- Start from the end of the array:
- Initialize an index variable at the last element of the array.
- Iterate through the array
- Repeat the following steps until the first element of the array is reached.
-- Generate a random index between 0 and the current index (inclusive).
-- Swap the element at the current index with the element at the randomly generated index.
- After these iterations, the array elements are shuffled, creating a random permutation.

```react
for n from n - 1 down to 1 do
    k = random integer such that 0 <= k <= n
    swap array[n] and array[k]
```

For more information on Fisher Yates Algorithm, please see here: https://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle


-----------------------------------------------------------------------

