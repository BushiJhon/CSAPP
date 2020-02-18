bool is_little_endian()
{
    int a = 1;
    int *b = &a;
    int c = *b;
    if(c == a){
        //little_endian
        return true;
    }else{
        //large_endian
        return false;
    }
}