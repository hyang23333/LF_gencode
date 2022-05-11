/* Auto-generated schedule */
// The static schedules
static const inst_t s1_w0[] = {
    {.inst='e', .op=0}, // Execute reaction_0 of ThreadedThreaded.a.
    {.inst='n', .op=0}, // Notify semaphore 0.
    {.inst='n', .op=2}, // Notify semaphore 2.
    {.inst='n', .op=9}, // Notify semaphore 9.
    {.inst='n', .op=8}, // Notify semaphore 8.
    {.inst='n', .op=1}, // Notify semaphore 1.
    {.inst='e', .op=2}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=4}, // Notify semaphore 4.
    {.inst='s', .op=0}
};
static const inst_t s1_w1[] = {
    {.inst='w', .op=0}, // Wait for semaphore 0.
    {.inst='e', .op=3}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=5}, // Notify semaphore 5.
    {.inst='s', .op=0}
};
static const inst_t s1_w2[] = {
    {.inst='w', .op=1}, // Wait for semaphore 1.
    {.inst='e', .op=5}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=6}, // Notify semaphore 6.
    {.inst='s', .op=0}
};
static const inst_t s1_w3[] = {
    {.inst='w', .op=2}, // Wait for semaphore 2.
    {.inst='e', .op=4}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='w', .op=3}, // Wait for semaphore 3.
    {.inst='w', .op=6}, // Wait for semaphore 6.
    {.inst='w', .op=4}, // Wait for semaphore 4.
    {.inst='w', .op=5}, // Wait for semaphore 5.
    {.inst='w', .op=7}, // Wait for semaphore 7.
    {.inst='e', .op=7}, // Execute reaction_0 of ThreadedThreaded.b.
    {.inst='s', .op=0}
};
static const inst_t s1_w4[] = {
    {.inst='w', .op=8}, // Wait for semaphore 8.
    {.inst='e', .op=1}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=3}, // Notify semaphore 3.
    {.inst='s', .op=0}
};
static const inst_t s1_w5[] = {
    {.inst='w', .op=9}, // Wait for semaphore 9.
    {.inst='e', .op=6}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=7}, // Notify semaphore 7.
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
    9,
    4,
    4,
    9,
    4,
    4
};
static const uint32_t* schedule_lengths[] = { s1_length };
// The total number of reactions
static const int reaction_count = 8;
// The number of semaphores needed
static const int num_semaphores = 10;
