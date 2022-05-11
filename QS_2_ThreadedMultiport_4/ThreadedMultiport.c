// Code generated by the Lingua Franca compiler from:
// file://Users/shaokai/git/lingua-franca/test/C/src/concurrent/ThreadedMultiport.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/Users/shaokai/git/lingua-franca/test/C/src-gen/concurrent/ThreadedMultiport"
#include "ctarget/ctarget.h"
#include "core/threaded/reactor_threaded.c"
#include "core/threaded/scheduler.h"
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
    int width;
    int s;
    // Array of output ports.
    source_out_t* _lf_out;
    int _lf_out_width;
    // An array of pointers to the individual ports. Useful
    // for the lf_set macros to work out-of-the-box for
    // multiports in the body of reactions because their 
    // value can be accessed via a -> operator (e.g.,foo[i]->value).
    // So we have to handle multiports specially here a construct that
    // array of pointers.
    source_out_t** _lf_out_pointers;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} source_self_t;
#include "ctarget/set.h"
void sourcereaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    source_self_t* self = (source_self_t*)instance_args;
    int out_width = self->_lf_out_width;
    source_out_t** out = self->_lf_out_pointers;
    #pragma GCC diagnostic pop
    for(int i = 0; i < out_width; i++) {
        lf_set(out[i], self->s);
    }
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

// =============== START reactor class Computation
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} computation_in_t;
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} computation_out_t;
typedef struct {
    struct self_base_t base;
    int iterations;
    
    computation_in_t* _lf_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_in_width;
    // Default input (in case it does not get connected)
    computation_in_t _lf_default__in;
    computation_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__in;
    reaction_t* _lf__in_reactions[1];
} computation_self_t;
#include "ctarget/set.h"
void computationreaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    computation_self_t* self = (computation_self_t*)instance_args;
    computation_in_t* in = self->_lf_in;
    int in_width = self->_lf_in_width;
    computation_out_t* out = &self->_lf_out;
    #pragma GCC diagnostic pop
    // struct timespec sleep_time = {(time_t) 0, (long)200000000};
    // struct timespec remaining_time;
    // nanosleep(&sleep_time, &remaining_time);
    int offset = 0;
    for (int i = 0; i < self->iterations; i++) {
        offset++;
    }
    lf_set(out, in->value + offset);
        
}
#include "ctarget/set_undef.h"
computation_self_t* new_Computation() {
    computation_self_t* self = (computation_self_t*)_lf_new_reactor(sizeof(computation_self_t));
    // Set input by default to an always absent default input.
    self->_lf_in = &self->_lf_default__in;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = computationreaction_function_0;
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
// =============== END reactor class Computation

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
    int iterations;
    int s;
    // Multiport input array will be malloc'd later.
    destination_in_t** _lf_in;
    int _lf_in_width;
    // Default input (in case it does not get connected)
    destination_in_t _lf_default__in;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
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
    int expected = self->iterations * self->width + self->s;
            int sum = 0;
            for (int i = 0; i < in_width; i++) {
        if (in[i]->is_present) sum += in[i]->value;
    }
            printf("Sum of received: %d.\n", sum);
            if (sum != expected) {
                printf("ERROR: Expected %d.\n", expected);
                exit(1);
            }
            self->s += self->width;
        
}
#include "ctarget/set_undef.h"
#include "ctarget/set.h"
void destinationreaction_function_1(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    destination_self_t* self = (destination_self_t*)instance_args;
    
    #pragma GCC diagnostic pop
    if (self->s == 0) {
        fprintf(stderr, "ERROR: Destination received no input!\n");
        exit(1);
    }
    printf("Success.\n");
        
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
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = destinationreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__shutdown_reactions[0] = &self->_lf__reaction_1;
    self->_lf__shutdown.last = NULL;
    self->_lf__shutdown.reactions = &self->_lf__shutdown_reactions[0];
    self->_lf__shutdown.number_of_reactions = 1;
    self->_lf__shutdown.is_timer = false;
    self->_lf__in.last = NULL;
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    self->_lf__in.number_of_reactions = 1;
    self->_lf__in.element_size = sizeof(int);
    return self;
}
// =============== END reactor class Destination

// =============== START reactor class ThreadedMultiport
typedef struct {
    struct self_base_t base;
    int width;
    int iterations;
} threadedmultiport_self_t;
threadedmultiport_self_t* new_ThreadedMultiport() {
    threadedmultiport_self_t* self = (threadedmultiport_self_t*)_lf_new_reactor(sizeof(threadedmultiport_self_t));
    
    return self;
}
// =============== END reactor class ThreadedMultiport

char* _lf_default_argv[] = { "ThreadedMultiport", "-o", "2", "sec" };
void _lf_set_default_command_line_options() {
        default_argc = 4;
        default_argv = _lf_default_argv;
}
// Array of pointers to timer triggers to be scheduled in _lf_initialize_timers().
trigger_t* _lf_timer_triggers[1];
int _lf_timer_triggers_size = 1;
// Array of pointers to shutdown triggers.
reaction_t* _lf_shutdown_reactions[1];
int _lf_shutdown_reactions_size = 1;
trigger_t* _lf_action_for_port(int port_id) {
        return NULL;
}
void _lf_initialize_trigger_objects() {
    // Initialize the _lf_clock
    lf_initialize_clock();
    // Create the array that will contain pointers to is_present fields to reset on each step.
    _lf_is_present_fields_size = 8;
    _lf_is_present_fields = (bool**)calloc(8, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(8, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    
    _lf_startup_reactions = (reaction_t**)calloc(0, sizeof(reaction_t*));
    _lf_startup_reactions_size = 0;
    int _lf_startup_reactions_count = 0;
    int _lf_shutdown_reactions_count = 0;
    int _lf_timer_triggers_count = 0;
    int _lf_tokens_with_ref_count_count = 0;
    threadedmultiport_self_t* threadedmultiport_self[1];
    source_self_t* threadedmultiport_a_self[1];
    computation_self_t* threadedmultiport_t_self[4];
    destination_self_t* threadedmultiport_b_self[1];
    // ***** Start initializing ThreadedMultiport of class ThreadedMultiport
    threadedmultiport_self[0] = new_ThreadedMultiport();
    int bank_index = 0;
    threadedmultiport_self[0]->width = 4;
    threadedmultiport_self[0]->iterations = 100000000;
    
    {
        // ***** Start initializing ThreadedMultiport.a of class Source
        threadedmultiport_a_self[0] = new_Source();
        int bank_index = 0;
        threadedmultiport_a_self[0]->width = threadedmultiport_self[0]->width;
        threadedmultiport_a_self[0]->_lf_out_width = 4;
        // Allocate memory for multiport output.
        threadedmultiport_a_self[0]->_lf_out = (source_out_t*)_lf_allocate(
                4, sizeof(source_out_t),
                &threadedmultiport_a_self[0]->base.allocations); 
        threadedmultiport_a_self[0]->_lf_out_pointers = (source_out_t**)_lf_allocate(
                4, sizeof(source_out_t*),
                &threadedmultiport_a_self[0]->base.allocations); 
        // Assign each output port pointer to be used in
        // reactions to facilitate user access to output ports
        for(int i=0; i < 4; i++) {
                threadedmultiport_a_self[0]->_lf_out_pointers[i] = &(threadedmultiport_a_self[0]->_lf_out[i]);
        }
        { // For scoping
            static int _initial = 0;
            threadedmultiport_a_self[0]->s = _initial;
        } // End scoping.
        // Initializing timer ThreadedMultiport.a.t.
        threadedmultiport_a_self[0]->_lf__t.offset = 0;
        threadedmultiport_a_self[0]->_lf__t.period = MSEC(200);
        _lf_timer_triggers[_lf_timer_triggers_count++] = &threadedmultiport_a_self[0]->_lf__t;
        threadedmultiport_a_self[0]->_lf__t.mode = NULL;
        
        //***** End initializing ThreadedMultiport.a
    }
    // Reactor is a bank. Iterate over bank members.
    for (int threadedmultiport_t_i = 0; threadedmultiport_t_i < 4; threadedmultiport_t_i++) {
        // ***** Start initializing ThreadedMultiport.t of class Computation
        threadedmultiport_t_self[threadedmultiport_t_i] = new_Computation();
        int bank_index = threadedmultiport_t_i;
        threadedmultiport_t_self[threadedmultiport_t_i]->iterations = threadedmultiport_self[0]->iterations;
        // width of -2 indicates that it is not a multiport.
        threadedmultiport_t_self[threadedmultiport_t_i]->_lf_out_width = -2;
        // width of -2 indicates that it is not a multiport.
        threadedmultiport_t_self[threadedmultiport_t_i]->_lf_in_width = -2;
        
        //***** End initializing ThreadedMultiport.t
    }
    {
        // ***** Start initializing ThreadedMultiport.b of class Destination
        threadedmultiport_b_self[0] = new_Destination();
        int bank_index = 0;
        threadedmultiport_b_self[0]->width = threadedmultiport_self[0]->width;
        threadedmultiport_b_self[0]->iterations = threadedmultiport_self[0]->iterations;
        threadedmultiport_b_self[0]->_lf_in_width = 4;
        // Allocate memory for multiport inputs.
        threadedmultiport_b_self[0]->_lf_in = (destination_in_t**)_lf_allocate(
                4, sizeof(destination_in_t*),
                &threadedmultiport_b_self[0]->base.allocations); 
        // Set inputs by default to an always absent default input.
        for (int i = 0; i < 4; i++) {
            threadedmultiport_b_self[0]->_lf_in[i] = &threadedmultiport_b_self[0]->_lf_default__in;
        }
        _lf_shutdown_reactions[_lf_shutdown_reactions_count++] = &threadedmultiport_b_self[0]->_lf__reaction_1;
        { // For scoping
            static int _initial = 0;
            threadedmultiport_b_self[0]->s = _initial;
        } // End scoping.
        
        //***** End initializing ThreadedMultiport.b
    }
    //***** End initializing ThreadedMultiport
    
    // **** Start deferred initialize for ThreadedMultiport
    {
        
        
        
        // **** Start deferred initialize for ThreadedMultiport.a
        {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ThreadedMultiport.a.
            threadedmultiport_a_self[0]->_lf__reaction_0.num_outputs = 4;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            threadedmultiport_a_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    4, sizeof(trigger_t**),
                    &threadedmultiport_a_self[0]->base.allocations);
            threadedmultiport_a_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    4, sizeof(int),
                    &threadedmultiport_a_self[0]->base.allocations);
            threadedmultiport_a_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    4, sizeof(bool*),
                    &threadedmultiport_a_self[0]->base.allocations);
            {
                int count = 0;
                {
                    for (int i = 0; i < 4; i++) {
                        threadedmultiport_a_self[0]->_lf__reaction_0.output_produced[i + count]
                                = &threadedmultiport_a_self[0]->_lf_out[i].is_present;
                    }
                    count += 4;
                }
            }
            
            // ** End initialization for reaction 0 of ThreadedMultiport.a
            
        }
        // **** End of deferred initialize for ThreadedMultiport.a
        // **** Start deferred initialize for ThreadedMultiport.t
        // Reactor is a bank. Iterate over bank members.
        for (int threadedmultiport_t_i = 0; threadedmultiport_t_i < 4; threadedmultiport_t_i++) {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ThreadedMultiport.t.
            threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &threadedmultiport_t_self[threadedmultiport_t_i]->base.allocations);
            threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &threadedmultiport_t_self[threadedmultiport_t_i]->base.allocations);
            threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &threadedmultiport_t_self[threadedmultiport_t_i]->base.allocations);
            {
                int count = 0;
                {
                    threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.output_produced[count++] = &threadedmultiport_t_self[threadedmultiport_t_i]->_lf_out.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of ThreadedMultiport.t
            
        }
        // **** End of deferred initialize for ThreadedMultiport.t
        // **** Start deferred initialize for ThreadedMultiport.b
        {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of ThreadedMultiport.b.
            threadedmultiport_b_self[0]->_lf__reaction_0.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 0 of ThreadedMultiport.b
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of ThreadedMultiport.b.
            threadedmultiport_b_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 1 of ThreadedMultiport.b
            
        }
        // **** End of deferred initialize for ThreadedMultiport.b
    }
    // **** End of deferred initialize for ThreadedMultiport
    // **** Start non-nested deferred initialize for ThreadedMultiport
    
    
    
    // **** Start non-nested deferred initialize for ThreadedMultiport.a
    
    // For reference counting, set num_destinations for port ThreadedMultiport.a.out.
    // Iterate over range ThreadedMultiport.a.out(0,4)->[ThreadedMultiport.t.in(0,4)].
    {
        int range_start[] =  { 0, 0 };
        int range_radixes[] = { 4, 1 };
        int permutation[] = { 0, 1 };
        mixed_radix_int_t range_mr = {
            2,
            range_start,
            range_radixes,
            permutation
        };
        for (int range_count = 0; range_count < 0 + 4; range_count++) {
            int src_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
            int src_channel = range_mr.digits[0]; // Channel index.
            int src_bank = range_mr.digits[1]; // Bank index.
            threadedmultiport_a_self[src_runtime]->_lf_out[src_channel].num_destinations = 4;
            mixed_radix_incr(&range_mr);
        }
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range ThreadedMultiport.a.out(0,4)->[ThreadedMultiport.t.in(0,4)].
        {
            int range_start[] =  { 0, 0 };
            int range_radixes[] = { 4, 1 };
            int permutation[] = { 0, 1 };
            mixed_radix_int_t range_mr = {
                2,
                range_start,
                range_radixes,
                permutation
            };
            for (int range_count = 0; range_count < 0 + 4; range_count++) {
                int src_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                int src_channel = range_mr.digits[0]; // Channel index.
                int src_bank = range_mr.digits[1]; // Bank index.
                // Reaction 0 of ThreadedMultiport.a triggers 1 downstream reactions
                // through port ThreadedMultiport.a.out.
                threadedmultiport_a_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                // For reaction 0 of ThreadedMultiport.a, allocate an
                // array of trigger pointers for downstream reactions through port ThreadedMultiport.a.out
                trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                        1, sizeof(trigger_t*),
                        &threadedmultiport_a_self[src_runtime]->base.allocations); 
                threadedmultiport_a_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                mixed_radix_incr(&range_mr);
            }
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges ThreadedMultiport.a.out(0,4)->[ThreadedMultiport.t.in(0,4)] and ThreadedMultiport.t.in(0,4).
        {
            int src_start[] =  { 0, 0 };
            int src_value[] =  { 0, 0 }; // Will be incremented.
            int src_radixes[] = { 4, 1 };
            int src_permutation[] = { 0, 1 };
            mixed_radix_int_t src_range_mr = {
                2,
                src_value,
                src_radixes,
                src_permutation
            };
            // Iterate over range ThreadedMultiport.t.in(0,4).
            {
                int range_start[] =  { 0, 0 };
                int range_radixes[] = { 1, 4 };
                int permutation[] = { 0, 1 };
                mixed_radix_int_t range_mr = {
                    2,
                    range_start,
                    range_radixes,
                    permutation
                };
                for (int range_count = 0; range_count < 0 + 4; range_count++) {
                    int dst_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                    int dst_channel = range_mr.digits[0]; // Channel index.
                    int dst_bank = range_mr.digits[1]; // Bank index.
                    int src_runtime = mixed_radix_parent(&src_range_mr, 1); // Runtime index.
                    int src_channel = src_range_mr.digits[0]; // Channel index.
                    int src_bank = src_range_mr.digits[1]; // Bank index.
                    // Point to destination port ThreadedMultiport.t.in's trigger struct.
                    threadedmultiport_a_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &threadedmultiport_t_self[dst_runtime]->_lf__in;
                    mixed_radix_incr(&src_range_mr);
                    if (mixed_radix_to_int(&src_range_mr) >= 0 + 4) {
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
    
    // **** End of non-nested deferred initialize for ThreadedMultiport.a
    // **** Start non-nested deferred initialize for ThreadedMultiport.t
    
    // For reference counting, set num_destinations for port ThreadedMultiport.t.out.
    // Iterate over range ThreadedMultiport.t.out(0,4)->[ThreadedMultiport.b.in(0,4)].
    {
        int range_start[] =  { 0, 0 };
        int range_radixes[] = { 1, 4 };
        int permutation[] = { 0, 1 };
        mixed_radix_int_t range_mr = {
            2,
            range_start,
            range_radixes,
            permutation
        };
        for (int range_count = 0; range_count < 0 + 4; range_count++) {
            int src_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
            int src_channel = range_mr.digits[0]; // Channel index.
            int src_bank = range_mr.digits[1]; // Bank index.
            threadedmultiport_t_self[src_runtime]->_lf_out.num_destinations = 1;
            mixed_radix_incr(&range_mr);
        }
    }
    {
        int triggers_index[4] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range ThreadedMultiport.t.out(0,4)->[ThreadedMultiport.b.in(0,4)].
        {
            int range_start[] =  { 0, 0 };
            int range_radixes[] = { 1, 4 };
            int permutation[] = { 0, 1 };
            mixed_radix_int_t range_mr = {
                2,
                range_start,
                range_radixes,
                permutation
            };
            for (int range_count = 0; range_count < 0 + 4; range_count++) {
                int src_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                int src_channel = range_mr.digits[0]; // Channel index.
                int src_bank = range_mr.digits[1]; // Bank index.
                // Reaction 0 of ThreadedMultiport.t triggers 1 downstream reactions
                // through port ThreadedMultiport.t.out.
                threadedmultiport_t_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
                // For reaction 0 of ThreadedMultiport.t, allocate an
                // array of trigger pointers for downstream reactions through port ThreadedMultiport.t.out
                trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                        1, sizeof(trigger_t*),
                        &threadedmultiport_t_self[src_runtime]->base.allocations); 
                threadedmultiport_t_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
                mixed_radix_incr(&range_mr);
            }
        }
        for (int i = 0; i < 4; i++) triggers_index[i] = 0;
        // Iterate over ranges ThreadedMultiport.t.out(0,4)->[ThreadedMultiport.b.in(0,4)] and ThreadedMultiport.b.in(0,4).
        {
            int src_start[] =  { 0, 0 };
            int src_value[] =  { 0, 0 }; // Will be incremented.
            int src_radixes[] = { 1, 4 };
            int src_permutation[] = { 0, 1 };
            mixed_radix_int_t src_range_mr = {
                2,
                src_value,
                src_radixes,
                src_permutation
            };
            // Iterate over range ThreadedMultiport.b.in(0,4).
            {
                int range_start[] =  { 0, 0 };
                int range_radixes[] = { 4, 1 };
                int permutation[] = { 0, 1 };
                mixed_radix_int_t range_mr = {
                    2,
                    range_start,
                    range_radixes,
                    permutation
                };
                for (int range_count = 0; range_count < 0 + 4; range_count++) {
                    int dst_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                    int dst_channel = range_mr.digits[0]; // Channel index.
                    int dst_bank = range_mr.digits[1]; // Bank index.
                    int src_runtime = mixed_radix_parent(&src_range_mr, 1); // Runtime index.
                    int src_channel = src_range_mr.digits[0]; // Channel index.
                    int src_bank = src_range_mr.digits[1]; // Bank index.
                    // Point to destination port ThreadedMultiport.b.in's trigger struct.
                    threadedmultiport_t_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &threadedmultiport_b_self[dst_runtime]->_lf__in;
                    mixed_radix_incr(&src_range_mr);
                    if (mixed_radix_to_int(&src_range_mr) >= 0 + 4) {
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
    
    // **** End of non-nested deferred initialize for ThreadedMultiport.t
    // **** Start non-nested deferred initialize for ThreadedMultiport.b
    
    
    
    
    // **** End of non-nested deferred initialize for ThreadedMultiport.b
    // **** End of non-nested deferred initialize for ThreadedMultiport
    // Connect inputs and outputs for reactor ThreadedMultiport.
    // Connect inputs and outputs for reactor ThreadedMultiport.a.
    // Connect ThreadedMultiport.a.out(0,4)->[ThreadedMultiport.t.in(0,4)] to port ThreadedMultiport.t.in(0,4)
    // Iterate over ranges ThreadedMultiport.a.out(0,4)->[ThreadedMultiport.t.in(0,4)] and ThreadedMultiport.t.in(0,4).
    {
        int src_start[] =  { 0, 0 };
        int src_value[] =  { 0, 0 }; // Will be incremented.
        int src_radixes[] = { 4, 1 };
        int src_permutation[] = { 0, 1 };
        mixed_radix_int_t src_range_mr = {
            2,
            src_value,
            src_radixes,
            src_permutation
        };
        // Iterate over range ThreadedMultiport.t.in(0,4).
        {
            int range_start[] =  { 0, 0 };
            int range_radixes[] = { 1, 4 };
            int permutation[] = { 0, 1 };
            mixed_radix_int_t range_mr = {
                2,
                range_start,
                range_radixes,
                permutation
            };
            for (int range_count = 0; range_count < 0 + 4; range_count++) {
                int dst_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                int dst_channel = range_mr.digits[0]; // Channel index.
                int dst_bank = range_mr.digits[1]; // Bank index.
                int src_runtime = mixed_radix_parent(&src_range_mr, 1); // Runtime index.
                int src_channel = src_range_mr.digits[0]; // Channel index.
                int src_bank = src_range_mr.digits[1]; // Bank index.
                threadedmultiport_t_self[dst_runtime]->_lf_in = (computation_in_t*)&threadedmultiport_a_self[src_runtime]->_lf_out[src_channel];
                mixed_radix_incr(&src_range_mr);
                if (mixed_radix_to_int(&src_range_mr) >= 0 + 4) {
                    // Start over with the source.
                    for (int i = 0; i < src_range_mr.size; i++) {
                        src_range_mr.digits[i] = src_start[i];
                    }
                }
                mixed_radix_incr(&range_mr);
            }
        }
    }
    // Connect inputs and outputs for reactor ThreadedMultiport.t.
    // Connect ThreadedMultiport.t.out(0,4)->[ThreadedMultiport.b.in(0,4)] to port ThreadedMultiport.b.in(0,4)
    // Iterate over ranges ThreadedMultiport.t.out(0,4)->[ThreadedMultiport.b.in(0,4)] and ThreadedMultiport.b.in(0,4).
    {
        int src_start[] =  { 0, 0 };
        int src_value[] =  { 0, 0 }; // Will be incremented.
        int src_radixes[] = { 1, 4 };
        int src_permutation[] = { 0, 1 };
        mixed_radix_int_t src_range_mr = {
            2,
            src_value,
            src_radixes,
            src_permutation
        };
        // Iterate over range ThreadedMultiport.b.in(0,4).
        {
            int range_start[] =  { 0, 0 };
            int range_radixes[] = { 4, 1 };
            int permutation[] = { 0, 1 };
            mixed_radix_int_t range_mr = {
                2,
                range_start,
                range_radixes,
                permutation
            };
            for (int range_count = 0; range_count < 0 + 4; range_count++) {
                int dst_runtime = mixed_radix_parent(&range_mr, 1); // Runtime index.
                int dst_channel = range_mr.digits[0]; // Channel index.
                int dst_bank = range_mr.digits[1]; // Bank index.
                int src_runtime = mixed_radix_parent(&src_range_mr, 1); // Runtime index.
                int src_channel = src_range_mr.digits[0]; // Channel index.
                int src_bank = src_range_mr.digits[1]; // Bank index.
                threadedmultiport_b_self[dst_runtime]->_lf_in[dst_channel] = (destination_in_t*)&threadedmultiport_t_self[src_runtime]->_lf_out;
                mixed_radix_incr(&src_range_mr);
                if (mixed_radix_to_int(&src_range_mr) >= 0 + 4) {
                    // Start over with the source.
                    for (int i = 0; i < src_range_mr.size; i++) {
                        src_range_mr.digits[i] = src_start[i];
                    }
                }
                mixed_radix_incr(&range_mr);
            }
        }
    }
    // Connect inputs and outputs for reactor ThreadedMultiport.b.
    {
    }
    // Reactor is a bank. Iterate over bank members.
    for (int threadedmultiport_t_i = 0; threadedmultiport_t_i < 4; threadedmultiport_t_i++) {
    }
    {
    }
    {
        int count = 0;
        {
            // Add port ThreadedMultiport.a.out to array of is_present fields.
            // Port ThreadedMultiport.a.out is a multiport. Iterate over its channels.
            for (int threadedmultiport_a_out_c = 0; threadedmultiport_a_out_c < 4; threadedmultiport_a_out_c++) {
                _lf_is_present_fields[0 + count] = &threadedmultiport_a_self[0]->_lf_out[threadedmultiport_a_out_c].is_present;
                count++;
            }
        }
    }
    {
        int count = 0;
        // Reactor is a bank. Iterate over bank members.
        for (int threadedmultiport_t_i = 0; threadedmultiport_t_i < 4; threadedmultiport_t_i++) {
            // Add port ThreadedMultiport.t.out to array of is_present fields.
            _lf_is_present_fields[4 + count] = &threadedmultiport_t_self[threadedmultiport_t_i]->_lf_out.is_present;
            count++;
        }
    }
    
    // Set reaction priorities for ReactorInstance ThreadedMultiport
    {
        
        // Set reaction priorities for ReactorInstance ThreadedMultiport.a
        {
            //levels.size() == 1
            threadedmultiport_a_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedmultiport_a_self[0]->_lf__reaction_0.index = 0x7fffffffffff0000LL;
        }
        
        
        // Set reaction priorities for ReactorInstance ThreadedMultiport.t
        // Reactor is a bank. Iterate over bank members.
        for (int threadedmultiport_t_i = 0; threadedmultiport_t_i < 4; threadedmultiport_t_i++) {
            //levels.size() == 1
            threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedmultiport_t_self[threadedmultiport_t_i]->_lf__reaction_0.index = 0x7fffffffffff0001LL;
        }
        
        
        // Set reaction priorities for ReactorInstance ThreadedMultiport.b
        {
            //levels.size() == 1
            threadedmultiport_b_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedmultiport_b_self[0]->_lf__reaction_0.index = 0x7fffffffffff0002LL;
            //levels.size() == 1
            threadedmultiport_b_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 3 and 
            // deadline 140737488355327 shifted left 16 bits.
            threadedmultiport_b_self[0]->_lf__reaction_1.index = 0x7fffffffffff0003LL;
        }
        
    }
    
    reaction_t **_lf_reaction_instances = (reaction_t**) calloc(7, sizeof(reaction_t*));
    _lf_reaction_instances[0] = &threadedmultiport_a_self[0]->_lf__reaction_0;
    _lf_reaction_instances[1] = &threadedmultiport_t_self[0]->_lf__reaction_0;
    _lf_reaction_instances[2] = &threadedmultiport_t_self[1]->_lf__reaction_0;
    _lf_reaction_instances[3] = &threadedmultiport_t_self[2]->_lf__reaction_0;
    _lf_reaction_instances[4] = &threadedmultiport_t_self[3]->_lf__reaction_0;
    _lf_reaction_instances[5] = &threadedmultiport_b_self[0]->_lf__reaction_0;
    _lf_reaction_instances[6] = &threadedmultiport_b_self[0]->_lf__reaction_1;
    // Initialize the scheduler
    size_t num_reactions_per_level[4] = 
        {4, 4, 1, 1};
    sched_params_t sched_params = (sched_params_t) {
                            .num_reactions_per_level = &num_reactions_per_level[0],
                            .num_reactions_per_level_size = (size_t) 4,
                            .reaction_instances = _lf_reaction_instances};
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
    for (int i = 0; i < _lf_shutdown_reactions_size; i++) {
        if (_lf_shutdown_reactions[i] != NULL) {
            _lf_trigger_reaction(_lf_shutdown_reactions[i], -1);
        }
    }
    // Return true if there are shutdown reactions.
    return (_lf_shutdown_reactions_size > 0);
}
void terminate_execution() {}
