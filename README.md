# CS252_Assignment
This repository contains solutions of Problem 2.24 and 4.22 from the textbook Operating System Concepts 10th Edition by Abraham Silberschatz, Peter Baer Galvin and Greg Gagne.

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

Note: All the information written in this project repo is specific to Ubuntu operating system

---

# Author

**[@Thej26](https://github.com/Thej26)**



