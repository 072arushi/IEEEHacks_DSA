--------------------------Majority Element-------------------------------------------

  Approach 1: Brute Force
Intuition
We can exhaust the search space in quadratic time by checking whether each element is the majority element.

Algorithm
The brute force algorithm iterates over the array, and then iterates again for each number to count its occurrences. As soon as a number is found to have appeared more than any other can possibly have appeared, return it.
    T.C -Time complexity : O(n2)
The brute force algorithm contains two nested for loops that each run for n iterations, adding up to quadratic time complexity.
  <CODE>
  class Solution {
    public int majorityElement(int[] nums) {
        int majorityCount = nums.length/2;

        for (int num : nums) {
            int count = 0;
            for (int elem : nums) {
                if (elem == num) {
                    count += 1;
                }
            }

            if (count > majorityCount) {
                return num;
            }
           }

        return -1;    
    }
}

Approach-2 optimised solution -> Moore vooting algorithm
Intuition
If we had some way of counting instances of the majority element as +1+1+1 and instances of any other element as −1-1−1, summing them would make it obvious that the majority element is indeed the majority element.

Algorithm
Essentially, what Boyer-Moore does is look for a suffix sufsufsuf of nums where suf[0]suf[0]suf[0] is the majority element in that suffix. To do this, we maintain a count, which is incremented whenever we see an instance of our current candidate for majority element and decremented whenever we see anything else. Whenever count equals 0, we effectively forget about everything in nums up to the current index and consider the current number as the candidate for majority element. It is not immediately obvious why we can get away with forgetting prefixes of nums - consider the following examples (pipes are inserted to separate runs of nonzero count).

[7, 7, 5, 7, 5, 1 | 5, 7 | 5, 5, 7, 7 | 7, 7, 7, 7]

Here, the 7 at index 0 is selected to be the first candidate for majority element. count will eventually reach 0 after index 5 is processed, so the 5 at index 6 will be the next candidate. In this case, 7 is the true majority element, so by disregarding this prefix, we are ignoring an equal number of majority and minority elements - therefore, 7 will still be the majority element in the suffix formed by throwing away the first prefix.

[7, 7, 5, 7, 5, 1 | 5, 7 | 5, 5, 7, 7 | 5, 5, 5, 5]

Now, the majority element is 5 (we changed the last run of the array from 7s to 5s), but our first candidate is still 7. In this case, our candidate is not the true majority element, but we still cannot discard more majority elements than minority elements (this would imply that count could reach -1 before we reassign candidate, which is obviously false).

Therefore, given that it is impossible (in both cases) to discard more majority elements than minority elements, we are safe in discarding the prefix and attempting to recursively solve the majority element problem for the suffix. Eventually, a suffix will be found for which count does not hit 0, and the majority element of that suffix will necessarily be the same as the majority element of the overall array.
 
  T.c -Time complexity : O(n)O(n)O(n)
reason: Boyer-Moore performs constant work exactly nnn times, so the algorithm runs in linear time.
  <CODE>
  class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        Integer candidate = null;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
}

hope you liked it!
  Thank you

