#ifndef BACKUP_MANAGER_H
#define BACKUP_MANAGER_H

#include "header_lib.h"

namespace password_manager_ns {

    class backup_manager {
    public:
        bool create_backup(const string& file_path);
        bool load_backup(const string& file_path);
    };

}

#endif