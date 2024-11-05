#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H

#include "user.h"
#include "category_manager.h"
#include "encryption.h"
#include "header_lib.h"

namespace password_manager_ns {

    class password_manager {
    public:
        password_manager();
        bool add_password(const string& category, const string& service, const string& username, const string& password);
        bool delete_password(const string& service);
        string get_password(const string& service, const user& user) const;

    private:
        struct password_entry {
            string category;
            string service;
            string username;
            string encrypted_password;
        };

        vector<password_entry> passwords;
        encryption encryptor;
    };

} 

#endif