int product_int(int x, int y)
{
    int newX = x&0xFF;
    int newY = y&~(0xFF);
    int z = newX | newY;
    return z;
}