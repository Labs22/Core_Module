
struct s0 {
    int64_t f0;
    int64_t f8;
    signed char f16;
    signed char[7] pad24;
    signed char f24;
    signed char[95] pad120;
    int64_t f120;
    int64_t f128;
    signed char[16] pad152;
    signed char f152;
};

struct s1 {
    signed char f0;
    signed char[15] pad16;
    int64_t f16;
    int64_t f24;
};

void sub_140004DF0();

void sub_14001FC00(int64_t rcx);

int64_t sub_140021580(int64_t* rcx);

int64_t _Mtx_init;

/*
 * ?_Throw_C_error@std@@YAXH@Z
 * void __cdecl std::_Throw_C_error(int)
 */
int64_t _Throw_C_error_std_YAXH_Z;

/* ??0?$target_block@V?$multi_link_registry@V?$ISource@_K@Concurrency@@@Concurrency@@V?$ordered_message_processor@_K@2@@Concurrency@@QEAA@XZ */
struct s0* _0_target_block_V_multi_link_registry_V_ISource__K_Concurrency_Concurrency_V_ordered_message_processor__K_2_Concurrency_QEAA_XZ(struct s0* rcx) {
    struct s1* rcx2;
    int64_t rax3;
    int32_t eax4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rcx7;

    rcx->f0 = 0x1400a56d8;
    rcx->f8 = 0x1400a5728;
    rcx->f16 = 0;
    rcx2 = reinterpret_cast<struct s1*>(&rcx->f24);
    rcx2->f24 = 15;
    rcx2->f16 = 0;
    rcx2->f0 = 0;
    sub_140004DF0();
    sub_14001FC00(reinterpret_cast<int64_t>(rcx) + 56);
    rcx->f120 = 0;
    rcx->f128 = 0;
    rax3 = sub_140021580(&rcx->f120);
    rcx->f120 = rax3;
    eax4 = reinterpret_cast<int32_t>(_Mtx_init(&rcx->pad152, 2));
    if (eax4) {
        *reinterpret_cast<int32_t*>(&rcx5) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        _Throw_C_error_std_YAXH_Z(rcx5, 2);
    }
    eax6 = reinterpret_cast<int32_t>(_Mtx_init(reinterpret_cast<int64_t>(rcx) + 0x90, 2));
    if (eax6) {
        *reinterpret_cast<int32_t*>(&rcx7) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        _Throw_C_error_std_YAXH_Z(rcx7, 2);
    }
    rcx->f152 = 0;
    return rcx;
}

struct s2 {
    int64_t f0;
    int64_t f8;
};

struct s3 {
    signed char[64] pad64;
    struct s2* f64;
};

void fun_1400984c0() {
    struct s2* rcx1;
    struct s3* rdx2;

    rcx1 = rdx2->f64;
    rcx1->f8 = 0x1400b0e50;
    rcx1->f0 = 0x1400a56b0;
    return;
}

void fun_1400984cc() {
}

void fun_1400984dc() {
}
