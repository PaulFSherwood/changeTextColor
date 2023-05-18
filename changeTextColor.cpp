#include "changeTextColor.h"

const std::string BLACK             = "\033[0;30m";
const std::string RED               = "\033[0;31m";  
const std::string GREEN             = "\033[0;32m";
const std::string YELLOW            = "\033[0;33m";
const std::string BLUE              = "\033[0;34m";
const std::string MAGENTA           = "\033[0;35m";
const std::string CYAN              = "\033[0;36m";
const std::string WHITE             = "\033[0;97m";
const std::string LIGHT_GRAY        = "\033[0;37m";

const std::string BOLD_BLACK        = "\033[1;30m";
const std::string BOLD_RED          = "\033[1;31m";
const std::string BOLD_GREEN        = "\033[1;32m";
const std::string BOLD_YELLOW       = "\033[1;33m";
const std::string BOLD_BLUE         = "\033[1;34m";
const std::string BOLD_MAGENTA      = "\033[1;35m";
const std::string BOLD_CYAN         = "\033[1;36m";
const std::string BOLD_WHITE        = "\033[1;97m";
const std::string BOLD_LIGHT_GRAY   = "\033[1;37m";

const std::string BG_BLACK          = "\033[40m";
const std::string BG_RED            = "\033[41m";
const std::string BG_GREEN          = "\033[42m";
const std::string BG_YELLOW         = "\033[43m";
const std::string BG_BLUE           = "\033[44m";
const std::string BG_MAGENTA        = "\033[45m";
const std::string BG_CYAN           = "\033[46m";
const std::string BG_LIGHT_GRAY     = "\033[47m";

const std::string UNDERLINE         = "\033[4m";
const std::string BLINK             = "\033[5m";
const std::string RESET             = "\033[0m";


// output the text with the given color
void setTextColor(const std::string& fgColor, const std::string& bgColor, const std::string& text) {
    std::cout << fgColor << bgColor << text << RESET;
}
// run color list if no argument is given
void setTextColor() {
    listAvailableColors();
}

void listAvailableColors() {
    std::cout << "Available colors:" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << BLACK << "BLACK" << RESET << std::endl;
    std::cout << RED << "RED" << RESET << std::endl;
    std::cout << GREEN << "GREEN" << RESET << std::endl;
    std::cout << YELLOW << "YELLOW" << RESET << std::endl;
    std::cout << BLUE << "BLUE" << RESET << std::endl;
    std::cout << MAGENTA << "MAGENTA" << RESET << std::endl;
    std::cout << CYAN << "CYAN" << RESET << std::endl;
    std::cout << WHITE << "WHITE" << RESET << std::endl;
    std::cout << LIGHT_GRAY << "LIGHT_GRAY" << RESET << std::endl;
    std::cout << BOLD_BLACK << "BOLD_BLACK" << RESET << std::endl;
    std::cout << BOLD_RED << "BOLD_RED" << RESET << std::endl;
    std::cout << BOLD_GREEN << "BOLD_GREEN" << RESET << std::endl;
    std::cout << BOLD_YELLOW << "BOLD_YELLOW" << RESET << std::endl;
    std::cout << BOLD_BLUE << "BOLD_BLUE" << RESET << std::endl;
    std::cout << BOLD_MAGENTA << "BOLD_MAGENTA" << RESET << std::endl;
    std::cout << BOLD_CYAN << "BOLD_CYAN" << RESET << std::endl;
    std::cout << BOLD_WHITE << "BOLD_WHITE" << RESET << std::endl;
    std::cout << BG_BLACK << "BG_BLACK" << RESET << std::endl;
    std::cout << BG_RED << "BG_RED" << RESET << std::endl;
    std::cout << BG_GREEN << "BG_GREEN" << RESET << std::endl;
    std::cout << BG_YELLOW << "BG_YELLOW" << RESET << std::endl;
    std::cout << BG_BLUE << "BG_BLUE" << RESET << std::endl;
    std::cout << BG_MAGENTA << "BG_MAGENTA" << RESET << std::endl;
    std::cout << BG_CYAN << "BG_CYAN" << RESET << std::endl;
    std::cout << BG_LIGHT_GRAY << "BG_LIGHT_GRAY" << RESET << std::endl;
}


// set underline
void underline() {
    std::cout << UNDERLINE;
}
// swap foreground and background colors
void inverse() {
    std::cout << "\x1B[7m";
}
// blink the text (will not work on most new terminals)
void blink() {
    std::cout << BLINK;
}
// Reset color and bold to default (alt way to reset)
void reset() {
    std::cout << RESET;
}
