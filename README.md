#include <fstream>
#include <string>

int main() {
    std::ofstream readme("README.md");

    if (readme.is_open()) {
        // Заголовок
        readme << "# PasswordManager\n\n";
        readme << "![PasswordManager](https://img.shields.io/badge/C++-Project-blue?style=for-the-badge&logo=c%2B%2B)\n\n";

        // Опис
        readme << "## Опис\n";
        readme << "**PasswordManager** — це інструмент для безпечного управління паролями. Проєкт написаний на C++ із використанням сучасних принципів програмування.\n\n";

        readme << "### Можливості:\n";
        readme << "- Додавання, редагування та видалення паролів.\n";
        readme << "- Шифрування паролів для безпечного збереження.\n";
        readme << "- Зручний інтерфейс для взаємодії з користувачем.\n\n";

        // Скриншоти
        readme << "## Скриншоти\n";
        readme << "![Скриншот1](https://via.placeholder.com/800x400?text=Screenshot+1)\n";
        readme << "![Скриншот2](https://via.placeholder.com/800x400?text=Screenshot+2)\n\n";

        // Таблиця функціональності
        readme << "## Функціональність\n";
        readme << "| **Компонент**        | **Опис**                                              |\n";
        readme << "|----------------------|------------------------------------------------------|\n";
        readme << "| `encryption.h`       | Реалізація шифрування паролів.                       |\n";
        readme << "| `password_manager.h` | Логіка збереження і управління паролями.             |\n";
        readme << "| `ui.h`               | Інтерфейс користувача.                               |\n";
        readme << "| `user.h`, `user.cpp` | Логіка роботи з даними користувачів.                 |\n";
        readme << "| `main.cpp`           | Основна програма, яка запускає весь проєкт.          |\n\n";

        // Архітектура проєкту
        readme << "## Архітектура\n";
        readme << "```mermaid\n";
        readme << "graph TD\n";
        readme << "    A[Main Program] --> B[UI Module]\n";
        readme << "    B --> C[User Management]\n";
        readme << "    B --> D[Password Management]\n";
        readme << "    C --> E[Encryption Module]\n";
        readme << "```\n\n";

        // Як запустити
        readme << "## Як запустити\n";
        readme << "1. Склонуйте репозиторій:\n";
        readme << "   ```bash\n";
        readme << "   git clone https://github.com/nikilodiym/PasswordManager.git\n";
        readme << "   cd PasswordManager\n";
        readme << "   ```\n";
        readme << "2. Зберіть проєкт за допомогою CMake:\n";
        readme << "   ```bash\n";
        readme << "   mkdir build\n";
        readme << "   cd build\n";
        readme << "   cmake ..\n";
        readme << "   make\n";
        readme << "   ```\n";
        readme << "3. Запустіть програму:\n";
        readme << "   ```bash\n";
        readme << "   ./PasswordManager\n";
        readme << "   ```\n\n";

        // Приклад використання
        readme << "## Приклад використання\n";
        readme << "### Додавання паролю\n";
        readme << "1. Введіть назву сервісу.\n";
        readme << "2. Введіть логін і пароль.\n";
        readme << "3. Дані збережуться у зашифрованому форматі.\n\n";

        // Ліцензія
        readme << "## Ліцензія\n";
        readme << "Цей проєкт ліцензований під **MIT License**. Детальніше дивіться у файлі `LICENSE`.\n\n";

        // Контакти
        readme << "## Контакти\n";
        readme << "- Автор: [nikilodiym](https://github.com/nikilodiym)\n";
        readme << "- Email: example@example.com\n";

        readme.close();
        return 0;
    }

    return 1;
}
