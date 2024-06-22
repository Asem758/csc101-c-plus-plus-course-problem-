#include <iostream>
#include <iomanip>

using namespace std;

int fact(int fact_input) {

    int orig_input = fact_input;
    int loop_length = fact_input - 1;

    if(fact_input == 1 || fact_input == 0) {

        return 1;
    }

    for(int i=1; i != loop_length; i++) {

        fact_input = fact_input - 1;

        orig_input = orig_input * fact_input;

    }

    return orig_input;
}

double power(double base_input, double expo_input) {

    double power_output = base_input;

    if(expo_input == 0) {

        return 1;
    }

    if(base_input == 0) {

        return 0;
    }

    for(int i=0; i < expo_input -1; i++){

        power_output = power_output * base_input;

    }
    return power_output;

}

double cos(double user_input) {

    double sequence[5] = { 0 };
    double cos_value = 0;
    double variable_x = 0;

    int alter_one = 0;
    int fact_denom = 0;
    int loop_lim = sizeof(sequence)/sizeof(double);

    for(int n=0; n < loop_lim; n++) {

        alter_one = power(-1, n);
        variable_x = power(user_input, (n*2));
        fact_denom = fact((n*2));

        sequence[n] =  alter_one * variable_x / fact_denom;
        cout << "Element[" << n << "] is: " << sequence[n] << endl;
    }


    for(int i=0; i < loop_lim; i++) {

        cos_value = cos_value + sequence[i];

    }

    return cos_value;
}

int main() {

    double user_input = 0;
    double cos_output;

    cout << "For cox(x) enter the value of x: " << endl;
    cin >> user_input;
    cos_output = cos(user_input);

    cout << "Output is: " << cos_output << endl;

}
