#include "save.h"
#include <iostream>
#include <sstream>

Save::Save()
{
    OpenFile();
    log_file.seekg(0, std::ios::end);
    if (log_file.tellg() == 0)
    {
        log_file << "Score" << std::endl;
    } 
    CloseFile();
}

void Save::SaveToFile(int score)
{
    OpenFile();
    log_file << "Player score: " << score << std::endl;
    CloseFile();
}

void Save::OpenFile()
{
    log_file.open("FILE.txt", std::fstream::in | std::fstream::out | std::fstream::app);
}

void Save::CloseFile()
{
    log_file.close();
}