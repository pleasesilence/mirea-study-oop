#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

int maxx(int a, int b) {
  return (a < b) ? b : a;
}

int main() {

  setlocale(LC_ALL, "");

  class User {
    public:
      unsigned get_age_in_months() {
        return (age_in_months * 30 + age_in_years * 365) / 30;
      }
      unsigned get_age_in_days() {
        return (age_in_months * 30 + age_in_years * 365);
      }
      std::wstring get_name() {
        return name;
      }
      std::wstring get_surname() {
        return surname;
      }

      User(std::wstring n, std::wstring s, unsigned y, unsigned m) {
        name = n;
        surname = s;
        age_in_years = y;
        age_in_months = m;
      }

    private:

      std::wstring name;
      std::wstring surname;
      unsigned age_in_years;
      unsigned age_in_months;
  };

  std::vector<User> list_of_users;
  
  for (unsigned i = 0; i < 3; i++) {
    std::wcout << L"=== Пользователь №" << i + 1 << L" ===\n";

    std::wstring name, surname;
    unsigned years, months;

    std::wcout << L"Введите имя: ";
    std::wcin >> name;

    std::wcout << L"Введите фамилию: ";
    std::wcin >> surname;

    std::wcout << L"Введите возраст (в годах): ";
    std::wcin >> years;

    std::wcout << L"Введите возраст (в месяцах): ";
    std::wcin >> months;

    User user(name, surname, years, months);
    list_of_users.push_back(user);

    std::wcout << std::endl;
  };

  int name_max_length, surname_max_length, age_max_length;

  name_max_length = maxx(
    maxx(list_of_users[0].get_name().size(), list_of_users[1].get_name().size()), 
    list_of_users[2].get_name().size());

  surname_max_length = maxx(
    maxx(list_of_users[0].get_surname().size(), list_of_users[1].get_surname().size()), 
    list_of_users[2].get_surname().size());

  age_max_length = maxx(
    maxx(std::to_string(list_of_users[0].get_age_in_months()).size(), std::to_string(list_of_users[1].get_age_in_days()).size()),
    std::to_string(list_of_users[2].get_age_in_days()).size());

  std::wcout
    << std::left << std::setw(name_max_length + 10) << L"Имя"
    << std::left << std::setw(surname_max_length + 10) << L"Фамилия"
    << std::right << std::setw(age_max_length + 10) << L"Месяца"
    << std::right << std::setw(age_max_length + 10) << L"Дни"
    << std::endl;


  for (User user : list_of_users) {
    std::wcout
      << std::left << std::setw(name_max_length + 10) << user.get_name()
      << std::left << std::setw(surname_max_length + 10) << user.get_surname()
      << std::right << std::setw(age_max_length + 10) << user.get_age_in_months()
      << std::right << std::setw(age_max_length + 10) << user.get_age_in_days()
      << std::endl;

  }
}