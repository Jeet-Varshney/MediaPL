# Movie and Song Playlist Management System

A simple **C-based Playlist Management System** that uses **Singly Linked Lists** to manage separate movie and song playlists.

## About the Project

This project demonstrates the practical use of linked lists in a real-world playlist management application. It allows users to maintain movies and songs separately and perform basic operations through a menu-driven interface.

## Features

* Add movies to the movie playlist
* Add songs to the song playlist
* Display movie and song playlists separately
* Search for a movie or song
* Delete a movie or song
* Handle items that are not found
* Dynamic memory allocation using linked lists
* Menu-driven and easy-to-use interface

## Data Structure Used

### Singly Linked List

Each playlist item is stored in a node containing:

* Name of the movie or song
* Pointer to the next node

Separate linked lists are maintained for movies and songs, allowing both playlists to be managed independently.

## Technologies Used

* **Language:** C
* **Data Structure:** Singly Linked List
* **Memory Management:** Dynamic Memory Allocation
* **Compiler:** GCC / Any standard C compiler

## Operations

| Operation | Description                               |
| --------- | ----------------------------------------- |
| Add       | Adds a new movie or song to the playlist  |
| Display   | Shows all items in the selected playlist  |
| Search    | Searches for a specific movie or song     |
| Delete    | Removes a selected item from the playlist |
| Exit      | Terminates the program                    |

## How to Run

### 1. Clone the Repository

```bash
git clone <repository-url>
cd <repository-folder>
```

### 2. Compile the Program

```bash
gcc main.c -o playlist
```

### 3. Run the Program

```bash
./playlist
```

## Concepts Demonstrated

This project demonstrates:

* Structures in C
* Pointers
* Dynamic memory allocation
* Linked-list traversal
* String comparison
* Insertion and deletion
* Searching
* Menu-driven programming

## Project Objective

The main objective of this project is to understand and implement **Singly Linked Lists** through a practical playlist management application. It helps demonstrate how dynamic data can be efficiently stored, searched, displayed, and removed using pointers and linked-list operations.

## Future Enhancements

The system can be extended with:

* Update/edit playlist items
* Sorting movies and songs
* Playlist size/count
* Save and load data using files
* Multiple
