temps = [223, 245, 216, 229, -9999, 340]

# inline for loop and conditional
new_temps = [temp / 10 if temp != -9999 else 0 for temp in temps]

print(new_temps)
