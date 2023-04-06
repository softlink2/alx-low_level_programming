<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" width=150 height=150/>       

## About

This repository includes projects built for lower-level programming. Some
interesting things to learn about are:

#

### Why C programming is awesome


#

### Who invented C

Dennis Ritchie invented C at Bell Labs. C was initially used to rewrite the
UNIX kernel, which was written in mostly non-portable assembly code on the
PDP-11. This allowed the UNIX kernel to become cross-platform.

#

### Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds

Dennis Ritchie and Brian Kernighan both worked at Bell Labs, and authored the
book `The C Programming Language` in 1978. It was later updated in 1988, and
has gone on to be one of the most successful computer science books of all
time. This is where the famous introductory `hello world` was first introduced.

<img src="https://www.cs.mcgill.ca/~rwest/wikispeedia/wpcd/images/39/3956.jpg"
alt="Dennis Ritchie and Brian Kernighan"/>

Linus Torvalds was a Computer Science student in Finland when he was learning
C sometime in 1991, and as a personal project he created a "[new free operating
system
kernel](http://groups.google.com/group/comp.os.minix/msg/b813d52cbc5a044b)" modeled after minix on the 386 architecture.

<img src="https://i.stack.imgur.com/YNBpv.gif" alt="Linus Torvalds" />

#

### What happens when you type `gcc main.c`

Several things happen when we run a C program through the GNU C Compiler
(gcc). The first thing that happens is that the code is preprocessed, which
removes any comments and adds header file code and macros to the file itself.

We can observe the preprocessor step using `gcc -E main.c`.

This then passes to the compiler proper, which generates assembly
code for `main.c`. By default this would be output as `main.s` after running
`gcc -S main.c`. The assembly code generated may differ wildly, depending on
what sort of CPU you're running.

In order to convert the assembly code into object code, gcc compiles (or
assembles) the source files. The object code is analogous to machine code, or
binary code. This is the lowest level of programming detail visible to a
programmer. We can generate object code using `gcc -c main.c`, and by default
will have a `main.o` file as output.

The last step is the linker, which takes our object code and any library
programs to generate a single executable file. The output executable file is
called `a.out`.

#

### What is an entry point

An entry point is defined as the program to be first called at startup. 
According to the C standard (section 5.1.2.2.1), the function called at start
up will be known as `main`.

Interesting to note that for freestanding environments (things like embedded
systems where C execution takes places without an operating system) the name
and type of function called at startup is defined by the implementation being
used. 

One may use certain tricks in C implementations to make it look like `main`
isn't the entry point. This is in fact [what the Windows subsystem did](https://github.com/MicrosoftDocs/win32/blob/docs/desktop-src/LearnWin32/winmain--the-application-entry-point.md)
with `winmain`.

The most straightforward and cross-platform way to do this, without
manipulating the linker is to simply make `main` call something else:

```c
int
main(int argc, char *argv[])
{
  return (not_main(argc, argv));
}
```

- How to print text using `printf`, `puts` and `putchar`
- How to get the size of a specific type using the unary operator sizeof
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

#

## Projects

### Mandatory

**[0-preprocessor](0-preprocessor)** - A shell script that runs a C file saved as a
global shell variable `CFILE` through the preprocessor, saving its result
into another file `c`.

#

**[1-compiler](1-compiler)** - A shell script that compiles a C file without linking
it.

#

**[2-assembler](2-assembler)** - A shell script that generates the assembly code of
a C code and save it in an output file.

#

**[3-name](3-name)**

#

**[4-puts.c](4-puts.c)**

#

**[5-printf.c](5-printf.c)**

#

**[6-size.c](6-size.c)**

#

### Advanced

**[100-intel](100-intel)**

#

**[101-quote.c](101-quote.c)**

#

## Hosted Environment

* Linux [Asahi](https://asahilinux.org) 5.19.0-asahi-5-1-ARCH
* [GCC](https://gcc.gnu.org) 12.1.0

## Credits

Code and documentation is owned and maintained by [Muhammed Abiola](https://mabiola.net)
