#ifndef CATEGORY_MANAGER_H
#define CATEGORY_MANAGER_H

#include "header_lib.h"

namespace password_manager_ns {

    class category_manager {
    public:
        void add_category(const string& category_name);
        void remove_category(const string& category_name);
        bool category_exists(const string& category_name) const;

    private:
        map<string, vector<string>> categories;
    };
}

#endif
