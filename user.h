#ifndef USER_H
#define USER_H

#include "header_lib.h"

namespace password_manager_ns {

    enum class user_role { guest, regular_user, admin };

    class user {
    public:
        user(const string& username, user_role role);

        string get_username() const;
        user_role get_role() const;
        bool authenticate(const string& password) const;

    private:
        string username;
        user_role role;
        string encrypted_password;
    };

}

#endif