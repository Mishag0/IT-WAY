void char_register(char *ch, int fl){
    if (fl == 1 && *ch >= 97)*ch -= 32;
    if (fl == 0 && (*ch >= 65 && *ch <= 90))*ch += 32;
}