# Color constants
BLACK             = "\033[0;30m"
RED               = "\033[0;31m"
GREEN             = "\033[0;32m"
YELLOW            = "\033[0;33m"
BLUE              = "\033[0;34m"
MAGENTA           = "\033[0;35m"
CYAN              = "\033[0;36m"
WHITE             = "\033[0;97m"
LIGHT_GRAY        = "\033[0;37m"

BOLD_BLACK        = "\033[1;30m"
BOLD_RED          = "\033[1;31m"
BOLD_GREEN        = "\033[1;32m"
BOLD_YELLOW       = "\033[1;33m"
BOLD_BLUE         = "\033[1;34m"
BOLD_MAGENTA      = "\033[1;35m"
BOLD_CYAN         = "\033[1;36m"
BOLD_WHITE        = "\033[1;97m"
BOLD_LIGHT_GRAY   = "\033[1;37m"

BG_BLACK          = "\033[40m"
BG_RED            = "\033[41m"
BG_GREEN          = "\033[42m"
BG_YELLOW         = "\033[43m"
BG_BLUE           = "\033[44m"
BG_MAGENTA        = "\033[45m"
BG_CYAN           = "\033[46m"
BG_LIGHT_GRAY     = "\033[47m"

UNDERLINE         = "\033[4m"
BLINK             = "\033[5m"
RESET             = "\033[0m"

# Output the text with the given color
def set_text_color(fg_color=None, bg_color=None, text=None):# removed due to python not having overloaded funtioncs #fg_color, bg_color, text):
    # No input variables just list the colors available
    if fg_color is None and bg_color is None and text is None:
        list_available_colors()
    # Protect again any other empty arguments and run print with colors
    elif fg_color is not None and bg_color is not None and text is not None:
        colored_text = fg_color + bg_color + text + RESET
        print(colored_text)

# List available colors
def list_available_colors():
    print("Available colors:")
    print("-----------------")
    print(BLACK + "BLACK" + RESET)
    print(RED + "RED" + RESET)
    print(GREEN + "GREEN" + RESET)
    print(YELLOW + "YELLOW" + RESET)
    print(BLUE + "BLUE" + RESET)
    print(MAGENTA + "MAGENTA" + RESET)
    print(CYAN + "CYAN" + RESET)
    print(WHITE + "WHITE" + RESET)
    print(LIGHT_GRAY + "LIGHT_GRAY" + RESET)
    print(BOLD_BLACK + "BOLD_BLACK" + RESET)
    print(BOLD_RED + "BOLD_RED" + RESET)
    print(BOLD_GREEN + "BOLD_GREEN" + RESET)
    print(BOLD_YELLOW + "BOLD_YELLOW" + RESET)
    print(BOLD_BLUE + "BOLD_BLUE" + RESET)
    print(BOLD_MAGENTA + "BOLD_MAGENTA" + RESET)
    print(BOLD_CYAN + "BOLD_CYAN" + RESET)
    print(BOLD_WHITE + "BOLD_WHITE" + RESET)
    print(BG_BLACK + "BG_BLACK" + RESET)
    print(BG_RED + "BG_RED" + RESET)
    print(BG_GREEN + "BG_GREEN" + RESET)
    print(BG_YELLOW + "BG_YELLOW" + RESET)
    print(BG_BLUE + "BG_BLUE" + RESET)
    print(BG_MAGENTA + "BG_MAGENTA" + RESET)
    print(BG_CYAN + "BG_CYAN" + RESET)
    print(BG_LIGHT_GRAY + "BG_LIGHT_GRAY" + RESET)

# Set underline
def underline():
    print(UNDERLINE)

# Swap foreground and background colors
def inverse():
    print("\x1B[7m")

# Blink the text (may not work on all terminals)
def blink():
    print(BLINK)

# Reset color and bold to default
def reset():
    print(RESET)
