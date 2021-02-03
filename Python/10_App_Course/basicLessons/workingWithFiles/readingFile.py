# file is read from hard disk and loaded to memory as an object, it is a good practice to assign the file object to a
# variable. Path to file is passed as argument.
fruit_file = open("fruit.txt")

# the cursor starts at the the first character, traversing through the file, and stops after the last character.
# this will only print contents once
print(fruit_file.read())

# you can save the contents to a variable for reuse
content = fruit_file.read()

# close the file
fruit_file.close()

print(content)

# using with syntax to open and manipulate file
with open("fruit.txt") as fruit_file2:
    content2 = fruit_file2.read()

print(content2)
