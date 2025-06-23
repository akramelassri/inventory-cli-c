# inventory-cli-c

A simple command-line inventory management system written in C.

## Description

This project implements a basic CRUD (Create, Read, Update, Delete) inventory management tool. It supports:

* Adding new products (reference, name, price, quantity)
* Listing all products
* Searching products by reference or name
* Modifying existing products
* Deleting products
* Saving/loading inventory data to/from a CSV file

Currently, the repository includes only the build setup; the application code will be added in subsequent commits.

## Prerequisites

* **GNU Make**: to build the project (`make --version` to verify)
* **GCC** (or compatible C compiler): to compile the source code

## Build

To compile the project, run:

```bash
make
```

This will:

1. Scan `src/` for all `.c` files
2. Compile each into `build/` as object files (`.o`)
3. Link them into the executable `inventory`

The resulting binary will be placed in the project root named `inventory`.

## Usage

After building, run the program:

```bash
./inventory
```

Follow the on-screen prompts to manage your inventory.

## Project Structure

```
.
├── Makefile        # Build script
├── src/            # C source files (to be implemented)
├── build/          # Object files (auto-generated)
├── inventory       # Compiled executable
└── README.md       # Project documentation
```

## Next Steps

* Implement the CLI interface and CRUD functions in `src/`
* Add file I/O for persistent storage
* Provide a more detailed user manual

## License

This project is released under the MIT License. See [LICENSE](LICENSE) for details.
