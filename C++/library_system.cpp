/*
    Libraray System
    
    functions possible
    1. add books
    2. search books
    3. list books
    4. list users borrowed a book
    5. add a user
    6. borrow a book
    7. return a book
    8.
 
*/
#include<iostream>
#include<algorithm>
#include<assert.h>
using namespace std;

const int MAX_BOOKS = 10;
const int MAX_USERS = 10;

struct book {
    int id;
    string name;
    int total_quantity;
    int total_borrowed;

    book() {
        id = -1;
        name = "";
        total_quantity = total_borrowed = 0;
    }

    void read() {
        cout << "Enter book info: id & name & total quantity: ";
        cin >> id >> name >> total_quantity;
    }
    void print() {
        cout << "id = " << id << " name = " << name << " total_quantity "
            << total_quantity << " total_borrowed " << total_borrowed << "\n";
    }
    bool search(string str) {
        int name_length = name.length();
        int str_length = str.length();
        int i,j;
        for (i = 0; i < name_length; ++i) {
            for (j = 0; j < str_length; ++j) {
                if (name[i+j] != str[j])
                    break;
            }
            if (j == str_length)
                return true;
        }
        return false;
    }
    bool borrow() {
        if (total_quantity - total_borrowed == 0)
            return false;
        ++total_borrowed;
        return true;
    }
    void return_copy() {
        assert(total_borrowed >= 0);

        if (total_borrowed == 0)
            cout << "book was not borrowed\n";
        --total_borrowed;
    }
};

bool cmp_id (book &a, book& b) {
    return a.id < b.id;
}
bool cmp_name (book &a, book &b) {
    return a.name < b.name;
}

struct user {
    string name;
    int national_id;
    int books_ids[MAX_USERS];
    int len;

    user() {
        name = "";
        national_id = -1;
        len = 0;
    }

    void read() {
        cout << "Enter username & national id: ";
        cin >> name >> national_id;
    }
    void print() {
        sort(books_ids, books_ids + len);

        cout << "user " << name << " id " << national_id << " borrowed book ids: ";
        for (int i = 0; i < len; ++i)
            cout << books_ids[i] << " ";
        cout << "\n";
    }
    void borrow(int book_id) {
        books_ids[len++] = book_id;
    }
    void return_copy(int book_id) {
        bool removed = false;
        for (int i = 0; i < len; ++i) {
            if (books_ids[i] == book_id) {

                for (int j = i + 1; j < len; ++j) 
                    books_ids[j -1] = books_ids[j];
                removed = true;
                --len;
                break;
            }
        }
        if (!removed) 
            cout << "user " << name << " never borrowed book id " << book_id
                << "\n";
    }
    bool is_borrowed(int book_id) {
        for (int i = 0; i < len; ++i) {
            if (books_ids[i] == book_id)
                return true;
        }
        return false;
    } 
};

struct library_system {
    book books[MAX_BOOKS];
    user users[MAX_USERS];
    int total_books, total_users;

    library_system() {
        total_books = total_users = 0;
    }

    void menu() {
        cout << "library Menu;\n";
        cout << "1) add_book\n";
        cout << "2) search_books\n";
        cout << "3) print_who_borrowed_book_by_name\n";
        cout << "4) print_library_by_id\n";
        cout << "5) print_library_by_name\n";
        cout << "6) add_user\n";
        cout << "7) user_borrow_book\n";
        cout << "8) user_return_book\n";
        cout << "9) print_users\n";
        cout << "10) Exit\n\n";
    }
    void run() {
        menu();
        while (true) {
            cout << "Enter you menu choice [1-10]: ";
            int choice;
            cin >> choice;
            if (choice == 1)
                add_book();
            else if (choice == 2)
                search_books();
            else if (choice == 3)
                print_who_borrowed_book_by_name();
            else if (choice == 4)
                print_library_by_id();
            else if (choice == 5)
                print_library_by_name();
            else if (choice == 6)
                add_user();
            else if (choice == 7)
                user_borrow_book();
            else if (choice == 8)
                user_return_book();
            else if (choice == 9)
                print_users();
            else if (choice == 10)
                break;
            else 
                cout << "Incorrect Input\n";
        }
    }

    void add_book() {
        books[total_books++].read();
    }

    void search_books() {
        cout << "Enter book name or part of it: ";
        string str;
        cin >> str;

        int i;
        for (i = 0; i < total_books; ++i) {
            if (books[i].search(str)) {
                    cout << books[i].name << "\n";
                    break;
            }
        }
        if (i == total_books)
            cout << "No books with such name\n";
    }

    void print_who_borrowed_book_by_name() {
        string book_name;
        cout << "Enter book name: ";
        cin >> book_name;

        int book_idx = find_book_idx_by_name(book_name);
        if (book_idx == -1) {
            cout << "Invalid book name\n";
            return;
        }

        if (books[book_idx].total_borrowed == 0) {
            cout << "No borrowed copies\n";
            return;
        }

        int book_id = books[book_idx].id;
        for (int i = 0; i < total_users; ++i) {
            if (users[i].is_borrowed(book_id))
                cout << users[i].name << "\n";
        }

    }

    void print_books() {
        for (int i = 0; i < total_books; ++i)
            books[i].print();
    }
    void print_library_by_id() {
        sort(books, books+total_books, cmp_id);
        cout << "\n";
        print_books();
    }
    void print_library_by_name() {
        sort(books, books+total_books, cmp_name);
        cout << "\n";
        print_books();
    }
    void add_user() {
        users[total_users++].read();
    }

    int find_book_idx_by_name(string book_name) {
        for (int i = 0; i < total_books; ++i) {
            if (books[i].name == book_name)
                return i;
        }
        return -1;
    }
    int find_user_idx_by_name(string user_name) {
        for (int i = 0; i < total_users; ++i) {
            if (users[i].name == user_name)
                return i;
        }
        return -1;
    }

    bool read_user_name_and_book_name(int &book_idx,int &user_idx, int trials = 3) {
        string user_name, book_name;

        while(trials--) {
            cout << "Enter user name and book name: ";
            cin >> user_name >> book_name;

            user_idx = find_user_idx_by_name(user_name);
            if (user_idx == -1) {
                cout << "\nuser not found\n";
                continue;
            }

            book_idx = find_book_idx_by_name(book_name);
            if (book_idx == -1) {
                cout << "\nbook not found\n";
                continue;
            }
            
            return true;
        }
        cout << "You did several trials!. Try again later\n";
        return false;
    }
    void user_borrow_book() {
        int book_idx, user_idx;

        if (!read_user_name_and_book_name(book_idx, user_idx))
            return;

        int book_id = books[book_idx].id;
        if (!books[book_idx].borrow())
            cout << "no more copies available now\n";
        else
            users[user_idx].borrow(book_id);
    }
    void user_return_book() {
        int book_idx, user_idx;
        if (!read_user_name_and_book_name(book_idx, user_idx))
            return;
        int book_id = books[book_idx].id;
        books[book_idx].return_copy();
        users[user_idx].return_copy(book_id);
    }
    void print_users() {
        cout << "\n";
        for (int i = 0; i < total_users; ++i)
            users[i].print();
    }
};

int main() {
    library_system library;
    library.run();
    return 0;
}
