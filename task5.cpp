#include <bits/stdc++.h>
using namespace std;

// prototypes
void header();
void menu();

main()
{
    system("cls");
    int option;
    while (true)

    {
        header();
        menu();
    }
}

void header()
{
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "WWWWWWWW                           WWWWWWWW               lllllll                                                                                  " << endl;
    cout << "W::::::W                           W::::::W               l:::::l                                                                                  " << endl;
    cout << "W::::::W                           W::::::W               l:::::l                                                                                  " << endl;
    cout << "W::::::W                           W::::::W               l:::::l                                                                                  " << endl;
    cout << " W:::::W           WWWWW           W:::::W eeeeeeeeeeee    l::::l     cccccccccccccccc   ooooooooooo      mmmmmmm    mmmmmmm       eeeeeeeeeeee    " << endl;
    cout << "  W:::::W         W:::::W         W:::::Wee::::::::::::ee  l::::l   cc:::::::::::::::c oo:::::::::::oo  mm:::::::m  m:::::::mm   ee::::::::::::ee  " << endl;
    cout << "   W:::::W       W:::::::W       W:::::We::::::eeeee:::::eel::::l  c:::::::::::::::::co:::::::::::::::om::::::::::mm::::::::::m e::::::eeeee:::::ee" << endl;
    cout << "    W:::::W     W:::::::::W     W:::::We::::::e     e:::::el::::l c:::::::cccccc:::::co:::::ooooo:::::om::::::::::::::::::::::me::::::e     e:::::e" << endl;
    cout << "     W:::::W   W:::::W:::::W   W:::::W e:::::::eeeee::::::el::::l c::::::c     ccccccco::::o     o::::om:::::mmm::::::mmm:::::me:::::::eeeee::::::e" << endl;
    cout << "      W:::::W W:::::W W:::::W W:::::W  e:::::::::::::::::e l::::l c:::::c             o::::o     o::::om::::m   m::::m   m::::me:::::::::::::::::e " << endl;
    cout << "       W:::::W:::::W   W:::::W:::::W   e::::::eeeeeeeeeee  l::::l c:::::c             o::::o     o::::om::::m   m::::m   m::::me::::::eeeeeeeeeee  " << endl;
    cout << "        W:::::::::W     W:::::::::W    e:::::::e           l::::::lc:::::::cccccc:::::co:::::ooooo:::::om::::m   m::::m   m::::me:::::::e           " << endl;
    cout << "         W:::::::W       W:::::::W     e::::::::e         l::::::l c:::::::::::::::::co:::::::::::::::om::::m   m::::m   m::::me::::::::e          " << endl;
    cout << "          W:::::W         W:::::W       e::::::::eeeeeeee l::::::l c:::::::::::::::c oo:::::::::::oo m::::m   m::::m   m::::m e::::::::eeeeeeee  " << endl;
    cout << "           W:::W           W:::W         ee:::::::::::::e l::::::l  cc:::::::::::::::c oo:::::::::::oo m::::m   m::::m   m::::m  ee:::::::::::::e  " << endl;
    cout << "            WWW             WWW            eeeeeeeeeeeeee llllllll    cccccccccccccccc   ooooooooooo   mmmmmm   mmmmmm   mmmmmm    eeeeeeeeeeeeee  " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;
    cout << "                                                                                                                                                   " << endl;

    cout << " /$$$$$$$$ /$$           /$$                   /$$     /$$                            /$$$$$$                        /$$                            " << endl;
    cout << "|__  $$__/|__/          | $$                  | $$    |__/                           /$$__  $$                      | $$                            " << endl;
    cout << "   | $$    /$$  /$$$$$$$| $$   /$$  /$$$$$$  /$$$$$$   /$$ /$$$$$$$   /$$$$$$       | $$  \\__/ /$$   /$$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$$$$$/$$$$ " << endl;
    cout << "   | $$   | $$ /$$_____/| $$  /$$/ /$$__  $$|_  $$_/  | $$| $$__  $$ /$$__  $$      |  $$$$$$ | $$  | $$ /$$_____/|_  $$_/   /$$__  $$| $$_  $$_  $$" << endl;
    cout << "   | $$   | $$| $$      | $$$$$$/ | $$$$$$$$  | $$    | $$| $$  \\ $$| $$  \\ $$       \\____  $$| $$  | $$|  $$$$$$   | $$    | $$$$$$$$| $$ \\ $$ \\ $$" << endl;
    cout << "   | $$   | $$| $$      | $$_  $$ | $$_____/  | $$ /$$| $$| $$  | $$| $$  | $$       /$$  \\ $$| $$  | $$ \\____  $$  | $$ /$$| $$_____/| $$ | $$ | $$" << endl;
    cout << "   | $$   | $$|  $$$$$$$| $$ \\  $$|  $$$$$$$  |  $$$$/| $$| $$  | $$|  $$$$$$$      |  $$$$$$/|  $$$$$$$ /$$$$$$$/  |  $$$$/|  $$$$$$$| $$ | $$ | $$" << endl;
    cout << "   |__/   |__/ \\_______/|__/  \\__/ \\_______/   \\___/  |__/|__/  |__/ \\____  $$       \\______/  \\____  $$|_______/    \\___/   \\_______/|__/ |__/ |__/" << endl;
    cout << "                                                                     /$$  \\ $$                 /$$  | $$                                            " << endl;
    cout << "                                                                    |  $$$$$$/                |  $$$$$$/                                            " << endl;
    cout << "                                                                     \\______/                  \\______/        " << endl;
}

void menu()
{
    int option;
    cout << "1.Press 1 to see ticket: " << endl;
    cout << "2.Press 2 to see tickets Price: " << endl;
    cout << "3.Press 3 to buy ticket Price: " << endl;
    cout << "Press 4 to exit: " << endl;
    cin >> option;

    if (option == 1)
    {
        cout << "1.Lahore to Karachi" << endl;
        cout << "2.Lahore to Islamabad" << endl;
        cout << "3.Lahore to Pattoki" << endl;
        cout << "4.Lahore to Peshawar" << endl;
        cout << "5.Lahore to Faislabad" << endl;
        cout << "6.Lahore to Quetta" << endl;
    }

    if (option == 2)
    {
        cout << "1.5000$" << endl;
        cout << "2.3000$" << endl;
        cout << "3.500$" << endl;
        cout << "4.4000$" << endl;
        cout << "5.2000$" << endl;
        cout << "6.3500" << endl;
    }

    if (option == 3)
    {
    }
}