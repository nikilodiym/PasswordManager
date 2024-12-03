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

![Скриншот1](![image](https://github.com/user-attachments/assets/f08f4094-84aa-426e-bd8f-2b97c37fc874)
![Скриншот2](https://via.placeholder.com/800x400?text=Screenshot+2)

---

## Функціональність

| **Компонент**        | **Опис**                                             |
|----------------------|------------------------------------------------------|
| encryption.h         | Реалізація шифрування паролів.                       |
| password_manager.h   | Логіка збереження і управління паролями.             |
| ui.h                 | Інтерфейс користувача.                               |
| user.h, user.cpp     | Логіка роботи з даними користувачів.                 |
| main.cpp             | Основна програма, яка запускає весь проєкт.          |

---

## Архітектура

```mermaid
graph TD
    A[Main Program] --> B[UI Module]
    B --> C[User Management]
    B --> D[Password Management]
    C --> E[Encryption Module]
