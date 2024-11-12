#ifndef UI_H
#define UI_H

#include "password_manager.h"
#include "user.h"
#include "header_lib.h"

namespace password_manager_ns {

    class ui {
    public:
        void main_menu();

    private:
        void add_password_menu();
        void delete_password_menu();
        void view_password_menu();

        password_manager password_manager_instance;
    };

}

#endif
