#include <iostream>
/* C-style comments can contain
multiple lines */
/* Or just one */

/**************
 * You can insert any *, but
 * you can't make comments nested
 */

// C++-style comments can comment one line
/// Another style, for a change
// or, they can
// be strung together

int main()
{
    // comments are removed before preprocessing,
    // so PI is "3.14", not "1//1592653589793238", and "3.14 is a PI constant value"
    // will be printed

    #define PI 3.14//1592653589793238

    std::cout << PI << " is a PI constant value\n";

    // The below code won't be run
    // return 1;

    //The below code will be run
    return 0;
}