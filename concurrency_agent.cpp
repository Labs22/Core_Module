struct s0 {
    signed char f0;
    signed char f1;
    signed char[6] pad8;
    uint64_t f8;
};

/* ??2@YAPEAX_K@Z */
int64_t _2_YAPEAX_K_Z(int64_t rcx);

unsigned char* sub_14002F180(int64_t rcx);

void sub_140004F20(void* rcx, unsigned char* rdx, uint64_t r8);

uint64_t sub_14001E6B0(int64_t rcx, void* rdx, uint64_t r8);

void sub_14000F270(uint64_t* rcx, uint64_t rdx, uint64_t r8);

/* ??3@YAXPEAX@Z */
void _3_YAXPEAX_Z(int64_t rcx, uint64_t rdx, uint64_t r8);

signed char sub_14001E8C0(uint64_t rcx, uint64_t rdx, uint64_t r8);

void __security_check_cookie();

/* ?done@agent@Concurrency@@IEAA_NXZ */
void done_agent_Concurrency_IEAA_NXZ(struct s0* rcx) {
    struct s0* rdi2;
    uint64_t rbx3;
    int64_t rax4;
    int64_t rbp5;
    uint64_t rax6;
    unsigned char* rax7;
    void* rsp8;
    int64_t v9;
    uint64_t r8_10;
    uint64_t rdx11;
    uint64_t rcx12;
    signed char al13;

    rdi2 = rcx;
    *reinterpret_cast<int32_t*>(&rbx3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
    if (!rcx->f8) {
        rax4 = _2_YAPEAX_K_Z(40);
        rbp5 = rax4;
        if (!rax4) {
            rax6 = 0;
        } else {
            rax7 = sub_14002F180(40);
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 96 - 8 + 8 - 8 + 8);
            *reinterpret_cast<unsigned char*>(&v9) = 0;
            if (*rax7) {
                rbx3 = 0xffffffffffffffff;
                do {
                    ++rbx3;
                } while (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax7) + rbx3));
            }
            r8_10 = rbx3;
            sub_140004F20(reinterpret_cast<int64_t>(rsp8) + 56, rax7, r8_10);
            *reinterpret_cast<int32_t*>(&rbx3) = 1;
            rax6 = sub_14001E6B0(rbp5, reinterpret_cast<int64_t>(rsp8) - 8 + 8 + 56, r8_10);
        }
        rdx11 = rax6;
        sub_14000F270(&rdi2->f8, rdx11, r8_10);
        if (*reinterpret_cast<unsigned char*>(&rbx3) & 1 && !1) {
            _3_YAXPEAX_Z(v9, rdx11, r8_10);
        }
    }
    if (!rdi2->f1) {
        rcx12 = rdi2->f8;
        al13 = sub_14001E8C0(rcx12, rdx11, r8_10);
        if (!al13) {
            rdi2->f0 = 1;
        }
        rdi2->f1 = 1;
    }
    __security_check_cookie();
    return;
}

void fun_140099730() {
    goto _3_YAXPEAX_Z;
}

struct s1 {
    signed char[32] pad32;
    uint32_t f32;
};

void sub_140006110(int64_t rcx);

void fun_14009973c() {
    struct s1* rdx1;

    if (rdx1->f32 & 1) {
        rdx1->f32 = rdx1->f32 & 0xfffffffe;
        sub_140006110(reinterpret_cast<int64_t>(rdx1) + 56);
    }
    return;
}
