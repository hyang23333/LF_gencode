// Code generated by the Lingua Franca compiler from:
// file://Users/yanghuang/Projects/cs267/lingua-franca/test/C/src/PingPong.lf
#define LOG_LEVEL 2
#define TARGET_FILES_DIRECTORY "/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/PingPong"
#include "ctarget/ctarget.h"
#include "core/reactor.c"
#include "core/mixed_radix.h"
int main(int argc, char* argv[]) {
    return lf_reactor_c_main(argc, argv);
}
// =============== START reactor class Ping
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} ping_receive_t;
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} ping_send_t;
typedef struct {
    trigger_t* trigger;
    
    bool is_present;
    bool has_value;
    lf_token_t* token;
    
} ping_serve_t;
typedef struct {
    struct self_base_t base;
    int count;
    int pingsLeft;
    ping_serve_t _lf_serve;
    ping_receive_t* _lf_receive;
    // width of -2 indicates that it is not a multiport.
    int _lf_receive_width;
    // Default input (in case it does not get connected)
    ping_receive_t _lf_default__receive;
    ping_send_t _lf_send;
    int _lf_send_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    trigger_t _lf__serve;
    reaction_t* _lf__serve_reactions[1];
    trigger_t _lf__receive;
    reaction_t* _lf__receive_reactions[1];
} ping_self_t;
#include "ctarget/set.h"
void pingreaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    ping_self_t* self = (ping_self_t*)instance_args;
    // Expose the action struct as a local variable whose name matches the action name.
    ping_serve_t* serve = &self->_lf_serve;
    // Set the fields of the action struct to match the current trigger.
    serve->is_present = (bool)self->_lf__serve.status;
    serve->has_value = ((self->_lf__serve.token) != NULL && (self->_lf__serve.token)->value != NULL);
    serve->token = (self->_lf__serve.token);
    ping_send_t* send = &self->_lf_send;
    #pragma GCC diagnostic pop
    lf_set(send, self->pingsLeft--);
        
}
#include "ctarget/set_undef.h"
#include "ctarget/set.h"
void pingreaction_function_1(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    ping_self_t* self = (ping_self_t*)instance_args;
    ping_receive_t* receive = self->_lf_receive;
    int receive_width = self->_lf_receive_width;
    ping_serve_t* serve = &self->_lf_serve;
    #pragma GCC diagnostic pop
    if (self->pingsLeft > 0) {
        lf_schedule(serve, 0);
    } else {
        request_stop();
    }
        
}
#include "ctarget/set_undef.h"
ping_self_t* new_Ping() {
    ping_self_t* self = (ping_self_t*)_lf_new_reactor(sizeof(ping_self_t));
    self->_lf_serve.trigger = &self->_lf__serve;
    // Set input by default to an always absent default input.
    self->_lf_receive = &self->_lf_default__receive;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = pingreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = pingreaction_function_1;
    self->_lf__reaction_1.self = self;
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    self->_lf__reaction_1.STP_handler = NULL;
    self->_lf__reaction_1.name = "?";
    self->_lf__reaction_1.mode = NULL;
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    self->_lf__serve.last = NULL;
    self->_lf__serve_reactions[0] = &self->_lf__reaction_0;
    self->_lf__serve.reactions = &self->_lf__serve_reactions[0];
    self->_lf__serve.number_of_reactions = 1;
    self->_lf__serve.is_physical = false;
    
    self->_lf__serve.element_size = 0;
    self->_lf__receive.last = NULL;
    self->_lf__receive_reactions[0] = &self->_lf__reaction_1;
    self->_lf__receive.reactions = &self->_lf__receive_reactions[0];
    self->_lf__receive.number_of_reactions = 1;
    self->_lf__receive.element_size = sizeof(int);
    return self;
}
// =============== END reactor class Ping

// =============== START reactor class Pong
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} pong_receive_t;
typedef struct {
    int value;
    bool is_present;
    int num_destinations;
    lf_token_t* token;
    int length;
    void (*destructor) (void* value);
    void* (*copy_constructor) (void* value);
} pong_send_t;
typedef struct {
    struct self_base_t base;
    int expected;
    int count;
    pong_receive_t* _lf_receive;
    // width of -2 indicates that it is not a multiport.
    int _lf_receive_width;
    // Default input (in case it does not get connected)
    pong_receive_t _lf_default__receive;
    pong_send_t _lf_send;
    int _lf_send_width;
    reaction_t _lf__reaction_0;
    reaction_t _lf__reaction_1;
    trigger_t _lf__shutdown;
    reaction_t* _lf__shutdown_reactions[1];
    trigger_t _lf__receive;
    reaction_t* _lf__receive_reactions[1];
} pong_self_t;
#include "ctarget/set.h"
void pongreaction_function_0(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    pong_self_t* self = (pong_self_t*)instance_args;
    pong_receive_t* receive = self->_lf_receive;
    int receive_width = self->_lf_receive_width;
    pong_send_t* send = &self->_lf_send;
    #pragma GCC diagnostic pop
    self->count++;
    lf_set(send, receive->value);   
        
}
#include "ctarget/set_undef.h"
#include "ctarget/set.h"
void pongreaction_function_1(void* instance_args) {
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-variable"
    pong_self_t* self = (pong_self_t*)instance_args;
    
    #pragma GCC diagnostic pop
    if (self->count != self->expected) {
        fprintf(stderr, "ERROR: Pong expected to receive %d inputs, but it received %d.\n",
            self->expected, self->count
        );
        exit(1);
    }
    printf("Success.\n");
        
}
#include "ctarget/set_undef.h"
pong_self_t* new_Pong() {
    pong_self_t* self = (pong_self_t*)_lf_new_reactor(sizeof(pong_self_t));
    // Set input by default to an always absent default input.
    self->_lf_receive = &self->_lf_default__receive;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = pongreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__reaction_1.number = 1;
    self->_lf__reaction_1.function = pongreaction_function_1;
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
    self->_lf__receive.last = NULL;
    self->_lf__receive_reactions[0] = &self->_lf__reaction_0;
    self->_lf__receive.reactions = &self->_lf__receive_reactions[0];
    self->_lf__receive.number_of_reactions = 1;
    self->_lf__receive.element_size = sizeof(int);
    return self;
}
// =============== END reactor class Pong

// =============== START reactor class PingPong
typedef struct {
    struct self_base_t base;
} pingpong_self_t;
pingpong_self_t* new_PingPong() {
    pingpong_self_t* self = (pingpong_self_t*)_lf_new_reactor(sizeof(pingpong_self_t));
    
    return self;
}
// =============== END reactor class PingPong

char* _lf_default_argv[] = { "PingPong", "-f", "true" };
void _lf_set_default_command_line_options() {
        default_argc = 3;
        default_argv = _lf_default_argv;
}
// Array of pointers to timer triggers to be scheduled in _lf_initialize_timers().
trigger_t** _lf_timer_triggers = NULL;
int _lf_timer_triggers_size = 0;
// Array of pointers to shutdown triggers.
reaction_t* _lf_shutdown_reactions[1];
int _lf_shutdown_reactions_size = 1;
trigger_t* _lf_action_for_port(int port_id) {
        return NULL;
}
void _lf_initialize_trigger_objects() {
    // Initialize the _lf_clock
    lf_initialize_clock();
    _lf_tokens_with_ref_count_size = 1;
    _lf_tokens_with_ref_count = (token_present_t*)calloc(1, sizeof(token_present_t));
    if (_lf_tokens_with_ref_count == NULL) lf_print_error_and_exit("Out of memory!");
    // Create the array that will contain pointers to is_present fields to reset on each step.
    _lf_is_present_fields_size = 3;
    _lf_is_present_fields = (bool**)calloc(3, sizeof(bool*));
    if (_lf_is_present_fields == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated = (bool**)calloc(3, sizeof(bool*));
    if (_lf_is_present_fields_abbreviated == NULL) lf_print_error_and_exit("Out of memory!");
    _lf_is_present_fields_abbreviated_size = 0;
    
    _lf_startup_reactions = (reaction_t**)calloc(1, sizeof(reaction_t*));
    _lf_startup_reactions_size = 1;
    int _lf_startup_reactions_count = 0;
    int _lf_shutdown_reactions_count = 0;
    int _lf_timer_triggers_count = 0;
    int _lf_tokens_with_ref_count_count = 0;
    pingpong_self_t* pingpong_self[1];
    ping_self_t* pingpong_ping_self[1];
    pong_self_t* pingpong_pong_self[1];
    // ***** Start initializing PingPong of class PingPong
    pingpong_self[0] = new_PingPong();
    int bank_index = 0;
    
    {
        // ***** Start initializing PingPong.ping of class Ping
        pingpong_ping_self[0] = new_Ping();
        int bank_index = 0;
        pingpong_ping_self[0]->count = 10;
        // width of -2 indicates that it is not a multiport.
        pingpong_ping_self[0]->_lf_send_width = -2;
        // width of -2 indicates that it is not a multiport.
        pingpong_ping_self[0]->_lf_receive_width = -2;
        _lf_startup_reactions[_lf_startup_reactions_count++] = &pingpong_ping_self[0]->_lf__reaction_0;
        pingpong_ping_self[0]->pingsLeft = pingpong_ping_self[0]->count;
        // Initializing action PingPong.ping.serve
        pingpong_ping_self[0]->_lf__serve.offset = 0;
        pingpong_ping_self[0]->_lf__serve.period = -1;
        pingpong_ping_self[0]->_lf__serve.mode = NULL;
        pingpong_ping_self[0]->_lf__serve.token = _lf_create_token(0);
        pingpong_ping_self[0]->_lf__serve.status = absent;
        _lf_tokens_with_ref_count[_lf_tokens_with_ref_count_count].token = &pingpong_ping_self[0]->_lf__serve.token;
        _lf_tokens_with_ref_count[_lf_tokens_with_ref_count_count].status = &pingpong_ping_self[0]->_lf__serve.status;
        _lf_tokens_with_ref_count[_lf_tokens_with_ref_count_count++].reset_is_present = true;
        //***** End initializing PingPong.ping
    }
    {
        // ***** Start initializing PingPong.pong of class Pong
        pingpong_pong_self[0] = new_Pong();
        int bank_index = 0;
        pingpong_pong_self[0]->expected = 10;
        // width of -2 indicates that it is not a multiport.
        pingpong_pong_self[0]->_lf_send_width = -2;
        // width of -2 indicates that it is not a multiport.
        pingpong_pong_self[0]->_lf_receive_width = -2;
        _lf_shutdown_reactions[_lf_shutdown_reactions_count++] = &pingpong_pong_self[0]->_lf__reaction_1;
        { // For scoping
            static int _initial = 0;
            pingpong_pong_self[0]->count = _initial;
        } // End scoping.
        
        //***** End initializing PingPong.pong
    }
    //***** End initializing PingPong
    
    // **** Start deferred initialize for PingPong
    {
        
        
        
        // **** Start deferred initialize for PingPong.ping
        {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of PingPong.ping.
            pingpong_ping_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            pingpong_ping_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &pingpong_ping_self[0]->base.allocations);
            pingpong_ping_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &pingpong_ping_self[0]->base.allocations);
            pingpong_ping_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &pingpong_ping_self[0]->base.allocations);
            {
                int count = 0;
                {
                    pingpong_ping_self[0]->_lf__reaction_0.output_produced[count++] = &pingpong_ping_self[0]->_lf_send.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of PingPong.ping
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of PingPong.ping.
            pingpong_ping_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 1 of PingPong.ping
            
        }
        // **** End of deferred initialize for PingPong.ping
        // **** Start deferred initialize for PingPong.pong
        {
            
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_0 of PingPong.pong.
            pingpong_pong_self[0]->_lf__reaction_0.num_outputs = 1;
            // Allocate memory for triggers[] and triggered_sizes[] on the reaction_t
            // struct for this reaction.
            pingpong_pong_self[0]->_lf__reaction_0.triggers = (trigger_t***)_lf_allocate(
                    1, sizeof(trigger_t**),
                    &pingpong_pong_self[0]->base.allocations);
            pingpong_pong_self[0]->_lf__reaction_0.triggered_sizes = (int*)_lf_allocate(
                    1, sizeof(int),
                    &pingpong_pong_self[0]->base.allocations);
            pingpong_pong_self[0]->_lf__reaction_0.output_produced = (bool**)_lf_allocate(
                    1, sizeof(bool*),
                    &pingpong_pong_self[0]->base.allocations);
            {
                int count = 0;
                {
                    pingpong_pong_self[0]->_lf__reaction_0.output_produced[count++] = &pingpong_pong_self[0]->_lf_send.is_present;
                }
            }
            
            // ** End initialization for reaction 0 of PingPong.pong
            // Total number of outputs (single ports and multiport channels)
            // produced by reaction_1 of PingPong.pong.
            pingpong_pong_self[0]->_lf__reaction_1.num_outputs = 0;
            {
                int count = 0;
            }
            
            // ** End initialization for reaction 1 of PingPong.pong
            
        }
        // **** End of deferred initialize for PingPong.pong
    }
    // **** End of deferred initialize for PingPong
    // **** Start non-nested deferred initialize for PingPong
    
    
    
    // **** Start non-nested deferred initialize for PingPong.ping
    
    // For reference counting, set num_destinations for port PingPong.ping.send.
    // Iterate over range PingPong.ping.send(0,1)->[PingPong.pong.receive(0,1)].
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        int range_count = 0;
        pingpong_ping_self[src_runtime]->_lf_send.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range PingPong.ping.send(0,1)->[PingPong.pong.receive(0,1)].
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            int range_count = 0;
            // Reaction 0 of PingPong.ping triggers 1 downstream reactions
            // through port PingPong.ping.send.
            pingpong_ping_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of PingPong.ping, allocate an
            // array of trigger pointers for downstream reactions through port PingPong.ping.send
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &pingpong_ping_self[src_runtime]->base.allocations); 
            pingpong_ping_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges PingPong.ping.send(0,1)->[PingPong.pong.receive(0,1)] and PingPong.pong.receive(0,1).
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            // Iterate over range PingPong.pong.receive(0,1).
            {
                int dst_runtime = 0; // Runtime index.
                int dst_channel = 0; // Channel index.
                int dst_bank = 0; // Bank index.
                int range_count = 0;
                // Point to destination port PingPong.pong.receive's trigger struct.
                pingpong_ping_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &pingpong_pong_self[dst_runtime]->_lf__receive;
            }
        }
    }
    
    // **** End of non-nested deferred initialize for PingPong.ping
    // **** Start non-nested deferred initialize for PingPong.pong
    
    // For reference counting, set num_destinations for port PingPong.pong.send.
    // Iterate over range PingPong.pong.send(0,1)->[PingPong.ping.receive(0,1)].
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        int range_count = 0;
        pingpong_pong_self[src_runtime]->_lf_send.num_destinations = 1;
    }
    {
        int triggers_index[1] = { 0 }; // Number of bank members with the reaction.
        // Iterate over range PingPong.pong.send(0,1)->[PingPong.ping.receive(0,1)].
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            int range_count = 0;
            // Reaction 0 of PingPong.pong triggers 1 downstream reactions
            // through port PingPong.pong.send.
            pingpong_pong_self[src_runtime]->_lf__reaction_0.triggered_sizes[triggers_index[src_runtime]] = 1;
            // For reaction 0 of PingPong.pong, allocate an
            // array of trigger pointers for downstream reactions through port PingPong.pong.send
            trigger_t** trigger_array = (trigger_t**)_lf_allocate(
                    1, sizeof(trigger_t*),
                    &pingpong_pong_self[src_runtime]->base.allocations); 
            pingpong_pong_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime]++] = trigger_array;
        }
        for (int i = 0; i < 1; i++) triggers_index[i] = 0;
        // Iterate over ranges PingPong.pong.send(0,1)->[PingPong.ping.receive(0,1)] and PingPong.ping.receive(0,1).
        {
            int src_runtime = 0; // Runtime index.
            int src_channel = 0; // Channel index.
            int src_bank = 0; // Bank index.
            // Iterate over range PingPong.ping.receive(0,1).
            {
                int dst_runtime = 0; // Runtime index.
                int dst_channel = 0; // Channel index.
                int dst_bank = 0; // Bank index.
                int range_count = 0;
                // Point to destination port PingPong.ping.receive's trigger struct.
                pingpong_pong_self[src_runtime]->_lf__reaction_0.triggers[triggers_index[src_runtime] + src_channel][0] = &pingpong_ping_self[dst_runtime]->_lf__receive;
            }
        }
    }
    
    // **** End of non-nested deferred initialize for PingPong.pong
    // **** End of non-nested deferred initialize for PingPong
    // Connect inputs and outputs for reactor PingPong.
    // Connect inputs and outputs for reactor PingPong.ping.
    // Connect PingPong.ping.send(0,1)->[PingPong.pong.receive(0,1)] to port PingPong.pong.receive(0,1)
    // Iterate over ranges PingPong.ping.send(0,1)->[PingPong.pong.receive(0,1)] and PingPong.pong.receive(0,1).
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        // Iterate over range PingPong.pong.receive(0,1).
        {
            int dst_runtime = 0; // Runtime index.
            int dst_channel = 0; // Channel index.
            int dst_bank = 0; // Bank index.
            int range_count = 0;
            pingpong_pong_self[dst_runtime]->_lf_receive = (pong_receive_t*)&pingpong_ping_self[src_runtime]->_lf_send;
        }
    }
    // Connect inputs and outputs for reactor PingPong.pong.
    // Connect PingPong.pong.send(0,1)->[PingPong.ping.receive(0,1)] to port PingPong.ping.receive(0,1)
    // Iterate over ranges PingPong.pong.send(0,1)->[PingPong.ping.receive(0,1)] and PingPong.ping.receive(0,1).
    {
        int src_runtime = 0; // Runtime index.
        int src_channel = 0; // Channel index.
        int src_bank = 0; // Bank index.
        // Iterate over range PingPong.ping.receive(0,1).
        {
            int dst_runtime = 0; // Runtime index.
            int dst_channel = 0; // Channel index.
            int dst_bank = 0; // Bank index.
            int range_count = 0;
            pingpong_ping_self[dst_runtime]->_lf_receive = (ping_receive_t*)&pingpong_pong_self[src_runtime]->_lf_send;
        }
    }
    {
        {
            // Add action PingPong.ping.serve to array of is_present fields.
            _lf_is_present_fields[0] 
                    = &pingpong_ping_self[0]->_lf_serve.is_present;
        }
    }
    {
    }
    {
        int count = 0;
        {
            // Add port PingPong.ping.send to array of is_present fields.
            _lf_is_present_fields[1 + count] = &pingpong_ping_self[0]->_lf_send.is_present;
            count++;
        }
    }
    {
        int count = 0;
        {
            // Add port PingPong.pong.send to array of is_present fields.
            _lf_is_present_fields[2 + count] = &pingpong_pong_self[0]->_lf_send.is_present;
            count++;
        }
    }
    
    // Set reaction priorities for ReactorInstance PingPong
    {
        
        // Set reaction priorities for ReactorInstance PingPong.ping
        {
            //levels.size() == 1
            pingpong_ping_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 0 and 
            // deadline 140737488355327 shifted left 16 bits.
            pingpong_ping_self[0]->_lf__reaction_0.index = 0x7fffffffffff0000LL;
            //levels.size() == 1
            pingpong_ping_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 140737488355327 shifted left 16 bits.
            pingpong_ping_self[0]->_lf__reaction_1.index = 0x7fffffffffff0002LL;
        }
        
        
        // Set reaction priorities for ReactorInstance PingPong.pong
        {
            //levels.size() == 1
            pingpong_pong_self[0]->_lf__reaction_0.chain_id = 1;
            // index is the OR of level 1 and 
            // deadline 140737488355327 shifted left 16 bits.
            pingpong_pong_self[0]->_lf__reaction_0.index = 0x7fffffffffff0001LL;
            //levels.size() == 1
            pingpong_pong_self[0]->_lf__reaction_1.chain_id = 1;
            // index is the OR of level 2 and 
            // deadline 140737488355327 shifted left 16 bits.
            pingpong_pong_self[0]->_lf__reaction_1.index = 0x7fffffffffff0002LL;
        }
        
    }
    
    
}
void _lf_trigger_startup_reactions() {
    for (int i = 0; i < _lf_startup_reactions_size; i++) {
        if (_lf_startup_reactions[i] != NULL) {
            #ifdef MODAL_REACTORS
            if (!_lf_mode_is_active(_lf_startup_reactions[i]->mode)) {
                // Mode is not active. Remember to trigger startup when the mode
                // becomes active.
                _lf_startup_reactions[i]->mode->should_trigger_startup = true;
                continue;
            }
            #endif
            _lf_trigger_reaction(_lf_startup_reactions[i], -1);
        }
    }
}
void _lf_initialize_timers() {

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
