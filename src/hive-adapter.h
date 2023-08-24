#ifndef _HIVE_ADAPTER
#define _HIVE_ADAPTER

#define NO_CHECK (0)
#define CHECK_ON_STARTUP (1)
#define CHECK_EVERY_X (2)
#define CHECK_ON_CHANGE (4)

class HiveAdapter {
    HiveAdapter(char* secrets, char* hive_url = "", int flags = CHECK_ON_STARTUP);
    public:
        void start();
        void set_secret(char* secrets);
        void set_listener_port(uint16_t port);
        char* get_version();
    private:
        char* secrets = NULL;
        char* version = NULL;
        char* hive_url = NULL;
        
        int flags = 0;
        void _set_current_version();
};

#endif