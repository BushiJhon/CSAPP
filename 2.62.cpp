bool int_shifts_are_arithmetic()
{
    int a = 0xFFFFFFFF;
    a = a >> 8;

    return !~a;
}
