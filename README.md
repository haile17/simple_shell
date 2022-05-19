# simple_shell

# A simple C shell project

## Description

This is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh). Additional functions are also included. This program was written entirely in C as a milestone project for Alx-Holberton School.

## Installation

Clone this repository into your working directory. Files should be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -Wno-format.

## Usage

After compilation, the resulting program can run stand-alone, either in interactive or non-interactive mode.

## Interactive Mode

In interactive mode, simply run the program and wait for the prompt to appear. From there, you can type commands freely, exiting with either the "exit" command or ctrl-D.

## Non-Interactive Mode

In non-interactive mode, echo your desired command and pipe it into the program like this:

echo "ls" | ./shell
In non-interactive mode, the program will exit after finishing your desired command(s).

This is the man page which contains all functions and descriptions of all the functions used in this Simple shell project. To access this page, Do:

## AUTHORS

This file contains the details of all the individuals that contributed to this shell project.

## Features

1. DIsplay a prompt and wait for the user to type a command. A command-line always ends with a new line.
2. The prompt is displayed again each time a command has been executed.
3. The command lines are simple, no semicolons, no pipes, no redirections, or any other advanced features.
4. The command lines are made only of one word.No arguement will be passed to the programs.
5.If an executable is not found the shell prints an error message and displayu the prompt again.
## Included Files 
- main.c - functions for calling the shell and initializing the shell struct
- shell.c - functions for running the basic shell logic
- shell_helpers.c - functions for helping the shell run
- split_string.c - functions for splitting string from the user
- string_helpers1.c - functions for manipulating strings
- string_helpers2.c - functions for manipulating strings
- built_ins.c - functions for built-ins
- built_in_helpers.c - functions for helping the built-in functions
- help.c - functions for the help built-in
- help2.c - functions for the help built-in
- cd.c - functions for the cd built-in
- cd2.c - functions for the cd built-in
- \_getenv.c - functions for getting elements from the environment
- env.c - functions for the env, setenv, and unsetenv built-ins
- llfuncs1.c - linked list functions
- llfuncs2.c - linked list functions
- expansions.c - functions for dealing with the $? and $\$ expansions
- check_path.c - functions for checking the path of an executable
- error_handler.c - functions for dealing with errors
- free.c - functions for freeing allocated memory
- main.h - header file

### Credits

All code written by Haile17 and AndulaemGeta
