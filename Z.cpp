
int snt(int a)
{
    if(a == 0 || a == 1)
    {
        return 0;
    }
    for(int i = 2; i <= sqrt(a); i ++)
    {
        if(a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}