// Code generated by the Lingua Franca compiler from:
// file://Users/yanghuang/Projects/cs267/lingua-franca/test/C/src/concurrent/ThreadedThreaded.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/concurrent/ThreadedThreaded"
#define LINGUA_FRANCA_TRACE
#include "ctarget/ctarget.h"
#include "core/threaded/reactor_threaded.c"
#include "core/threaded/scheduler.h"
#include "core/trace.c"
#include "core/mixed_radix.h"
int main(int argc, char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
// =============== START reactor class Source
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} source_out_t;
typedef struct {
    struct self_base_t base;
    
    int s;
    source_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} source_self_t;
#include "ctarget/set.h"
void sourcereaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    source_self_t* self = (source_self_t*)instance_args;
    source_out_t* out = &self->_lf_out;
    #pragma GCC diagnostic pop
    lf_set(out, self->s);
    self->s++;
        
}
#include "ctarget/set_undef.h"
source_self_t* new_Source() {
    source_self_t* self = (source_self_t*)_lf_new_reactor(sizeof(source_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = sourcereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__t.last = NULL;
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    self->_lf__t.is_timer = true;
    return self;
}
// =============== END reactor class Source

// =============== START reactor class TakeTime
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} taketime_in_t;
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} taketime_out_t;
typedef struct {
    struct self_base_t base;
    
    
    taketime_in_t* _lf_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_in_width;
    // Default input (in case it does not get connected)
    taketime_in_t _lf_default__in;
    taketime_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__in;
    reaction_t* _lf__in_reactions[1];
} taketime_self_t;
#include "ctarget/set.h"
void taketimereaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    taketime_self_t* self = (taketime_self_t*)instance_args;
    taketime_in_t* in = self->_lf_in;
    int in_width = self->_lf_in_width;
    taketime_out_t* out = &self->_lf_out;
    #pragma GCC diagnostic pop
    struct timespec sleep_time = {(time_t) 0, (long)200000000};
    struct timespec remaining_time;
    nanosleep(&sleep_time, &remaining_time);
    int offset = 0;
    for (int i = 0; i < 100000000; i++) {
        offset++;
    }
    lf_set(out, in->value + offset);
        
}
#include "ctarget/set_undef.h"
taketime_self_t* new_TakeTime() {
    taketime_self_t* self = (taketime_self_t*)_lf_new_reactor(sizeof(taketime_self_t));
    // Set input by default to an always absent default input.
    self->_lf_in = &self->_lf_default__in;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = taketimereaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__in.last = NULL;
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    self->_lf__in.number_of_reactions = 1;
    self->_lf__in.element_size = sizeof(int);
    return self;
}
// =============== END reactor class TakeTime

// =============== START reactor class Destination
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} destination_in_t;
typedef struct {
    struct self_base_t base;
    int width;
    int s;
    // Multiport input array will be malloc'd later.
    destination_in_t** _lf_in;
    int _lf_in_width;
    // Default input (in case it does not get connected)
    destination_in_t _lf_default__in;
    reaction_t _lf__reaction_0;
    trigger_t _lf__in;
    reaction_t* _lf__in_reactions[1];
} destination_self_t;
#include "ctarget/set.h"
void destinationreaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    destination_self_t* self = (destination_self_t*)instance_args;
    destination_in_t** in = self->_lf_in;
    int in_width = self->_lf_in_width;
    #pragma GCC diagnostic pop
    int sum = 0;
    for (int i = 0; i < in_width; i++) {
                sum += in[i]->value;
            }
    printf("Sum of received: %d.\n", sum);
    if (sum != self->s) {
        printf("ERROR: Expected %d.\n", self->s);
        exit(1);
    }
    self->s += in_width;
        
}
#include "ctarget/set_undef.h"
destination_self_t* new_Destination() {
    destination_self_t* self = (destination_self_t*)_lf_new_reactor(sizeof(destination_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = destinationreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__in.last = NULL;
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    self->_lf__in.number_of_reactions = 1;
    self->_lf__in.element_size = sizeof(int);
    return self;
}
// =============== END reactor class Destination

// =============== START reactor class ThreadedThreaded
typedef struct {
    struct self_base_t base;
    int width;
} threadedthreaded_self_t;
threadedthreaded_self_t* new_ThreadedThreaded() {
    threadedthreaded_self_t* self = (threadedthreaded_self_t*)_lf_new_reactor(sizeof(threadedthreaded_self_t));
    
    return self;
}
// =============== END reactor class ThreadedThreaded

char* _lf_default_argv[] = { "ThreadedThreaded", "-o", "2", "sec" };
void _lf_set_default_command_line_options() {
        default_argc = 4;
        default_argv = _lf_default_argv;
}
// Array of pointers to timer triggers to be scheduled in _lf_initialize_timers().
trigger_t* _lf_timer_triggers[1];
int _lf_timer_triggers_size = 1;
// Array of pointers to shutdown triggers.
reaction_t** _lf_shutdown_reactions = NULL;
int _lf_shutdown_reactions_size = 0;
trigger_t* _lf_action_for_port(int port_id) {
        return NULL;
}
void _lf_initialize_trigger_objects() {
    // Initialize the _lf_clock
    lf_initialize_clock();
    // Initialize tracing
    start_trace("ThreadedThreaded.lft");
    // Create the array that will contain pointers to is_present fields to reset on each step.
    _lf_is_present_fields_size = 3;
    _lf_is_present_fields = (bool**)calloc(3, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(3, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    
    _lf_startup_reactions = (reaction_t**)calloc(0, sizeof(reaction_t*));
    _lf_startup_reactions_size = 0;
    int _lf_startup_reactions_count = 0;
    int _lf_shutdown_reactions_count = 0;
    int _lf_timer_triggers_count = 0;
    int _lf_tokens_with_ref_count_count = 0;
    threadedthreaded_self_t* threadedthreaded_self[1];
    source_self_t* threadedthreaded_a_self[1];
    taketime_self_t* threadedthreaded_t_self[2];
    destination_self_t* threadedthreaded_b_self[1];
    // ***** Start initializing ThreadedThreaded of class ThreadedThreaded
    threadedthreaded_self[0] = new_ThreadedThreaded();
    _lf_register_trace_event(threadedthreaded_self[0], NULL, trace_reactor, "ThreadedThreaded");
    int bank_index = 0;
    threadedthreaded_self[0]->width = 2;
    
    {
        // ***** Start initializing ThreadedThreaded.a of class Source
        threadedthreaded_a_self[0] = new_Source();
        _lf_register_trace_event(threadedthreaded_a_self[0], NULL, trace_reactor, "a");
        _lf_register_trace_event(threadedthreaded_a_self[0], &(threadedthreaded_a_self[0]->_lf__t), trace_trigger, "a.t");
        int bank_index = 0;
        // width of -2 indicates that it is not a multiport.
        threadedthreaded_a_self[0]->_lf_out_width = -2;
        { // For scoping
            static int _initial = 0;
            threadedthreaded_a_self[0]->s = _initial;
        } // End scoping.
        // Initializing timer ThreadedThreaded.a.t.
        threadedthreaded_a_self[0]->_lf__t.offset = 0;
        threadedthreaded_a_self[0]->_lf__t.period = MSEC(200);
        _lf_timer_triggers[_lf_timer_triggers_count++] = &threadedthreaded_a_self[0]->_lf__t;
        threadedthreaded_a_self[0]->_lf__t.mode = NULL;
        
        //***** End initializing ThreadedThreaded.a
    }
    // Reactor is a bank. Iterate over bank members.
    for (int threadedthreaded_t_i = 0; threadedthreaded_t_i < 2; threadedthreaded_t_i++) {
        // ***** Start initializing ThreadedThreaded.t of class TakeTime
        threadedthreaded_t_self[threadedthreaded_t_i] = new_TakeTime();
        _lf_register_trace_event(threadedthreaded_t_self[threadedthreaded_t_i], NULL, trace_reactor, "t");
        int bank_index = threadedthreaded_t_i;
        // width of -2 indicates that it is not a multiport.
        threadedthreaded_t_self[threadedthreaded_t_i]->_lf_out_width = -2;
        // width of -2 indicates that it is not a multiport.
        threadedthreaded_t_self[threadedthreaded_t_i]->_lf_in_width = -2;
        
        //***** End initializing ThreadedThreaded.t
    }
    {
        // ***** Start initializing ThreadedThreaded.b of class Destination
        threadedthreaded_b_self[0] = new_Destination();
        _lf_register_trace_event(threadedthreaded_b_self[0], NULL, trace_reactor, "b");
        int bank_index = 0;
        threadedthreaded_b_self[0]->width = threadedthreaded_self[0]->width;
        threadedthreaded_b_self[0]->_lf_in_width = 2;
        // Allocate memory for multiport inputs.
        threadedthreaded_b_self[0]->_lf_in = (destination_in_t**)_lf_allocate(
                2, sizeof(destination_in_t*),
                &threadedthreaded_b_self[0]->base.allocations); 
        // Set inputs by default to an always absent default input.
        for (int i = 0; i < 2; i++) {
            threadedthreaded_b_self[0]->_lf_in[i] = &threadedthreaded_b_self[0]->_lf_default__in;
        }
        { // For scoping
            static int _initial = 200000000;
            threadedthreaded_b_self[0]->s = _initial;
        } // End scoping.
        
        //***** End initializing ThreadedThreaded.b
    }
    //***** End initializing ThreadedThreaded
    
    // **** Start deferred initialize for ThreadedThreaded
    {
        
        
        
        // **** Start deferred initialize for ThreadedThreaded.a
        {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ThreadedThreaded.a.
            threadedthreaded_a_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            threadedthreaded_a_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &threadedthreaded_a_self[0]->base.allocations);
            threadedthreaded_a_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &threadedthreaded_a_self[0]->base.allocations);
            threadedthreaded_a_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &threadedthreaded_a_self[0]->base.allocations);
            {
                int count = 0;
                {
                    threadedthreaded_a_self[0]->_lf__reaction_0.output_produced[count++] = &threadedthreaded_a_self[0]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of ThreadedThreaded.a
            
        }
        // **** End of deferred initialize for ThreadedThreaded.a
        // **** Start deferred initialize for ThreadedThreaded.t
        // Reactor is a bank. Iterate over bank members.
        for (int threadedthreaded_t_i = 0; threadedthreaded_t_i < 2; threadedthreaded_t_i++) {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ThreadedThreaded.t.
            threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &threadedthreaded_t_self[threadedthreaded_t_i]->base.allocations);
            threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &threadedthreaded_t_self[threadedthreaded_t_i]->base.allocations);
            threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &threadedthreaded_t_self[threadedthreaded_t_i]->base.allocations);
            {
                int count = 0;
                {
                    threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.output_produced[count++] = &threadedthreaded_t_self[threadedthreaded_t_i]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of ThreadedThreaded.t
            
        }
        // **** End of deferred initialize for ThreadedThreaded.t
        // **** Start deferred initialize for ThreadedThreaded.b
        {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ThreadedThreaded.b.
            threadedthreaded_b_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 0 of ThreadedThreaded.b
            
        }
        // **** End of deferred initialize for ThreadedThreaded.b
    }
    // **** End of deferred initialize for ThreadedThreaded
    // **** Start non-nested deferred initialize for ThreadedThreaded
    
    
    
    // **** Start non-nested deferred initialize for ThreadedThreaded.a
    
    // For reference counting, set num_destinations for port ThreadedThreaded.a.out.
    // Iterate over range ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)].
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        int range_count = 0;
        threadedthreaded_a_self[src_runtime]->_lf_out.num_destinations = 2;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)].
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            int range_count = 0;
            // Reaction 0 of ThreadedThreaded.a triggers 2 downstream reactions
            // through port ThreadedThreaded.a.out.
            threadedthreaded_a_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 2;
            // For reaction 0 of ThreadedThreaded.a, allocate an
            // array of trigger pointers for downstream reactions through port ThreadedThreaded.a.out
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    2, sizeof(trigger_t*),
                    &threadedthreaded_a_self[src_runtime]->base.allocations); 
            threadedthreaded_a_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)] and ThreadedThreaded.t.in(0,1).
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            // Iterate over range ThreadedThreaded.t.in(0,1).
            {
                int dst_runtime = 0; // Runtime index.
                int dst_channel = 0; // Channel index.
                int dst_bank = 0; // Bank index.
                int range_count = 0;
                // Point to destination port ThreadedThreaded.t.in's trigger struct.
                threadedthreaded_a_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &threadedthreaded_t_self[dst_runtime]->_lf__in;
            }
        }
        // Iterate over ranges ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)] and ThreadedThreaded.t.in(1,1).
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            // Iterate over range ThreadedThreaded.t.in(1,1).
            {
                int dst_runtime = 1; // Runtime index.
                int dst_channel = 0; // Channel index.
                int dst_bank = 1; // Bank index.
                int range_count = 0;
                // Point to destination port ThreadedThreaded.t.in's trigger struct.
                threadedthreaded_a_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][1] = &threadedthreaded_t_self[dst_runtime]->_lf__in;
            }
        }
    }
    
    // **** End of non-nested deferred initialize for ThreadedThreaded.a
    // **** Start non-nested deferred initialize for ThreadedThreaded.t
    
    // For reference counting, set num_destinations for port ThreadedThreaded.t.out.
    // Iterate over range ThreadedThreaded.t.out(0,2)->[ThreadedThreaded.b.in(0,2)].
    {
        int range_start[] =  { 0, 0 };
        int range_radixes[] = { 1, 2 };
        int permutation[] = { 0, 1 };
        mixed_radix_int_t range_mr = {
            2,
            range_start,
            range_radixes,
            permutation
        };
        for (int range_count = 0; range_count < 0 + 2; range_count++) {
            int src_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
            int src_channel = range_mr.digits[0]; // Channel index.
            int src_bank = range_mr.digits[1]; // Bank index.
            threadedthreaded_t_self[src_runtime]->_lf_out.num_destinations = 1;
            mixed_radix_incr(&range_mr);
        }
    }
    {
        int triggers_index[2] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range ThreadedThreaded.t.out(0,2)->[ThreadedThreaded.b.in(0,2)].
        {
            int range_start[] =  { 0, 0 };
            int range_radixes[] = { 1, 2 };
            int permutation[] = { 0, 1 };
            mixed_radix_int_t range_mr = {
                2,
                range_start,
                range_radixes,
                permutation
            };
            for (int range_count = 0; range_count < 0 + 2; range_count++) {
                int src_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                int src_channel = range_mr.digits[0]; // Channel index.
                int src_bank = range_mr.digits[1]; // Bank index.
                // Reaction 0 of ThreadedThreaded.t triggers 1 downstream reactions
                // through port ThreadedThreaded.t.out.
                threadedthreaded_t_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                // For reaction 0 of ThreadedThreaded.t, allocate an
                // array of trigger pointers for downstream reactions through port ThreadedThreaded.t.out
                trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                        1, sizeof(trigger_t*),
                        &threadedthreaded_t_self[src_runtime]->base.allocations); 
                threadedthreaded_t_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                mixed_radix_incr(&range_mr);
            }
        }
        for (int i = 0; i < 2; i++) triggers_index[i] = 0;
        // Iterate over ranges ThreadedThreaded.t.out(0,2)->[ThreadedThreaded.b.in(0,2)] and ThreadedThreaded.b.in(0,2).
        {
            int src_start[] =  { 0, 0 };
            int src_value[] =  { 0, 0 }; // Will be incremented.
            int src_radixes[] = { 1, 2 };
            int src_permutation[] = { 0, 1 };
            mixed_radix_int_t src_range_mr = {
                2,
                src_value,
                src_radixes,
                src_permutation
            };
            // Iterate over range ThreadedThreaded.b.in(0,2).
            {
                int range_start[] =  { 0, 0 };
                int range_radixes[] = { 2, 1 };
                int permutation[] = { 0, 1 };
                mixed_radix_int_t range_mr = {
                    2,
                    range_start,
                    range_radixes,
                    permutation
                };
                for (int range_count = 0; range_count < 0 + 2; range_count++) {
                    int dst_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                    int dst_channel = range_mr.digits[0]; // Channel index.
                    int dst_bank = range_mr.digits[1]; // Bank index.
                    int src_runtime = mixed_radix_parent(&src_range_mr, 1); // Runtime index.
                    int src_channel = src_range_mr.digits[0]; // Channel index.
                    int src_bank = src_range_mr.digits[1]; // Bank index.
                    // Point to destination port ThreadedThreaded.b.in's trigger struct.
                    threadedthreaded_t_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &threadedthreaded_b_self[dst_runtime]->_lf__in;
                    mixed_radix_incr(&src_range_mr);
                    if (mixed_radix_to_int(&src_range_mr) >= 0 + 2) {
                        // Start over with the source.
                        for (int i = 0; i < src_range_mr.size; i++) {
                            src_range_mr.digits[i] = src_start[i];
                        }
                    }
                    mixed_radix_incr(&range_mr);
                }
            }
        }
    }
    
    // **** End of non-nested deferred initialize for ThreadedThreaded.t
    // **** Start non-nested deferred initialize for ThreadedThreaded.b
    
    
    
    
    // **** End of non-nested deferred initialize for ThreadedThreaded.b
    // **** End of non-nested deferred initialize for ThreadedThreaded
    // Connect inputs and outputs for reactor ThreadedThreaded.
    // Connect inputs and outputs for reactor ThreadedThreaded.a.
    // Connect ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)] to port ThreadedThreaded.t.in(0,1)
    // Iterate over ranges ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)] and ThreadedThreaded.t.in(0,1).
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        // Iterate over range ThreadedThreaded.t.in(0,1).
        {
            int dst_runtime = 0; // Runtime index.
            int dst_channel = 0; // Channel index.
            int dst_bank = 0; // Bank index.
            int range_count = 0;
            threadedthreaded_t_self[dst_runtime]->_lf_in = (taketime_in_t*)&threadedthreaded_a_self[src_runtime]->_lf_out;
        }
    }
    // Connect ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)] to port ThreadedThreaded.t.in(1,1)
    // Iterate over ranges ThreadedThreaded.a.out(0,1)->[ThreadedThreaded.t.in(0,1), ThreadedThreaded.t.in(1,1)] and ThreadedThreaded.t.in(1,1).
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        // Iterate over range ThreadedThreaded.t.in(1,1).
        {
            int dst_runtime = 1; // Runtime index.
            int dst_channel = 0; // Channel index.
            int dst_bank = 1; // Bank index.
            int range_count = 0;
            threadedthreaded_t_self[dst_runtime]->_lf_in = (taketime_in_t*)&threadedthreaded_a_self[src_runtime]->_lf_out;
        }
    }
    // Connect inputs and outputs for reactor ThreadedThreaded.t.
    // Connect ThreadedThreaded.t.out(0,2)->[ThreadedThreaded.b.in(0,2)] to port ThreadedThreaded.b.in(0,2)
    // Iterate over ranges ThreadedThreaded.t.out(0,2)->[ThreadedThreaded.b.in(0,2)] and ThreadedThreaded.b.in(0,2).
    {
        int src_start[] =  { 0, 0 };
        int src_value[] =  { 0, 0 }; // Will be incremented.
        int src_radixes[] = { 1, 2 };
        int src_permutation[] = { 0, 1 };
        mixed_radix_int_t src_range_mr = {
            2,
            src_value,
            src_radixes,
            src_permutation
        };
        // Iterate over range ThreadedThreaded.b.in(0,2).
        {
            int range_start[] =  { 0, 0 };
            int range_radixes[] = { 2, 1 };
            int permutation[] = { 0, 1 };
            mixed_radix_int_t range_mr = {
                2,
                range_start,
                range_radixes,
                permutation
            };
            for (int range_count = 0; range_count < 0 + 2; range_count++) {
                int dst_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                int dst_channel = range_mr.digits[0]; // Channel index.
                int dst_bank = range_mr.digits[1]; // Bank index.
                int src_runtime = mixed_radix_parent(&src_range_mr, 1); // Runtime index.
                int src_channel = src_range_mr.digits[0]; // Channel index.
                int src_bank = src_range_mr.digits[1]; // Bank index.
                threadedthreaded_b_self[dst_runtime]->_lf_in[dst_channel] = (destination_in_t*)&threadedthreaded_t_self[src_runtime]->_lf_out;
                mixed_radix_incr(&src_range_mr);
                if (mixed_radix_to_int(&src_range_mr) >= 0 + 2) {
                    // Start over with the source.
                    for (int i = 0; i < src_range_mr.size; i++) {
                        src_range_mr.digits[i] = src_start[i];
                    }
                }
                mixed_radix_incr(&range_mr);
            }
        }
    }
    // Connect inputs and outputs for reactor ThreadedThreaded.b.
    {
    }
    // Reactor is a bank. Iterate over bank members.
    for (int threadedthreaded_t_i = 0; threadedthreaded_t_i < 2; threadedthreaded_t_i++) {
    }
    {
    }
    {
        int count = 0;
        {
            // Add port ThreadedThreaded.a.out to array of is_present fields.
            _lf_is_present_fields[0 + count] = &threadedthreaded_a_self[0]->_lf_out.is_present;
            count++;
        }
    }
    {
        int count = 0;
        // Reactor is a bank. Iterate over bank members.
        for (int threadedthreaded_t_i = 0; threadedthreaded_t_i < 2; threadedthreaded_t_i++) {
            // Add port ThreadedThreaded.t.out to array of is_present fields.
            _lf_is_present_fields[1 + count] = &threadedthreaded_t_self[threadedthreaded_t_i]->_lf_out.is_present;
            count++;
        }
    }
    
    // Set reaction priorities for ReactorInstance ThreadedThreaded
    {
        
        // Set reaction priorities for ReactorInstance ThreadedThreaded.a
        {
            //levels.size() == 1
            threadedthreaded_a_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedthreaded_a_self[0]->_lf__reaction_0.index = 0x7fffffffffff0000LL;
        }
        
        
        // Set reaction priorities for ReactorInstance ThreadedThreaded.t
        // Reactor is a bank. Iterate over bank members.
        for (int threadedthreaded_t_i = 0; threadedthreaded_t_i < 2; threadedthreaded_t_i++) {
            //levels.size() == 1
            threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedthreaded_t_self[threadedthreaded_t_i]->_lf__reaction_0.index = 0x7fffffffffff0001LL;
        }
        
        
        // Set reaction priorities for ReactorInstance ThreadedThreaded.b
        {
            //levels.size() == 1
            threadedthreaded_b_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedthreaded_b_self[0]->_lf__reaction_0.index = 0x7fffffffffff0002LL;
        }
        
    }
    
    // Initialize the scheduler
    size_t num_reactions_per_level[3] = 
        {2, 2, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 3,
    };
    lf_sched_init(
        (size_t)_lf_number_of_workers,
        &sched_params
    );
}
void _lf_trigger_startup_reactions() {

}
void _lf_initialize_timers() {
    for (int i = 0; i < _lf_timer_triggers_size; i++) {
        if (_lf_timer_triggers[i] != NULL) {
            _lf_initialize_timer(_lf_timer_triggers[i]);
        }
    }
}
void logical_tag_complete(tag_t tag_to_send) {

}
bool _lf_trigger_shutdown_reactions() {

    // Return true if there are shutdown reactions.
    return (_lf_shutdown_reactions_size > 0);
}
void terminate_execution() {}
