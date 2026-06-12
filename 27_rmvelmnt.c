int removeElement(int* nums, int numsSize, int val) {
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}

























/* # Remove Element (Simple Revision Note)

### What is the problem?

Remove all occurrences of `val` from the array and return how many elements are left.

Example:

```c
nums = [3,2,2,3]
val = 3
```

After removing 3:

```c
[2,2]
```

Return:

```c
2
```

---

### Simple Idea

Use two variables:

```c
i = checks every element
k = where the next good element should go
```

Whenever you find a number that is NOT `val`:

```c
nums[k] = nums[i];
k++;
```

Meaning:

* Keep the good number.
* Move it to the front.
* Move `k` to the next empty spot.

---

### Code

```c
int removeElement(int* nums, int numsSize, int val)
{
    int k = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
```

---

### Remember

✅ `i` = searching pointer

✅ `k` = storing pointer

✅ If number is good → keep it

✅ If number equals `val` → skip it

✅ Return `k`

---

### Very Important

❌ Wrong:

```c
sizeof(nums)
```

Because `nums` is a pointer.

✅ Correct:

```c
numsSize
```

Always use `numsSize` for loop length.

---

### Memory Trick

**"Scan with `i`, store with `k`."**

or

**"Keep good elements, skip bad elements."**
 */