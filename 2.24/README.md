# Copying File Contents And Tracing System Calls using Strace

## Requirements
- Linux Based Kernel (for strace)
- GNU Compiler Collection (GCC)


For an Installation Guide, kindly check the References

--- 

## Compiling the File

To compile the file, run the following command:
>  gcc -o Filecopy Filecopy.c

Here, Filecopy is the name of the object file given by us, and Filecopy.c is the file we're trying to compile.

---
## Using Strace

Note: Strace works only on Linux Based Terminals, for installation guides kindly check the References

We use strace as follows:
> strace ./Filecopy

It'll output all of the system calls onto the terminal

To store this raw terminal output, we can use the command:
> strace -o log_raw.txt ./Filecopy

The raw log terminal will now be saved as log_raw.txt

Strace can also output the count number of system calls:
>strace -c ./Filecopy

Now we can export this terminal output to a file as follows:
> strace -o log_table.txt -c ./Filecopy

This saves our tabular terminal output to a file named log_table.txt

---
## System Calls Description
#### The following System Calls have been described in the order of their occurrence
1. ### [execve](https://man7.org/linux/man-pages/man2/execve.2.html)
- execute program
2.  ### [brk](https://man7.org/linux/man-pages/man2/sbrk.2.html)
- change data segment size
3. ### [arch_prctl](https://man7.org/linux/man-pages/man2/arch_prctl.2.html)
- set architecture-specific thread state
4. ### [access](https://man7.org/linux/man-pages/man2/access.2.html)
- checks whether the calling process can access the file pathname.
5. ### [openat](https://linux.die.net/man/2/openat)
- open a file relative to a directory file descriptor
6. ### [fstat](https://man7.org/linux/man-pages/man2/lstat.2.html)
- These functions return information about a file, in the buffer
       pointed to by statbuf.  No permissions are required on the file
       itself, but—in the case of stat(), fstatat(), and lstat()—execute
       (search) permission is required on all of the directories in
       pathname that lead to the file.
7. ### [mmap](https://man7.org/linux/man-pages/man2/mmap.2.html)
- map files or devices into memory 
8. ### [close](https://man7.org/linux/man-pages/man2/close.2.html)
-  close a file descriptor
9. ### [read](https://man7.org/linux/man-pages/man2/read.2.html)
- read from a file descriptor
10. ### [pread64](https://linux.die.net/man/2/pread64)
- read from a file descriptor at a given offset 
11. ### [mprotect](https://man7.org/linux/man-pages/man2/mprotect.2.html)
- set protection on a region of memory
12. ### [munmap](https://pubs.opengroup.org/onlinepubs/000095399/functions/munmap.html)
- unmap files or devices into memory 
13. ### [getpid](https://man7.org/linux/man-pages/man2/getppid.2.html)
- get process identification
14. ### [write](https://man7.org/linux/man-pages/man2/write.2.html)
- write to a file descriptor
15. ### [lseek](https://man7.org/linux/man-pages/man2/lseek.2.html)
- reposition read/write file offset
---
## Additional Hardware Information

### Kernel Version
Kernel version can be found using the following command in linux based terminals:
> uname -r 

> 5.10.16.3-microsoft-standard-WSL2

### Processor

> Intel(R) Core(TM) i5-10300H CPU @ 2.50GHz   2.50 GHz

---
## References
1. [C Code for copying and pasting contents of a file](https://www.geeksforgeeks.org/c-program-copy-contents-one-file-another-file/ "GeeksForGeeks")
2. [Strace commands in Linux](https://www.geeksforgeeks.org/strace-command-in-linux-with-examples/ "GeeksForGeeks")
3. [System Calls Documentation](https://man7.org/linux/man-pages/man2/syscalls.2.html "man7.org") 
4. [OpenMP and GCC Installation Guide](https://www.geeksforgeeks.org/openmp-introduction-with-installation-guide/ "GeeksForGeeks")

---
## Author
[@Thej26](https://github.com/Thej26)

For any queries or feedback, please feel free to reach out.
