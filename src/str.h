
#ifndef __STR__H__
    #define __STR__H__

    extern uchar  str_up_char(uchar ch);
    extern void   str_reset_buffer(uchar *buf, uint bytes);
    extern uchar  str_is_num(uchar Char);
    extern bit    str_is_hex(char byte);
    extern bit    str_cmp(uchar *ptr1, uchar *ptr2);
    extern uchar  str_is_print(uchar ch);

#endif

