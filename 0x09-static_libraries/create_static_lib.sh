#!/bin/bash

# Compile each .c file into corresponding .o files
for source_file in *.c; do
    gcc -c "$source_file"
done

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Clean up: Remove the .o files after creating the library
rm -f *.o

echo "Static library liball.a created successfully."
