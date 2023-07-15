int maxConsecutiveOnes(int N)
{
    int cnt = 0;
    int maxy = 0;
    while (N)
    {
        int temp = N & 1;
        N = N / 2;
        if (temp == 1)
        {
            cnt++;
        }
        else
        {
            maxy = max(maxy, cnt);
            cnt = 0;
        }
    }
    maxy = max(maxy, cnt);
    return maxy;
}