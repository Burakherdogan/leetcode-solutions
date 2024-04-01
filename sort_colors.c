#include <stdio.h>
void sort_colors();

int main(){
    // 0,1,2,3 etc. are colors
    // Example
    int nums[] = {2,0,2,1,1,0};
    sort_colors(nums, 6);
    for(int i=0; i<=5;i++)
        printf("%d",*(nums+i));
    return 0;
}
/// @brief ///////////////////////
/// @param nums 
/// @param numsSize 
void sort_colors(int* nums, int numsSize) {
    // Insertion sort
    for(int i = 1; i < numsSize; i++) {
        int key = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
}