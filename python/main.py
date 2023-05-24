import changeTextColor as ct
                             
# Test the color with normal white text
ct.reset()
print("This is normal white text")

# Test the color with normal red text
ct.set_text_color(ct.RED, ct.BG_BLACK, "This is normal red text")

print(ct.BOLD_YELLOW + ct.BG_BLACK + "This is normal YELLOW text")

ct.set_text_color(ct.BOLD_BLUE, ct.BG_BLACK, "This is normal BLUE text")
print(ct.GREEN + ct.BG_BLACK + "This is normal GREEN text")

ct.reset()
print("This is normal white text")

ct.set_text_color()
