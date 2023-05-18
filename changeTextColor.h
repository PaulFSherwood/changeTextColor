// This code is used to output text in different colors and styles

#ifndef CHANGECOLOR_H
#define CHANGECOLOR_H

#include <string>
#include <iostream>

// Define color and style codes
extern const std::string BLACK;
extern const std::string RED;
extern const std::string GREEN;
extern const std::string YELLOW;
extern const std::string BLUE;
extern const std::string MAGENTA;
extern const std::string CYAN;
extern const std::string WHITE;
extern const std::string LIGHT_GRAY;
extern const std::string BOLD_BLACK;
extern const std::string BOLD_RED;
extern const std::string BOLD_GREEN;
extern const std::string BOLD_YELLOW;
extern const std::string BOLD_BLUE;
extern const std::string BOLD_MAGENTA;
extern const std::string BOLD_CYAN;
extern const std::string BOLD_WHITE;
extern const std::string BOLD_LIGHT_GRAY;
extern const std::string BG_BLACK;
extern const std::string BG_RED;
extern const std::string BG_GREEN;
extern const std::string BG_YELLOW;
extern const std::string BG_BLUE;
extern const std::string BG_MAGENTA;
extern const std::string BG_CYAN;
extern const std::string BG_LIGHT_GRAY;
extern const std::string UNDERLINE;
extern const std::string BLINK;
extern const std::string RESET;

// This function prints the given text to the console in the given foreground and background colors
void setTextColor(const std::string& fgColor, const std::string& bgColor, const std::string& text);

// List available colors
void setTextColor();
void listAvailableColors();

// underline
void underline();
// swap foreground and background colors
void inverse();
// blink the text (will not work on most new terminals)
void blink();
// Reset color and bold to default (alt way to reset)
void reset();

#endif
