init:
    ldx #$00
    txa
    txy

    jmp _entry  ; Jump into C land
    jmp $       ; Once C land is finished