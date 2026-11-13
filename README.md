# C Problem Solving

Practice problems in C that I solved while learning the language. The solutions come from HackerRank and from exercises I did as part of my coursework.

## Folder layout

```
c-problem-solving/
  README.md
  .gitignore
  01_hackerrank/   solutions to HackerRank C problems
  02_practice/     coursework exercises (arrays, strings, pointers, structs, recursion, bit manipulation)
```

Each problem is a single `.c` file, named after the problem it solves.

## How to compile

```
gcc file.c -o out
./out
```

On Windows use `out.exe` instead of `./out`. A few programs use `<math.h>` (for example `02_practice/square_root.c`); on Linux add `-lm`:

```
gcc square_root.c -o out -lm
```

## Author

Almuayyad Billah Al-Hamidi — Mechatronics Engineer
