# Holberton School - Simple Shell Project

![img](https://media-exp1.licdn.com/dms/image/C5612AQFpOkcCsn93wg/article-cover_image-shrink_600_2000/0/1618578265410?e=2147483647&v=beta&t=qT6ByTN7vsoPj3aKF6XNy3F4Oc46v6BK4HxCP4g2kXY)

This is a collaboration project between three students at [Holberton School](https://www.holbertonschool.fr/?gclid=EAIaIQobChMIiaSxvunq-wIVw6fVCh2j8AzIEAAYASAAEgLXkPD_BwE) from cohort #19. This project is about to create our own simple shell.

## Description
This repo has a simple implementation of the standard command interpreter for the system that receives commands from the standard input or a file. This version has many features that make it similar in some aspects to the standard shell, but it is a simple program to learn its operation. Only some standard shell features have been incorporated.

#### Basic lifetime of a shell

1 - Startup the shell. 

2 - Wait for user input. 

3 - Parse user input. 

4 - Execute the command and return the result. 

5 - Go back to step 2. 

You could terminate the shell anytime, just type in the prompt the exit command. 

## Resources
### Read or Watch:

- [Unix Shell](https://en.wikipedia.org/wiki/Unix_shell)
- [Thompson shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [Ken Thompson](https://intranet.hbtn.io/rltoken/Pzs_A3Wo6LTHE8WX_uKiWg)

### Man or Help

- [sh](https://man7.org/linux/man-pages/man1/sh.1p.html) (Run `sh` as well)

## Requirements
> All files were created and compiled on `Ubuntu 20.04 LTS` using `GCC`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Files Usage

| File Name | Description |
|:---------:|:-----------:|
|[`check_path.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/check_path.c)|function that checks if the file is in the path.|
|[`exec.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/exec.c)|function that executes the commands|
|[`get_env.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/get_env.c)|function that gets the path|
|[`getline.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/getline.c)|function that reads the user input|
|[`main.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/main.c)|function that starts the shell|
|[`print_env`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/print_env.c)|function that prints the environment variable|
|[`shell.h`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/shell.h)|contain all our the prototypes used as well as containing our struct and the standard libraries used.|
|[`signal.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/signal.c)|function that checks if a signal is in input|
|[`split_env.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/split_env.c)|function that tokenizes the path|
|[`split_line.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/split_line.c)|function that tokenize the line|
|[`_putchar.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/_putchar.c)|function that writes the character c to stdout|
|[`_strcat.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/_strcat.c)|function that concatenates two strings|
|[`_strcmp.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/_strcmp.c)|function that compares the size of two strings|
|[`_strcpy.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/_strcpy.c)|function that copies the string|
|[`_strlen.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/_strlen.c)|function that returns the length of a string|
|[`_strncmp.c`](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/_strncmp.c)|function that compares n characters of two strings|

## List Of Allowed Functions And System Calls

     access (man 2 access)
     chdir (man 2 chdir)
     close (man 2 close)
     closedir (man 3 closedir)
     execve (man 2 execve)
     exit (man 3 exit)
     _exit (man 2 _exit)
     fflush (man 3 fflush)
     fork (man 2 fork)
     free (man 3 free)
     getcwd (man 3 getcwd)
     getline (man 3 getline)
     getpid (man 2 getpid)
     isatty (man 3 isatty)
     kill (man 2 kill)
     malloc (man 3 malloc)
     open (man 2 open)
     opendir (man 3 opendir)
     perror (man 3 perror)
     printf (man 3 printf)
     fprintf (man 3 fprintf)
     vfprintf (man 3 vfprintf)
     sprintf (man 3 sprintf)
     putchar (man 3 putchar)
     read (man 2 read)
     readdir (man 3 readdir)
     signal (man 2 signal)
     stat (__xstat) (man 2 stat)
     lstat (__lxstat) (man 2 lstat)
     fstat (__fxstat) (man 2 fstat)
     strtok (man 3 strtok)
     wait (man 2 wait)
     waitpid (man 2 waitpid)
     wait3 (man 2 wait3)
     wait4 (man 2 wait4)
     write (man 2 write)

## Installation

To install our `simple_shell`, you have to clone our repository :

     $ git clone https://github.com/MathieuMorel62/holbertonschool-simple_shell.git

## Compilation

Your shell will be compiled this way:

     gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

Your shell will be executable this way:

     ./hsh
     
## Testing

Your shell should work like this in interactive mode:
```c
     $ ./hsh
     ($) /bin/ls
     hsh main.c shell.c
     ($)
     ($) exit
     $

But also in non-interactive mode:

     $ echo "/bin/ls" | ./hsh
     hsh main.c shell.c test_ls_2
     $
     $ cat test_ls_2
     /bin/ls
     /bin/ls
     $
     $ cat test_ls_2 | ./hsh
     hsh main.c shell.c test_ls_2
     hsh main.c shell.c test_ls_2
     $
```
## Examples
- List files using `ls`:

      #cisfun$ ls
      AUTHORS                 _strcmp.c               check_path.c            hsh                     shell.h
      README.md               _strcpy.c               exec.c                  main.c                  signal.c
      _putchar.c              _strlen.c               get_env.c               man_simple_shell        split_env.c
      _strcat.c               _strncmp.c              getline.c               print_env.c             split_line.c
      
- List files using `ls -la` and `CTRL-C` to stop the program:
```c
      #cisfun$ ls -la
      total 224
      drwxr-xr-x@ 23 Holberton  staff    736  8 déc 20:12 .
      drwxr-xr-x   5 Holberton  staff    160  8 déc 17:13 ..
      drwxr-xr-x@ 15 Holberton  staff    480  8 déc 19:04 .git
      -rw-r--r--@  1 Holberton  staff    214  8 déc 17:13 AUTHORS
      -rw-r--r--@  1 Holberton  staff   1763  8 déc 17:13 README.md
      -rw-r--r--@  1 Holberton  staff    247  8 déc 17:13 _putchar.c
      -rw-r--r--@  1 Holberton  staff    388  8 déc 17:13 _strcat.c
      -rw-r--r--@  1 Holberton  staff    338  8 déc 17:13 _strcmp.c
      -rw-r--r--@  1 Holberton  staff    342  8 déc 17:13 _strcpy.c
      -rw-r--r--@  1 Holberton  staff    200  8 déc 17:13 _strlen.c
      -rw-r--r--@  1 Holberton  staff    396  8 déc 18:04 _strncmp.c
      -rw-r--r--@  1 Holberton  staff    802  8 déc 18:51 check_path.c
      -rw-r--r--@  1 Holberton  staff    704  8 déc 19:01 exec.c
      -rw-r--r--@  1 Holberton  staff    362  8 déc 19:01 get_env.c
      -rw-r--r--@  1 Holberton  staff    431  8 déc 18:54 getline.c
      -rwxr-xr-x@  1 Holberton  staff  34784  8 déc 20:12 hsh
      -rw-r--r--@  1 Holberton  staff    715  8 déc 18:56 main.c
      -rw-r--r--@  1 Holberton  staff    873  8 déc 17:13 man_simple_shell
      -rw-r--r--@  1 Holberton  staff    269  8 déc 19:02 print_env.c
      -rw-r--r--@  1 Holberton  staff    756  8 déc 19:03 shell.h
      -rw-r--r--@  1 Holberton  staff    199  8 déc 17:13 signal.c
      -rw-r--r--@  1 Holberton  staff    540  8 déc 19:02 split_env.c
      -rw-r--r--@  1 Holberton  staff    535  8 déc 19:02 split_line.c
      #cisfun$ ^C
      Hasta la vista, baby :)
```
- write `exit` or `CTRL-D` to stop and return to the original shell

      #cisfun$ exit

## Man Page
To enter the manual page for the `simple_shell`, type this command:

     man ./man_simple_shell

## Test Valgrind

     valgrind --tool=memcheck --leak-check=yes --track-origins=yes --show-leak-kinds=all -s ./hsh
     
## Flowchart

![flowchart](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/flowchart.drawio.png)
-------------------------------
# Task To Realize The Project

#### [0. README, man, AUTHORS](https://github.com/MathieuMorel62/holbertonschool-simple_shell/blob/main/man_simple_shell)
- Write a `README`
- Write a `man` for your shell.
- You should have an `AUTHORS` file at the root of your repository, listing all individuals having contributed content to the repository. Format, see [Docker](https://github.com/moby/moby/blob/master/AUTHORS)

### [1. Betty Would Be Proud](https://github.com/MathieuMorel62/holbertonschool-simple_shell)
- Write a beautiful code that passes the Betty checks

### [2. Simple shell 0.1](https://github.com/MathieuMorel62/holbertonschool-simple_shell)
Write a UNIX command line interpreter.

- Usage: `simple_shell`

Your Shell should:

- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- You have to handle the “end of file” condition (`Ctrl+D`)

You don’t have to:

- use the `PATH`
- implement built-ins
- handle special characters : `"`, `'`,` \`, `*`, `&`,`#`
- be able to move the cursor
- handle commands with arguments

`execve` will be the core part of your Shell, don’t forget to pass the environ to it…

### [3. Simple shell 0.2](https://github.com/MathieuMorel62/holbertonschool-simple_shell)

Simple shell 0.1 +

- Handle command lines with arguments

### [4. Simple shell 0.3](https://github.com/MathieuMorel62/holbertonschool-simple_shell)

Simple shell 0.2 +

- Handle the `PATH`
- `fork` must not be called if the command doesn’t exist

### [5. Simple shell 0.4](https://github.com/MathieuMorel62/holbertonschool-simple_shell)

Simple shell 0.3 +

- Implement the `exit` built-in, that exits the shell
- Usage: `exit`
- You don’t have to handle any argument to the built-in `exit`

### [6. Simple shell 1.0](https://github.com/MathieuMorel62/holbertonschool-simple_shell)

Simple shell 0.4 +

- Implement the `env` built-in, that prints the current environment

----------------------------------
## Authors
- `Mathieu MOREL` - [Contact](https://github.com/MathieuMorel62)
- `Caroline CHOCHOY` - [Contact](https://github.com/CaroChoch)
- `Ricardo Kollo` - [Contact](https://github.com/kerrodia)
----------------------------------
