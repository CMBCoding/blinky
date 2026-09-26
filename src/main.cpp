// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>   //Imports the core of Butano files.
#include <bn_keypad.h> //Imports keypad functionality into the program.

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(15, 10, 15));

    // This loops serves as 'refresh' loop, that keeps the program from ending.
    while (true)
    {
        // Keypad functionality.
        /*Note: We put the keypad functions here, in the refresh loop
        so that EVERY FRAME, the game is checking them */

        // If A is pressed, change the color to Alabaster (White).
        if (bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(30, 30, 30));
        }

        // If B is pressed, change the color to Blue.
        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(0, 0, 30));
        }

        // If A and B are pressed together, change the color to Purple.
        if (bn::keypad::a_pressed() && bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(20, 0, 20));
        }

        // If R is pressed, change the color to Red.

        // If L is pressed, changed the color to Lemon (Yellow).

        // If

        bn::core::update();
    }
}