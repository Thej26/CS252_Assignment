# CS252_Assignment
This repository contains solutions of Problem 2.24 and 3.19 from the textbook Operating System Concepts 10th Edition by Abraham Silberschatz, Peter Baer Galvin and Greg Gagne.

• Name     : Thejaswi.N    

• Roll No. : 201ME159

---


# **[Question 1: 2.24](https://github.com/Thej26/CS252_assignment/tree/main/2.24)**

### Statement

In Section 2.3 (System Calls), we described a program that copies the contents of one file to a destination file. This program works by first prompting the user for the name of the source and destination files. Write this program using either the POSIX or Windows API. Be sure to include all necessary error checking, including ensuring that the source file exists.

Once you have correctly designed and tested the program, if you used a system that supports it, run the program using a utility that traces system calls. Linux systems provide the strace utility, and macOS systems use the dtruss command. (The dtruss command, which actually is a front end to dtrace, requires admin privileges, so it must be run using sudo.) These tools can be used as follows (assume that the name of the executable file is FileCopy: 

Linux: strace ./FileCopy 

macOS: sudo dtruss ./FileCopy 

Since Windows systems do not provide such a tool, you will have to trace through the Windows version of this program using a debugger.


---


# **[Question 2: 3.19](https://github.com/Thej26/CS252_assignment/tree/main/3.19)**

### Statement

Write a C program called time.c that determines the amount of time necessary to run a command from the command line. This program willbe run as "./time <command>" and will report the amount of elapsed time to run the specified command. This will involve using fork() andexec() functions, as well as the gettimeofday() function to determine the elapsed time. It will also require the use of two different IPC mechanisms.

The general strategy is to fork a child process that will execute the specified command. However, before the child executes the command, it will record a timestamp of the current time (which we term “starting time”). The parent process will wait for the child process to terminate. Once the child terminates, the parent will record the current timestamp for the ending time. The difference between the starting and ending times represents the elapsed time to execute the command. The example output below reports the amount of time to run the command ls : 

./time ls 

time.c 

time 

Elapsed time: 0.25422 

As the parent and child are separate processes, they will need to arrange how the starting time will be shared between them. You will write two versions of this program, each representing a differentmethod of IPC. 

The first version will have the child process write the starting time to a region of shared memory before it calls exec(). After the child process terminates, the parent will read the starting time from shared memory. Refer to Section 3.7.1 for details using POSIX shared memory. In that section, there are separate programs for the producer and consumer. As the solution to this problem requires only a single program, the region of shared memory can be established before the child process is forked, allowing both the parent and child processes access to the region of shared memory. 

The second version will use a pipe. The child will write the starting time to the pipe, and the parent will read from it following the termination of the child process.

You will use the gettimeofday() function to record the current timestamp. This function is passed a pointer to a struct timeval object, which contains two members: tv_ sec and tv_usec. These represent the number of elapsed seconds and microseconds since January 1, 1970 (known as the UNIX EPOCH). The following code sample illustrates how this function can be used: 

struct timeval current; 

gettimeofday(&current,NULL); 

// current.tv_sec represents seconds 

// current.tv_usec represents microseconds 

For IPC between the child and parent processes, the contents of the shared memory pointer can be assigned the struct timeval representing the starting time. When pipes are used, a pointer to a struct timeval can be written to—and read from—the pipe.


---

# **[Question 2: 4.22](https://github.com/Thej26/CS252_assignment/tree/main/4.22)**

### Statement

Write a multithreaded program that calculates various statistical values
for a list of numbers. This program will be passed a series of numbers
on the command line and will then create three separate worker threads.
One thread will determine the average of the numbers, the second will
determine the maximum value, and the third will determine the minimum
value. For example, suppose your program is passed the integers

90 81 78 95 79 72 85

The program will report

the average value to be 82, 
the minimum value to be 72  
the maximum value to be 95

The variables representing the average, minimum, and maximum values
will be stored globally. The worker threads will set these values, and
the parent thread will output the values once the workers have exited.
(We could obviously expand this program by creating additional threads
that determine other statistical values, such as median and standard
deviation.)

---


# References
https://github.com/ResearchComputing/Documentation/blob/main/docs/programming/OpenMP-C.md

https://github.com/DevAgrawal04/OperatingSystems_Assignment_CS252


---

# Author

**[@Thej26](https://github.com/Thej26)**



