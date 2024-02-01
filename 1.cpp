#include <iostream>
using namespace std;

class Main {
protected:
    int A;
    int B;
    int C;

public:
    void user() {
        cout << "Enter number A: ";
        cin >> A;
        cout << "Enter number B: ";
        cin >> B;
    }

    void user1() {
        try {
            if (B == 0) {
                throw B;
            } else {
                C = A / B;
                cout << "Division is: " << C << endl;
            }
        } catch (int val) {
            if (val == 0) {
                cout << "Can't divide by zero...." << endl;
            }
        }
    }
};

int main() {
    Main m;
    m.user();
    m.user1();
    return 0;
}
