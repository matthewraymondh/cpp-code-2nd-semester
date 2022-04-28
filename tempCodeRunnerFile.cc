 int i;
    int max = arr_num[0];
    for (i = 1; i < n; i++)
    {
        if (arr_num[i] > max)
        {
            max = arr_num[i];
        }
    }
    return max;