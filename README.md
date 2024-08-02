# File Reading Performance Comparison (FREAD-READ)

This project compares the performance of two methods for reading files in C: using the standard library function `fread` and using the system call `read`. The code is designed to read a file in two different ways: sequentially or interleaved, based on the user's input.Update 

**NOTE:** This project was part of a university course on Operating Systems at Harokopio University of Athens, and the performance of each method was measured using files of different sizes (1 KB and 100 MB). The results were documented in a PDF report.

## Table of Contents
- Overview
- Files
- Compilation
- Execution
- Results

## Overview

**The project includes two C programs that read from a specified text file using different methods:**
1. **Standard Library Method:** Uses `fread` for reading files.
2. **System Call Method:** Uses `read` for reading files.

The user can choose to read the file sequentially or interleaved `method`:
- **Sequentially (S/s):** Reads the file from start to end.
- **Interleaved (I/i):** Reads the file in an interleaved manner, alternating between the start and the end of the file towards the center.

## Files
- `fread.c`: Implements file reading using the `fread` function.
- `read.c`: Implements file reading using the `read` system call.

### Compilation
To compile the programs, ensure you have a C compiler like gcc installed on your system. You can then use the following commands:

```sh
gcc -o fread fread.c
```
```sh
gcc -o read read.c
```
## Execution
To run the programs, use the following commands:

For fread version:
```sh
time ./fread <filename> <method>
```

For read version:
```sh
time ./read <filename> <method>
```
'<filename>': The path to the .txt file you want to read. (It would be good to choose two files with enough difference in size that they have a noticeable difference in times. ** Ex. 1 KB - 100 MB **)

'<method>': Choose 'S' or 's' for sequential reading, and 'I' or 'i' for interleaved reading.

## Examples
```sh
time ./fread long_file.txt S
time ./read short_file.txt i
```
## Results
### Example of result

```sh
real	0m0,009s
user	0m0,001s
sys	0m0,009s
```
The results of the experiments, including time taken for reading files of different sizes using both methods, are documented in the accompanying PDF report.
