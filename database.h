#ifndef DATABASE_H
#define DATABASE_H

#include "header_lib.h"

namespace password_manager_ns {

    class database {
    public:
        bool connect(const string& db_path);
        bool save_entry(const string& data);
        string load_entry(const string& query);

    private:
        string database_path;
    };

}

#endif
