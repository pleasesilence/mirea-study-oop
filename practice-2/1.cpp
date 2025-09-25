#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    class User {
        public:
            User(string in_login, string in_password) {
                login = in_login;
                password = in_password;
            }
            string login;
            string password;
    };

    class AuthOperator {
        public:
            void authenticate(vector<User> usersList, int attempts) {
                if (attempts != 0) {
                    setInputValues();
                    User* identificatedUserPoint = checkLogin(usersList);

                    bool isAuthed = checkPassword(identificatedUserPoint);
                    if (isAuthed) {
                        cout << "Введен верный пароль" << endl;
                        return;
                    } else {
                        cout << "Неверный логин или пароль" << endl;
                        attempts--;

                        authenticate(usersList, attempts);
                    }
                } else {
                    cout << "Попыток для входа не осталось" << endl;
                };
            };
            string inputLogin;
            string inputPassword; 

        private:
            User* checkLogin(vector<User> usersList) {
                for (size_t i = 0; i != usersList.size(); i++) {
                    if (usersList[i].login == inputLogin) {
                        return &usersList[i];
                    } else {
                        return nullptr;
                    }
                }
            };
            bool checkPassword(User *userPoint) {
                if (userPoint != nullptr && (*userPoint).password == inputPassword) {
                    return true;
                } else {
                    return false;
                }
            };
            void setInputValues() {
                cout << "=== Введите логин ===" << endl;
                cin >> inputLogin;
                cout << "=== Введите пароль ===" << endl;
                cin >> inputPassword;
            };
    };

    User userA("user_a", "password_a");
    User userB("user_b", "password_b");
    vector<User> usersList = {userA, userB};
    AuthOperator authConsole;

    authConsole.authenticate(usersList, 3);

    return 0;
}