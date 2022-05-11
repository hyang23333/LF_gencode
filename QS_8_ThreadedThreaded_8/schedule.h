/* Auto-generated schedule */
// The static schedules
static const inst_t s1_w0[] = {
    {.inst='w', .op=0}, // Wait for semaphore 0.
    {.inst='e', .op=8}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='w', .op=2}, // Wait for semaphore 2.
    {.inst='w', .op=7}, // Wait for semaphore 7.
    {.inst='w', .op=6}, // Wait for semaphore 6.
    {.inst='w', .op=3}, // Wait for semaphore 3.
    {.inst='w', .op=1}, // Wait for semaphore 1.
    {.inst='w', .op=4}, // Wait for semaphore 4.
    {.inst='w', .op=5}, // Wait for semaphore 5.
    {.inst='e', .op=9}, // Execute reaction_0 of ThreadedThreaded.b.
    {.inst='s', .op=0}
};
static const inst_t s1_w1[] = {
    {.inst='w', .op=8}, // Wait for semaphore 8.
    {.inst='e', .op=5}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=5}, // Notify semaphore 5.
    {.inst='s', .op=0}
};
static const inst_t s1_w2[] = {
    {.inst='w', .op=9}, // Wait for semaphore 9.
    {.inst='e', .op=3}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=3}, // Notify semaphore 3.
    {.inst='s', .op=0}
};
static const inst_t s1_w3[] = {
    {.inst='w', .op=10}, // Wait for semaphore 10.
    {.inst='e', .op=7}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=7}, // Notify semaphore 7.
    {.inst='s', .op=0}
};
static const inst_t s1_w4[] = {
    {.inst='w', .op=11}, // Wait for semaphore 11.
    {.inst='e', .op=4}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=4}, // Notify semaphore 4.
    {.inst='s', .op=0}
};
static const inst_t s1_w5[] = {
    {.inst='w', .op=12}, // Wait for semaphore 12.
    {.inst='e', .op=2}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=2}, // Notify semaphore 2.
    {.inst='s', .op=0}
};
static const inst_t s1_w6[] = {
    {.inst='w', .op=13}, // Wait for semaphore 13.
    {.inst='e', .op=6}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=6}, // Notify semaphore 6.
    {.inst='s', .op=0}
};
static const inst_t s1_w7[] = {
    {.inst='e', .op=0}, // Execute reaction_0 of ThreadedThreaded.a.
    {.inst='n', .op=8}, // Notify semaphore 8.
    {.inst='n', .op=10}, // Notify semaphore 10.
    {.inst='n', .op=13}, // Notify semaphore 13.
    {.inst='n', .op=0}, // Notify semaphore 0.
    {.inst='n', .op=11}, // Notify semaphore 11.
    {.inst='n', .op=9}, // Notify semaphore 9.
    {.inst='n', .op=12}, // Notify semaphore 12.
    {.inst='e', .op=1}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=1}, // Notify semaphore 1.
    {.inst='s', .op=0}
};
static const inst_t* s1[] = {
    s1_w0,
    s1_w1,
    s1_w2,
    s1_w3,
    s1_w4,
    s1_w5,
    s1_w6,
    s1_w7
};
static const inst_t** static_schedules[] = { s1 };
static const uint32_t s1_length[] = {
    11,
    4,
    4,
    4,
    4,
    4,
    4,
    11
};
static const uint32_t* schedule_lengths[] = { s1_length };
// The total number of reactions
static const int reaction_count = 10;
// The number of semaphores needed
static const int num_semaphores = 14;
