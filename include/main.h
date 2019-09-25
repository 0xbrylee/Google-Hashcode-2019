#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class CFileManager{
    public:
        CFileManager();
        std::string& writeFile();
        std::string& readFile();
        std::string& getFileContents();
        void test() const;

    private:
        std::string mFileContents;
        
};
