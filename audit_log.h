#ifndef AUDIT_LOG_H
#define AUDIT_LOG_H

#include "header_lib.h"

namespace password_manager_ns {

    class audit_log {
    public:
        void log_action(const string& username, const string& action);
        vector<string> get_log() const;

    private:
        vector<string> log_entries;
    };

}

#endif