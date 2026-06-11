void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i]<nums2[j]){
            nums1[k]=nums2[j];
            j--;
        }
        else{
         nums1[k]=nums1[i];
            i--;
        }
        k--;
    }
    while (j >= 0) {
    nums1[k] = nums2[j];
    j--;
    k--;
}

}


/* 
MERGE SORTED ARRAY (LeetCode 88)

Idea:

* nums1 has extra space at the end.
* Merge from BACK, not front.
* This avoids shifting elements.

Pointers:
i = m - 1      // last valid element in nums1
j = n - 1      // last element in nums2
k = m + n - 1  // last position in nums1

Algorithm:

1. Compare nums1[i] and nums2[j].
2. Put the larger element at nums1[k].
3. Move the corresponding pointer (i or j).
4. Decrement k.
5. Repeat until one array is exhausted.

Code Logic:

while(i >= 0 && j >= 0)
{
if(nums1[i] > nums2[j])
nums1[k--] = nums1[i--];
else
nums1[k--] = nums2[j--];
}

while(j >= 0)
{
nums1[k--] = nums2[j--];
}

Why only copy remaining nums2?

* If nums2 finishes first (j == -1):
  Remaining nums1 elements are already in correct positions.
* If nums1 finishes first (i == -1):
  Remaining nums2 elements must be copied.

Memory Trick:
i -> end of nums1
j -> end of nums2
k -> last slot of nums1

Take BIGGER(i, j)
Place at k
Move k left

Complexity:
Time  = O(m + n)
Space = O(1)

Common Bug:
Wrong:
nums1[k] = nums1[k];

Correct:
nums1[k] = nums1[i];

*/