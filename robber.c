int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int rob(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    if (numsSize == 1)
        return nums[0];
    if (numsSize == 2)
        return max(nums[0], nums[1]);
    int *dp = (int *)malloc(sizeof(int) * numsSize);
    int i = 2;

    dp[0] = nums[0];
    dp[1] = max(dp[0], nums[1]);

    while (i < numsSize)
    {
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        i++;
    }
    return (dp[i - 1]);
}