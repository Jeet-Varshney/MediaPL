#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[50];
    struct Node *next;
};

struct Node *movieHead = NULL;
struct Node *songHead = NULL;

void addMovie() {
    struct Node *n = malloc(sizeof(struct Node)), *t = movieHead;
    printf("Enter movie name: ");
    scanf(" %[^\n]", n->name);
    n->next = NULL;

    if (!movieHead) movieHead = n;
    else {
        while (t->next) t = t->next;
        t->next = n;
    }
}

void displayMovie() {
    struct Node *t = movieHead;
    if (!t) {
        printf("Movie playlist is empty\n");
        return;
    }
    while (t) {
        printf("%s\n", t->name);
        t = t->next;
    }
}

void searchMovie() {
    char x[50];
    struct Node *t = movieHead;
    printf("Enter movie to search: ");
    scanf(" %[^\n]", x);

    while (t) {
        if (!strcmp(t->name, x)) {
            printf("Movie found\n");
            return;
        }
        t = t->next;
    }
    printf("Movie not found\n");
}

void deleteMovie() {
    char x[50];
    struct Node *t = movieHead, *p = NULL;

    printf("Enter movie to delete: ");
    scanf(" %[^\n]", x);

    while (t != NULL && strcmp(t->name, x) != 0) {
        p = t;
        t = t->next;
    }

    if (t == NULL) {
        printf("Movie not found\n");
        return;
    }

    if (p == NULL)
        movieHead = t->next;
    else
        p->next = t->next;

    free(t);
    printf("Movie deleted\n");
}

void addSong() {
    struct Node *n = malloc(sizeof(struct Node)), *t = songHead;
    printf("Enter song name: ");
    scanf(" %[^\n]", n->name);
    n->next = NULL;

    if (!songHead) songHead = n;
    else {
        while (t->next) t = t->next;
        t->next = n;
    }
}

void displaySong() {
    struct Node *t = songHead;
    if (!t) {
        printf("Song playlist is empty\n");
        return;
    }
    while (t) {
        printf("%s\n", t->name);
        t = t->next;
    }
}

void searchSong() {
    char x[50];
    struct Node *t = songHead;
    printf("Enter song to search: ");
    scanf(" %[^\n]", x);

    while (t) {
        if (!strcmp(t->name, x)) {
            printf("Song found\n");
            return;
        }
        t = t->next;
    }
    printf("Song not found\n");
}

void deleteSong() {
    char x[50];
    struct Node *t = songHead, *p = NULL;
    printf("Enter song to delete: ");
    scanf(" %[^\n]", x);

    while (t && strcmp(t->name, x)) {
        p = t;
        t = t->next;
    }

    if (!t) {
        printf("Song not found\n");
        return;
    }

    if (!p) songHead = t->next;
    else p->next = t->next;

    free(t);
    printf("Song deleted\n");
}

int main() {
    int ch, op;

    while (1) {
        printf("\n1. Movie Playlist\n2. Song Playlist\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 3) break;

        if (ch == 1) {
            while (1) {
                printf("\n1. Add Movie\n2. View Movies\n3. Search Movie\n4. Delete Movie\n5. Back\n");
                printf("Enter choice: ");
                scanf("%d", &op);

                if (op == 1) addMovie();
                else if (op == 2) displayMovie();
                else if (op == 3) searchMovie();
                else if (op == 4) deleteMovie();
                else if (op == 5) break;
                else printf("Invalid choice\n");
            }
        }

        else if (ch == 2) {
            while (1) {
                printf("\n1. Add Song\n2. View Songs\n3. Search Song\n4. Delete Song\n5. Back\n");
                printf("Enter choice: ");
                scanf("%d", &op);

                if (op == 1) addSong();
                else if (op == 2) displaySong();
                else if (op == 3) searchSong();
                else if (op == 4) deleteSong();
                else if (op == 5) break;
                else printf("Invalid choice\n");
            }
        }

        else printf("Invalid choice\n");
    }

    return 0;
}
