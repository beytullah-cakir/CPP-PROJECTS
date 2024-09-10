
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>

using namespace std;
fstream file;

string content;
// Metin ekler
void addText(string &text)
{

    file.open("text.txt");
    if (file.is_open())
    {
        file << text << "\n";
        file.close();
    }
    else
    {
        std::cout << "Dosya açılamadı.\n";
    }
}
// Metin arar
void searchText(string text)
{
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    file.open("text.txt");
    bool isfind;
    string row;
    while (getline(file, row))
    {
        std::transform(row.begin(), row.end(), row.begin(), ::toupper);
        if (row.find(text) != string::npos)
        {
            isfind = true;
            cout << "Kelime bulundu \n";
            cout << text;
        }
    }
    if (!isfind)
    {
        cout << "Metin bulunamadı.\n";
    }
}
// Metni değiştirir
void replaceText(const std::string &oldText, const std::string &newText)
{
    
}
// Dosyanın içeriğini görüntüler
void displayFile()
{
    file.open("text.txt");
    string text;
    while (getline(file, text))
    {
        cout << text << "\n";
    }
}
