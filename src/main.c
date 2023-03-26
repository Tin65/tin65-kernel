#define WRITE(addr, data) *(char*)(addr) = data
#define READ(addr)        *(char*)(addr)

#define UART_OUTC_ADDR 0x0002

void uart_printc(char c) {
    WRITE(UART_OUTC_ADDR, c);
}

// This is the function called once the boot.asm is finished doing
// what it wants to do
void entry() {
    return;
}