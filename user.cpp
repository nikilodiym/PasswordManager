#include "user.h"

namespace password_manager_ns {

    user::user(const string& username, user_role role, const string& password)
        : username(username), role(role) {
        encrypted_password = encrypt_password(password);
    }

    string user::get_username() const {
        return username;
    }

    user_role user::get_role() const {
        return role;
    }

    bool user::authenticate(const string& password) const {
        return encrypt_password(password) == encrypted_password;
    }

    string user::encrypt_password(const string& password) const {
        return "encrypted_" + password;
    }

}
