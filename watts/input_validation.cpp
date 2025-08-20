//replace cin >> function with the following 

string input;
bool valid = false;

while (!valid) {
    cout << opt4;
    cin >> input;

    // Check if input is a digit and within range
    if (input.length() == 1 && isdigit(input[0])) {
        function = input[0] - '0';
        if (function >= 1 && function <= 3) {
            valid = true;
        } else {
            cout << op_err;
        }
    } else {
        cout << op_err;
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }
}
 
