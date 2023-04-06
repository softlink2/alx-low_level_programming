<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" width=150 height=150/>       

# Low level programming

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

-    What are pointers to pointers and how to use them

-    What are multidimensional arrays and how to use them

-    What are the most common C standard library functions to manipulate strings

## Hosted Environment

* Linux [Asahi](https://asahilinux.org) 5.19.0-asahi-5-1-ARCH
* [GCC](https://gcc.gnu.org) 12.1.0

## Projects

[0](0-memset.c). Write a function that fills memory with a constant byte.

[1](1-memcpy.c). Write a function that copies memory area.

[2](2-strchr.c). Write a function that locates a character in a string.

[3](3-strspn.c). Write a function that gets the length of a prefix substring.

[4](4-strpbrk.c). Write a function that searches a string for any of a set of bytes.

[5](5-strstr.c). Write a function that locates a substring.

[6](7-print_chessboard.c). Write a function that prints the chessboard.

[7](8-print_diagsums.c). Write a function that prints the sum of the two diagonals of a square matrix of integers.

[8](100-set_string.c). Write a function that sets the value of a pointer to a char.

[9](101-crackme_password). Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.

> 1 In a hosted environment, the main function receives a third argument, `char *envp[]`, that points to a null-terminated array of pointers to `char`, each of which points to a string that provides information about the environment for this execution of the program `(5.1.2.2.1)`.

  ```c
  int
  main(int argc, const char **argv, const char **envp)
  {
    size_t v4; // rax
    int i; // [rsp+24h] [rbp-ACh]
    char *s; // [rsp+28h] [rbp-A8h]
    char *sa; // [rsp+28h] [rbp-A8h]
    char v9[96]; // [rsp+30h] [rbp-A0h] BYREF
    char v10[16]; // [rsp+90h] [rbp-40h] BYREF
    char s2[8]; // [rsp+A0h] [rbp-30h] BYREF
    __int64 v12; // [rsp+A8h] [rbp-28h]
    __int64 v13; // [rsp+B0h] [rbp-20h]
    __int64 v14; // [rsp+B8h] [rbp-18h]
    char v15; // [rsp+C0h] [rbp-10h]
    unsigned __int64 v16; // [rsp+C8h] [rbp-8h]

    v16 = __readfsqword(0x28u);
    *(_QWORD *)s2 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0;
    s = 0LL;
    if ( argc != 1 )
      goto LABEL_2;
    while ( *envp )
    {
      if ( !strncmp(*envp, "jennieandjayloveasm=", 0x14uLL) )
      {
        s = (char *)*envp;
        break;
      }
      ++envp;
    }
    if ( s )
    {
      sa = s + 20;
      MD5_Init(v9);
      v4 = strlen(sa);
      MD5_Update(v9, sa, v4);
      MD5_Final(v10, v9);
      for ( i = 0; i <= 15; ++i )
        sprintf(&s2[2 * i], "%02x", (unsigned __int8)v10[i]);
      v15 = 0;
      if ( !strcmp("e99a18c428cb38d5f260853678922e03", s2) )
      {
        puts("Access Granted");
        return 0;
      }
      else
      {
        puts("Access Denied");
        return 1;
      }
    }
    else
    {
  LABEL_2:
      puts("Access Denied");
      return 1;
    }
  }
  ```

## Credits

Code and documentation is owned and maintained by [Muhammed Abiola](https://mabiola.net)
