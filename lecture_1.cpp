#include <iostream>
#include <string>


using namespace std;

int define_variant(string last_name, int variant_amount) {
    int first_letter = (int)last_name[0];
    return first_letter % variant_amount;
}

int main() {
    string last_name;
    cout << "Enter your last name: \n";
    cin >> last_name;

    int variant_amount = 0;
    cout << "Enter the amount of variants: \n";
    cin >> variant_amount;

    int u_variant = define_variant(last_name, variant_amount);

    cout << "Your variant is " << u_variant << "\n";
    return 0;
}
