# AntiVirus Project

## Description

The AntiVirus project is designed to detect and neutralize computer viruses in executable files using C programming. It combines various system programming techniques including debugging, dynamic memory management, linked lists, and binary file manipulation.

### Key Features:

1. **Memory Management and Debugging:** 
   - Use Valgrind to identify and fix memory leaks and segmentation faults.
   - Ensure the program is memory-leak free.

2. **Dynamic Data Structures:** 
   - Implement linked lists to store virus signatures efficiently.

3. **Binary File Handling:** 
   - Read and process binary files to extract and interpret virus signatures.
   - Print hexadecimal values of bytes from a given binary file.

4. **Virus Detection:** 
   - Compare the content of suspected files against known virus signatures.
   - Detect and report the presence of viruses based on their signatures.

5. **Virus Neutralization:** 
   - Automatically modify infected files to neutralize detected viruses.
   - Implement functionality to change the first byte of the virus code to neutralize it.

### Project Components:

1. **Hexadecimal Print Program:**
   - A utility to print hexadecimal values of bytes from a binary file.

2. **Linked List Implementation:**
   - Functions to read virus signatures from a file, store them in linked lists, and print them.

3. **Virus Detector:**
   - A program to scan files for virus signatures using the linked list of virus descriptions.

4. **Virus Neutralizer:**
   - A tool to neutralize detected viruses in files by modifying the infected code.

This project offers practical experience in developing robust system-level programs and handling real-world challenges in antivirus software development.
