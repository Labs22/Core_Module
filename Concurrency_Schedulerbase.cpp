
struct s0 {
    signed char[344] pad344;
    int32_t f344;
};

/* ?GetNumberOfBoundContexts@SchedulerBase@details@Concurrency@@IEBAKXZ */
int64_t GetNumberOfBoundContexts_SchedulerBase_details_Concurrency_IEBAKXZ(struct s0* rcx) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = rcx->f344;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    return rax2;
}
