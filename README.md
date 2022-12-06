.	Holberton School - Holberton Shell(hsh)

Code a simple shell for Holberton School. This assignment incorporates all topics covered so far, and marks the conclusion of the section of the course that is strictly about learning C programming.

.	Prerequisites

	Only use the following functions and system calls:

access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
fork (man 2 fork)
free (man 3 free)
fstat (man 2 fstat)
getcwd (man 3 getcwd)
getline (man 3 getline)
kill (man 2 kill)
lstat (man 2 lstat)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (man 2 stat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
_exit (man 2 _exit)

.	Installing

Compile like this:

gcc -Wall -Wextra -Werror -pedantic -g *.c -o hsh

The -g is for tracing Valgrind errors

.	Testing

To test, after cloning this repository, use the following to compile the program. gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

When you run ./hsh you will see a prompt represented by the dollar sign '$' ready for your command. Or for non-interactive mode, after compiling, you can use the following to list the items in the directory (for example). echo "/bin/ls" | ./hsh

.	Environment

Created and tested with Ubuntu 14.04 LTS

Compiled with GCC 4.8.4 with flags: -Wall -Werror -Wextra -pedantic -std=gnu89

.	Features

cd - built-in to change directory

cd [DIRECTORY]

env - built-in to print the current environment

env

exit - built-in to exit the shell

exit

.	Authors

	Mathieu
	Caroline
	Ricardo
