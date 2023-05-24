#include "changeTextColor.h"

int main() {
    
    // Test the color with normal white text
    reset();
    std::cout << "This is normal white text" << std::endl;

    // Test the color with normal red text
    setTextColor(RED, BLACK, "This is normal red text");

    // Test the color with bold red text
    setTextColor(RED, BLACK, "This is bold red text");

    // Test blink the text
    blink();
    setTextColor(RED, BLACK, "This is blinking text");

    underline();
    // inverse the text
    inverse();
    setTextColor(WHITE, BLACK, "This is inverse text");
    
    reset();
    std::cout << std::endl;
    // reset();
    std::cout << "\033[5m\033[38;5;94mTEXT";

    // Test each color
    // Test black
    setTextColor(BLACK, WHITE, "This is normal black text");
    // Test bold black
    setTextColor(BLACK, YELLOW, "This is bold black text");


    std::cout << BLUE << "This is normal blue text" << RESET << std::endl;
    std::cout << BOLD_BLUE << "This is bold blue text" << RESET << std::endl;
    std::cout << GREEN << "This is normal green text" << RESET << std::endl;
    std::cout << BOLD_GREEN << "This is bold green text" << RESET << std::endl;



    std::cout << "\033[0;7m\033[1;36m" << "This is normal green text" << "\033[0m" << std::endl;

    std::cout << "\033[1;36m" << "This is normal green text" << "\033[0m" << std::endl;
    std::cout << "\033[1;36m\033[46m" << "This is normal green text" << "\033[0m" << std::endl;

    setTextColor();

    // Reset the text
    reset();

    return 0;
}
