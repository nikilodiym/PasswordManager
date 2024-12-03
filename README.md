# PasswordManager

![PasswordManager](https://img.shields.io/badge/C++-Project-blue?style=for-the-badge&logo=c%2B%2B)

## Опис

**PasswordManager** — це інструмент для безпечного управління паролями. Проєкт написаний на C++ із використанням сучасних принципів програмування.

### Можливості:
- Додавання, редагування та видалення паролів.
- Шифрування паролів для безпечного збереження.
- Зручний інтерфейс для взаємодії з користувачем.

---

## Скриншоти

<div style="display: flex; justify-content: space-around;">
    <img src="https://github.com/user-attachments/assets/f08f4094-84aa-426e-bd8f-2b97c37fc874" alt="Screenshot 1" style="width: 45%;">
    <img src="https://github.com/user-attachments/assets/06150a2c-454c-43ca-a5b1-3f640a96a2fb" alt="Screenshot 2" style="width: 45%; margin-right=20px">
</div>


---

## Функціональність

| **Компонент**        | **Опис**                                             |
|----------------------|------------------------------------------------------|
| encryption.h         | Реалізація шифрування паролів.                       |
| password_manager.h   | Логіка збереження і управління паролями.             |
| ui.h                 | Інтерфейс користувача.                               |
| user.h, user.cpp     | Логіка роботи з даними користувачів.                 |
| main.cpp             | Основна програма, яка запускає весь проєкт.          |


## Архітектура

mermaid
graph TD
    A[Main Program] --> B[UI Module]
    B --> C[User Management]
    B --> D[Password Management]
    C --> E[Encryption Module]

Як запустити
Склонуйте репозиторій:
bash
Копіювати код
git clone https://github.com/nikilodiym/PasswordManager.git
cd PasswordManager
Зберіть проєкт за допомогою CMake:
bash
Копіювати код
mkdir build
cd build
cmake ..
make
Запустіть програму:
bash
Копіювати код
./PasswordManager
Приклад використання
Додавання паролю
Введіть назву сервісу.
Введіть логін і пароль.
Дані збережуться у зашифрованому форматі.
