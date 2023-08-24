#include <iostream>
#include "hive-adapter.h"

void HiveAdapter::_set_current_version() {
    std::cout << "Hello World" << std::endl;
    HiveAdapter adapter("", "", "", CHECK_EVERY_X | CHECK_ON_STARTUP | CHECK_ON_CHANGE);
    adapter.start();
}

char* HiveAdapter::get_version() {
    if (this->version == NULL) {
        return "NOT_DEFINED";
    }
    return this->version;
}

void HiveAdapter::set_secret(char* secret) {
    this->secrets = secret;
}

HiveAdapter::HiveAdapter(char* secrets, char* hive_url, int flags) {
    this->secrets = secrets;
    this->hive_url = hive_url;
    this->flags = flags;
}

void HiveAdapter::start() {
    if (this->flags & CHECK_ON_STARTUP != 0) {
        //TODO: check hive platform firmwares
    }
}