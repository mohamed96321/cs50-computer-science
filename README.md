# CS50 Introduction to Computer Science

## Project Overview
Welcome to the CS50 Computer Science course!
The Journey to become a Real Software Engineer. We will treat more than one programming language.

The CS50 Computer Science Course includes:
1. Problem Solving: Develop critical problem-solving skills by tackling real-world programming challenges.
2. Algorithms: Explore fundamental algorithms and data structures to understand their principles and applications.
3. Programming in C: Master the C programming language, a powerful and foundational language used in system development.
4. Web Development: Dive into web development, learning both front-end and back-end technologies to build dynamic and interactive websites.
5. Security: Understand the principles of computer security, exploring encryption, authentication, and common vulnerabilities.
6. SQL Databases: Gain proficiency in working with databases, utilizing SQL to manage and query data efficiently.

## We will using choco and bash commands to run and install all programming languages.
When using "choco" command: Right-click on the Start menu and select "Command Prompt (Admin)" or "Windows PowerShell (Admin).".

Please make sure you have installed Chocolatey (https://chocolatey.org/install) before proceeding with these instructions.

We can using "sudo apt" command in Ubuntu.

We can using "brew" command in MacOS. 

### How to Install, Compile and Run C files:
To install, compile and run c files, use the following commands in the terminal:

**Install C:**
```bash
choco install mingw
```

**Compile files:**
```bash
gcc -o filename.exe filename.c
```

**Run files:**
```bash
./filename
```

### How to Install, Compile and Run C++ files:
To install, compile and run c++ files, use the following commands in the terminal:

**Install C++:**
```bash
choco install mingw
```

**Compile files:**
```bash
g++ -o filename.exe filename.cpp
```

**Run files:**
```bash
./filename
```

### How to Install and Run Python files:
To install and run python files, use the following commands in the terminal:

**Install Python:**
```bash
choco install python
```

**Run files:**
```bash
python filename.py
```

### How to Install and Run JavaScript files:
To install and run javascript files, use the following commands in the terminal:

**Install JavaScript:**
```bash
choco install node
```

**Run files:**
```bash
node filename.js
```

### How to Install and Run Typescript files:
To install and run typescript files, use the following commands in the terminal:

**Install Typescript:**
```bash
choco install node
npm install -g typescript
npm install -g ts-node
```

**Run files:**
```bash
ts-node filename.ts
```

### How to Install, Compile and Run Java files:
To install, compile and run java files, use the following commands in the terminal:

**Install Java:**
```bash
choco install openjdk
```

**Compile files:**
```bash
javac FileName.java
```

**Run files:**
```bash
java FileName
```

### How to Compile and Run Shell files:
To compile and run shell files, use the following commands in the terminal:

**Compile files:**
```bash
chmod +x filename.sh
```

**Run files:**
```bash
./filename.sh
```

### How to Install, Compile and Run Assembly files:
To install, compile and run assembly files, use the following commands in the terminal:

**Install Assembly:**
```bash
choco install nasm
pacman -S mingw-w64-x86_64-nasm
```

**Compile files:**
```bash
nasm -f elf64 filename.asm -o filename.o
```

**Run files:**
```bash
ld filename.o -o filename
```