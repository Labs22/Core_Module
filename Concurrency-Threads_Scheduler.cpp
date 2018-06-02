
struct s0 {
    int64_t f0;
    int64_t f8;
    signed char[328] pad344;
    int32_t f344;
};

void sub_140092FB0();

void sub_140090AB0(int64_t rcx);

/* ??0ThreadScheduler@details@Concurrency@@QEAA@AEBVSchedulerPolicy@2@@Z */
struct s0* _0ThreadScheduler_details_Concurrency_QEAA_AEBVSchedulerPolicy_2_Z(struct s0* rcx) {
    sub_140092FB0();
    rcx->f0 = 0x1400b4f50;
    rcx->f8 = 0x1400b5390;
    rcx->f344 = 0;
    sub_140090AB0(reinterpret_cast<int64_t>(rcx) + 0x160);
    return rcx;
}

void fun_14009f720() {
}
