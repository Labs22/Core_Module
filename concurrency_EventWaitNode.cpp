
struct s1 {
    signed char[8] pad8;
    int64_t f8;
};

struct s0 {
    signed char[8] pad8;
    struct s1** f8;
};

/* ?Reset@EventWaitNode@details@Concurrency@@QEAA_NXZ */
void Reset_EventWaitNode_details_Concurrency_QEAA_NXZ(struct s0* rcx) {
    goto (*rcx->f8)->f8;
}
