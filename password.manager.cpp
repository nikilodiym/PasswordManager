#include "password_manager.h"

namespace password_manager_ns {

    bool password_manager::add_password(const string& category, const string& service, const string& username, const string& password) {
        password_entry entry{ category, service, username, encrypt_password(password) };
        passwords.push_back(entry);
        return true;
    }

    string password_manager::get_password(const string& service, const user& user) const {
        for (const auto& entry : passwords) {
            if (entry.service == service) {
                return entry.encrypted_password;
            }
        }
        return {};
    }

    string password_manager::encrypt_password(const string& password) const {
        return "encrypted_" + password;
    }

}
