#include <iostream>
#include <list>
using namespace std;

class Library
{
private:
    list <string>books;
    int counts;
    int choice  = 0;
public:
    Library(string bookName)
    {
        books.push_back(bookName);
        counts++;

    }

    void startLib()
    {
         menu();
        cout << "Please enter your choice : ";

        while(cin >> choice){

            if(choice == 4){
                break;
            }
            system("cls");


            display(choice);
               menu();
                 cout << "Please enter your choice : ";

        }


    }

    void menu()
    {

        cout << "______________________________________________________________"<< endl;
        cout << "--------Book Menu--------"<< endl;
        cout << "1. books show"<< endl;
        cout << "2. books insert"<< endl;
        cout << "3. books delete"<< endl;
        cout << "4. exit or not"<< endl;
        cout << "-------------------------"<< endl;

    }
    void display(int userChoice)
    {
        choice = userChoice;

        switch(choice)
        {
        case 1:
            booksShow();
            break;
        case 2:
            booksInsert();
            break;
        case 3:
            booksDelete();
            break;
        }


    }

    void booksShow()
    {
        cout << "   ____________________________"<< endl;
        cout << "   >>>>>>>>>Books List<<<<<<<<<"<< endl;
        cout << "   ++++++++++++++++++++++++++++"<< endl;
        cout << "\tNo.\t"<< "book_name" << endl;
        int i = 1;
        for(string book : books)
        {
            cout << "\t"<< i++ << ".  \t" << book << endl;
        }
        cout << "   ++++++++++++++++++++++++++++"<< endl;
         cout << "   ____________________________"<< endl;
    }
    void booksInsert()
    {
        cout << "   +++++++++++++++++++++++++++"<< endl;
        string bookName;
        cout << "Enter the new Books Name :: ";
        cin >> bookName;
        books.push_back(bookName);
        cout << "   +++++++++++++++++++++++++++"<< endl;
    }
    void booksDelete()
    {
        cout << "I am delete books" << endl;
    }


};

int main()
{

    Library lb("Batman");
    lb.startLib();


    return 0;
}
