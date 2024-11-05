#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include "header_lib.h"

namespace password_manager_ns {

    class encryption {
    public:
        string encrypt(const string& data, const string& key) const;
        string decrypt(const string& data, const string& key) const;
    };

} 

#endif