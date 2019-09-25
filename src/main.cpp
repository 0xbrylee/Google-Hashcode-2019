#include <iostream>
#include "main.h"

using namespace std;

CFileManager::CFileManager()
    : mFileContents("")
{}

std::string& CFileManager::writeFile(){
    string filePath = "output_data/test.txt";

	ofstream writeFile(filePath.data());
	if( writeFile.is_open() ){
		writeFile << "Hello world!\n";
		writeFile.close();
	}
}

std::string& CFileManager::readFile(){
    std::string fileContents;
    std::string filePath = "input_data/a_example.txt";

    ifstream openFile(filePath.data());
	if( openFile.is_open() ){
		std::string line;
		while(getline(openFile, line)){
            fileContents += line;
            fileContents += "-";
		}
		openFile.close();
        
        cout << "[DEBUG] contents : " << fileContents << endl;
        mFileContents = fileContents;
	}
}

std::string& CFileManager::getFileContents(){
    return mFileContents;
    
}

int main(void){
    /*
H 3 cat beach sun
V 2 selfie smile
V 2 garden selfie
H 2 garden cat
    */
    CFileManager manager;
    std::string fileContentsStr;
    
    cout << "A 0" << endl;
    manager.readFile();
    cout << "A 1" << endl;
    manager.getFileContents();
    cout << "A 2" << endl;
    //std::cout << "DEBUG1 : " << fileContentsStr << std::endl;




/*
    istringstream iss(tempStr);
    string s;
    while ( std::getline( iss, s, '\n' ) ) {
        printf( "`%s'\n", s.c_str() );
    }

        std::vector<std::string> album1;
    album1.push_back("aa");


*/
}