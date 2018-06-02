
struct s0 {
    signed char[192] pad192;
    int32_t f192;
};

/* ?GetExecutionResourceId@VirtualProcessor@details@Concurrency@@QEBAIXZ */
int64_t GetExecutionResourceId_VirtualProcessor_details_Concurrency_QEBAIXZ(struct s0* rcx) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = rcx->f192;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    return rax2;
}
