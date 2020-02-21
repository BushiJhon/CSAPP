//ÓÃÂß¼­ÓÒÒÆÀ´Íê³ÉËãÊõÓÒÒÆ
int sra(int x, int k)
{
    int xsrl = (unsigned) x >> k;

    int position_w_1_k = sizeof(int) << 3;
    position_w_1_k = position_w_1_k - 1 - k;

    int mask_w_1_k = 1 << position_w_1_k;

    int w_1_k = xsrl & mask_w_1_k;

    int mask_right = mask_w_1_k-1;

    int right = xsrl & mask_right;

    int left = ~w_1_k - (mask_w_1_k-1) + mask_w_1_k;

    return left | right;
}

//ÓÃËãÊõÓÒÒÆÍê³ÉÂß¼­ÓÒÒÆ
unsigned srl(unsigned x, int k)
{
    unsigned xsra = (int) x >> k;

    unsigned position_w_k = sizeof(unsigned) << 3;
    position_w_k = position_w_k - k;

    unsigned mask_w_k = 1 << position_w_k;
    unsigned mask = mask_w_k - 1;

    return xsra & mask;
}
