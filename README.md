# File Reading Performance Comparison (FREAD-READ)

This project compares the performance of two methods for reading files in C: using the standard library function `fread` and using the system call `read`. The code is designed to read a file in two different ways: sequentially or interleaved, based on the user's input.

## Table of Contents
- Overview
- Files
- Usage
- Compilation
- Execution
- Results

## Overview

**The project includes two C programs that read from a specified text file using different methods:**
1. **Standard Library Method:** Uses `fread` for reading files.
2. **System Call Method:** Uses `read` for reading files.

The user can choose to read the file sequentially or interleaved:
- **Sequentially (S/s):** Reads the file from start to end.
- **Interleaved (I/i):** Reads the file in an interleaved manner, alternating between the start and the end of the file towards the center.

This project was part of a university course on Operating Systems, and the performance of each method was measured using files of different sizes (1 KB and 100 MB). The results were documented in a PDF report.

## Files

- `fread.c`: Implements file reading using the `fread` function.
- `read.c`: Implements file reading using the `read` system call.

### Compilation

To compile the programs, use the following commands:

```bash
gcc -o fread_version fread_version.c
gcc -o read_version read_version.c
```
## Execution
To run the programs, use the following commands:

For fread_version:
```sh
./fread_version <filename> <method>
```

For read_version:
```sh
./read_version <filename> <method>
```
<filename>: The path to the .txt file you want to read.
<method>: Choose 'S' or 's' for sequential reading, and 'I' or 'i' for interleaved reading.

## Examples
```sh
./fread_version example.txt S
./read_version example.txt i
```
## Results
The results of the experiments, including time taken for reading files of different sizes using both methods, are documented in the accompanying PDF report.
