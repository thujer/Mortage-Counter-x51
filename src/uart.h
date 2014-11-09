
#ifndef __UART_H__

    #define __UART_H__

    #define uchar unsigned char
    #define uint  unsigned int
    #define ulong unsigned long
    
    extern bit         uart_ribuf;
    extern char idata  uart_rbyte;
    
    extern bit         uart_rb_overflow;
    
    extern void        uart_proc();
    extern void        uart_init(ulong cpu_xtal, uchar tact, ulong uart_speed);
    extern char        uart(char c);          // putchar compatible
    
    extern void        uart_disable();
    extern void        uart_enable();

    //extern uchar xdata  uart_debug_ix;
    //extern char  xdata  uart_debug_buf[100];

#endif

