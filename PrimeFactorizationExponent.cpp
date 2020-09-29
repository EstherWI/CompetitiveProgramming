int get_powers(int n, int p)
{
    int res = 0;
    for (int power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}
