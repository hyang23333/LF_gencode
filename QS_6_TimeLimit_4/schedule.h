/* Auto-generated schedule */
// The static schedules
static const inst_t s1_w0[] = {
    {.inst='s', .op=0}
};
static const inst_t s1_w1[] = {
    {.inst='e', .op=1}, // Execute reaction_0 of TimeLimit.c.
    {.inst='n', .op=0}, // Notify semaphore 0.
    {.inst='e', .op=0}, // Execute reaction_0 of TimeLimit.
    {.inst='s', .op=0}
};
static const inst_t s1_w2[] = {
    {.inst='s', .op=0}
};
static const inst_t s1_w3[] = {
    {.inst='s', .op=0}
};
static const inst_t s1_w4[] = {
    {.inst='s', .op=0}
};
static const inst_t s1_w5[] = {
    {.inst='w', .op=0}, // Wait for semaphore 0.
    {.inst='e', .op=2}, // Execute reaction_0 of TimeLimit.d.
    {.inst='e', .op=3}, // Execute reaction_1 of TimeLimit.d.
    {.inst='s', .op=0}
};
static const inst_t* s1[] = {
    s1_w0,
    s1_w1,
    s1_w2,
    s1_w3,
    s1_w4,
    s1_w5
};
static const inst_t** static_schedules[] = { s1 };
static const uint32_t s1_length[] = {
    1,
    4,
    1,
    1,
    1,
    4
};
static const uint32_t* schedule_lengths[] = { s1_length };
// The total number of reactions
static const int reaction_count = 4;
// The number of semaphores needed
static const int num_semaphores = 1;
