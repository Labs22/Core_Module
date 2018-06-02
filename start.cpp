struct s0 {
    signed char[8] pad8;
    int64_t f8;
};

void sub_140035160(int64_t rcx, struct s0** rdx);

int32_t g1400d8048 = -1;

int64_t TlsSetValue;

void sub_140036830(struct s0** rcx, struct s0** rdx);

int64_t StartAddress(struct s0** rcx) {
    struct s0** rdx2;
    int32_t ecx3;
    struct s0* rax4;

    rdx2 = reinterpret_cast<struct s0**>(0x140035390);
    sub_140035160(0x1400da780, 0x140035390);
    ecx3 = g1400d8048;
    if (ecx3 != -1) {
        rdx2 = rcx;
        TlsSetValue();
    }
    rax4 = *rcx;
    rax4->f8(rcx, rdx2);
    sub_140036830(rcx, rdx2);
    return 0;
}

int64_t fun_14009a170() {
    return 0x140036a64;
}
