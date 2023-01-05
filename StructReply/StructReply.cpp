
#include <iostream>
using namespace std;

struct video_game
{
    string name;
    string developer;
    string publisher;
    int copiesSold;
};

void PrintVideoGames(video_game gameArray[], const int gameArraySize)
{
    for (int i = 0; i < gameArraySize; i++)
    {
        cout << "Name: " << gameArray[i].name << endl
             << "Developer: " << gameArray[i].developer << endl
             << "Publisher: " << gameArray[i].publisher << endl
             << "Copies Sold: " << gameArray[i].copiesSold << endl
             << endl;
    }
}

void ConcatenateGameData(video_game gameArray[], const int gameArraySize)
{
    int allCopiesSold = 0;
    string nameDevAndPublisher;

    for (int i = 0; i < gameArraySize; i++)
    {
        nameDevAndPublisher = gameArray[i].name + ", " + gameArray[i].developer + ", " + gameArray[i].publisher;
        cout << "Name, Dev, and Publisher concatenation: " << nameDevAndPublisher << endl;
        allCopiesSold += gameArray[i].copiesSold;
    }
    cout << endl;
    cout << "All of copies sold in this array: " << allCopiesSold << "\n" << endl;
}


int main()
{
    const int gameArraySize = 3;

    video_game gameArray[gameArraySize] =
    {
        {"Halo Infinite", "343 Industries", "Xbox Game Studios", 800000},
        {"Sea of Thieves", "Rare Ltd", "Xbox Game Studios", 5000000},
        {"Terraria", "Re-Logic", "Re-Logic", 44500000}
    };


    PrintVideoGames(gameArray, gameArraySize);

    ConcatenateGameData(gameArray, gameArraySize);

    system("pause");
    return 0;
}