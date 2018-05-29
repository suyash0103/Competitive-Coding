int l = 1, h = A;
    while(l <= h)
    {
        int mid = ceil((l + h) / 2);
        // long long int x = mid * mid;
        if(mid == A / mid)
            return mid;
        else if(mid > A / mid)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l - 1;
