// You will write all your code for this tutorial here!
#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>   //Imports the core of Butano files.
#include <bn_keypad.h> //Imports keypad functionality into the program.
#include <bn_colors.h> //Imports named colors.

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
            bn::backdrop::set_color(bn::color(0x7FFF));
        }

        // If B is pressed, change the color to Blue.
        if (bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(0x7C00));
        }

        // If R is pressed, change the color to Red.
        if (bn::keypad::r_pressed())
        {
            bn::backdrop::set_color(bn::color(0x001F));
        }

        // If L is pressed, changed the color to Lemon (Yellow).
        if (bn::keypad::l_pressed())
        {
            bn::backdrop::set_color(bn::color(0x03FF));
        }

        // If A is held and B is pressed or vice versa, change the color to Cyan.
        if ((bn::keypad::a_held() && bn::keypad::b_pressed()) || (bn::keypad::b_held() && bn::keypad::a_pressed()))
        {
            bn::backdrop::set_color(bn::color(0x7FE0));
        }

        // If R is held and A is pressed, change the color to Magenta.
        if (bn::keypad::r_held() && bn::keypad::a_pressed())
        {
            bn::backdrop::set_color(bn::color(0x7C1F));
        }

        // If R is held and B is pressed,change the color to Purple.
        if (bn::keypad::r_held() && bn::keypad::b_pressed())
        {
            bn::backdrop::set_color(bn::color(0x4010));
        }

        bn::core::update();
    }
}