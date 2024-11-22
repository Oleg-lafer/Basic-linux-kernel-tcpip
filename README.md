
# Networking Kernel Module

A simple Linux kernel module designed to demonstrate networking features and kernel programming concepts. This module logs messages to the kernel when loaded and unloaded, serving as a foundation for learning Linux kernel development.

## Features
- Basic kernel module structure
- Logging messages to the kernel log
- Easy setup and compilation

## Requirements
- Linux-based operating system
- Kernel headers installed (usually found in `/lib/modules/$(uname -r)/build`)
- GCC compiler

## Project Structure
```
networking-module/
├── Makefile               # For building the kernel module
├── network_module.c       # Kernel module source code
└── README.md              # Instructions for compiling and using the module
```

## Installation & Usage

### 1. Clone the Repository
```bash
git clone <repository_url>
cd networking-module
```

### 2. Build the Kernel Module
Run the following command to compile the module:
```bash
make
```

This will generate the `network_module.ko` file, which is your compiled kernel module.

### 3. Load the Module
Use `insmod` to insert the module into the kernel:
```bash
sudo insmod network_module.ko
```

### 4. Check Kernel Logs
View the kernel log to confirm the module loaded successfully:
```bash
dmesg | tail
```

You should see a message like:
```
Network module loaded.
```

### 5. Remove the Module
Use `rmmod` to remove the module:
```bash
sudo rmmod network_module
```

Check the kernel log again:
```bash
dmesg | tail
```

You should see a message like:
```
Network module unloaded.
```

### 6. Clean Up
To remove the compiled files, run:
```bash
make clean
```


