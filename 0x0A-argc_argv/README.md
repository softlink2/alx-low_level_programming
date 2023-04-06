# Command-line arguments

In C (as with most other languages), we're able to pass arguments into our `main.c` file from our hosted environment.
Our `main.c` file stores the address of each argument in an pointer to strings. By convention, this pointer
is called `argv` for *argument vector*, and points to the first element of an array of strings.

```c
int
main(int argc, char **argv)
{
  printf("%s\n", *argv);
  return 0;
}
```

The first parameter `argc` refers to *argument count*, which tells the program how many arguments to expect from the hosted
environment. If the value of `argc` is non-zero, the array members `argv[0]` through to `argv[argc-1]` inclusive all contain
pointers to strings.

0. (0-whatsmyname.c)[0-whatsmyname.c]

1. (1-args.c)[1-args.c]

2. 2-args.c

3. 3-mul.c

4. 4-add.c
