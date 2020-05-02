#ifndef SAVE_H
#define SAVE_H

#include <fstream>
#include <string>

class Save
{
public:
    Save();
    void OpenFile();
    void SaveToFile(int score);
    void CloseFile();
  
private:
    std::fstream log_file;

};

#endif 