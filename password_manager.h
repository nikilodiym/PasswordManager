#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H

#include "user.h"
#include "header_lib.h"

namespace password_manager_ns {

    class password_manager {
    public:
        bool add_password(const string& category, const string& service, const string& username, const string& password);
        string get_password(const string& service, const user& user) const;

    private:
        struct password_entry {
            string category;
            string service;
            string username;
            string encrypted_password;
        };

        vector<password_entry> passwords;

        string encrypt_password(const string& password) const;
    };

}

#endif
