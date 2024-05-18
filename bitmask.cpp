#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int flag_register = 0b0011;//int flag register = 11;
    int the_mask = 0b1010; // int the_mask = 1 o 0xd;
    
    //// Task 1 - Check the state of your bit: you want to find out the value of your bit
    
    // cout << "flag_register is: " << flag_register << endl;
    // cout << "the_mask is: " << the_mask << endl;

    // flag_register &= flag_register & the_mask;
    // cout << "flag_register is: " << flag_register;

    //// Task 2 - Reset your bit 3:   you assign a zero to the bit while all other bits remain unchanged
    // flag_register &= flag_register & ~the_mask;
    // cout << "flag_register is: " << flag_register;

    //// Task 3 - Set your bit : you assign a “one” to your bit while all the remaining bits must remain unchanged
    // flag_register |= flag_register | the_mask;
    // cout << "flag_register is: " << flag_register;

    //// Task 4 - Negate your bit: you replace a “one” with a “zero” and a “zero” with a “one”
    the_mask = flag_register ^ the_mask;
    cout << "the_masks: " << the_mask;
}