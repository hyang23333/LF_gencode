/* Auto-generated schedule */
// The static schedules
static const inst_t s1_w0[] = {
    {.inst='e', .op=0}, // Execute reaction_0 of ThreadedThreaded.a.
    {.inst='n', .op=0}, // Notify semaphore 0.
    {.inst='e', .op=1}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='n', .op=1}, // Notify semaphore 1.
    {.inst='s', .op=0}
};
static const inst_t s1_w1[] = {
    {.inst='w', .op=0}, // Wait for semaphore 0.
    {.inst='e', .op=2}, // Execute reaction_0 of ThreadedThreaded.t.
    {.inst='w', .op=1}, // Wait for semaphore 1.
    {.inst='e', .op=3}, // Execute reaction_0 of ThreadedThreaded.b.
    {.inst='s', .op=0}
};
static const inst_t* s1[] = {
    s1_w0,
    s1_w1
};
static const inst_t** static_schedules[] = { s1 };
static const uint32_t s1_length[] = {
    5,
    5
};
static const uint32_t* schedule_lengths[] = { s1_length };
// The total number of reactions
static const int reaction_count = 4;
// The number of semaphores needed
static const int num_semaphores = 2;
