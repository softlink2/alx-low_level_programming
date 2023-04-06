# Recursion

## What is recursion

The first step in dynamic programming solutions is recursion. Backtracking
algorithms are similarly built using recursive calls. Merge-sort, quick-sort,
tree-traversals (tree problems: pre-order and post-order are inherently
recursive), divide and conquer.

Recursive approaches are broken down into smaller problems until we reach a
base case, after which the function call stack begins to unwind and resumes
execution.

<img src="Screen Shot 2022-11-03 at 10.12.39 PM.png" width=350 height=100/>

## How to implement recursion

At its core, recursive algorithms depend on two things: function calls, and stack data structures. [...] The program recalls what called the function and returns to it once it finishes execution. 

A simple, short and sweet recursive function would like this:

```c
void
recursion(void)
{
  recursion();
}

recursion();
```

All this function does is call itself, again and again. When compiled and run, this program encounters a segmentation error:

```sh
[1]    35025 segmentation fault  ./recursion
```

This happens because the infinite number of function calls with no return value grows the execution stack until all the memory allocated for it is used up. To prevent this "maximum recursion depth" being reached, languages like Python and Javascript set hard-wired limits on recursive calls. C, however, makes no such provisions.

In order to avoid a crash, there needs to be a *base-case*. All recursive functions should have at least one such base case but **must** have at least one recursive case.

```c
void
_puts_recursion(char *s)
{
  /* base case */
  if (!*s)
  {
    putchar('\n');
    return;
  }
  
  /* recursive case */
  putchar(*s);
  _puts_recursion(s + 1);
}
```

[..]

- In what situations you should implement recursion

- In what situations you shouldn’t implement recursion

## Hosted Environment

* Linux [Asahi](https://asahilinux.org) 5.19.0-asahi-5-1-ARCH
* [GCC](https://gcc.gnu.org) 12.1.0

## Projects
 
 
## Credits

Code and documentation is owned and maintained by [Muhammed Abiola](https://mabiola.net)
