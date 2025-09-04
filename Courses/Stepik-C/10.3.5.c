void char_cesar(char *ch, int shift)
{
    *ch = (*ch + shift);
    if (*ch > 122) *ch = *ch % 123 + 97;
}