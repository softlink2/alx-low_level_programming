# Static Libraries

As programs linked statically to libraries at compile-time increase, so does the size of the binary we end up with, not to mention the performance limitations and our inability to isolate and efficiently debug programs built this way. Dynamic linking techniques are used across operating systems to create small executable programs with shared libraries that are linked during compilation.

A library is a file containing several object files that can be used as a single entity in the linking phase of compilation.

**Static libraries** are a collections of object files linked during the compilation and linking process.

```
Format:

Windows .lib (library)
Linux .a (archive)
```

We can create a static C library using `ar` (see `man 1 ar`). This can be used to create static libraries (which are just archive files, modify object files in the static library, list the names of objects files in the library, and so on.

`ar rc libutil.a util_file.o util_net.o util_math.o`

This command creates a static library named `libutil.a`, and puts copies of the various object files into it. The `c` flag tells 
`ar` to create a library if it doesn't already exist, `r` tells it to replace older object files in the library with new object files.

After an archive has been created, we need to index it. This is done so as to speed-up symbol-lookup during compilation, and to make sure the order of the symbols won't matter.

`rarnlib libutil.a`

**Shared (dynamic) libraries** on the other hand, are linked in two stages: during compile time, the linker verifies that the symbols (functions and variables) required are either linked to the program or in one of its shared libraries. The object files from the dynamic library however, aren't inserted into the executable. Instead, at runtime, the *dynamic loader* checks which shared libraries were linked, loads them into memory, and attaches a copy of the program in memory to it. Multiple programs linked with the same shared library can run simultaenously in memory.

```
Format:

Windows .dll (dynamic link library)
Linux   .so  (shared object)
```

In order to create a shared library on GNU/Linux, we first compile for position independent code using the `fPIC` directive, then create a library file
