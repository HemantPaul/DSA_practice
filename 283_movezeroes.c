void moveZeroes(int* nums, int numsSize) {
    int j = 0;  // Position for next non-zero element

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            if (i != j) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            j++;
        }
    }
}