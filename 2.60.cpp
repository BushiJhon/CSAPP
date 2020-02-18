unsigned replace_byte(unsigned x, unsigned char b, int i)
{
    i = i << 3;

    unsigned a = 0xFF;
    a = a << i;

    unsigned B = b;
    B = B << i;

    x = x & (~a);
    x = x | B;

    return x;
}