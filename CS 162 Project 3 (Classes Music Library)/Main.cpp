#include "ClassHeader.h" //VS throws different warnings depending on if/when(in file order)/where(in diff .cpp files) I declare #include cstring
#include "FunctionsHeader.h"
#include <iostream>
#include <fstream>
#include <cstring> //need?

using namespace std;

/*
NEED:
-USE class named Song to model song.
-USE class named SongList to model the collection of songs
-USE array of Song to implement class SongList
-WHEN using class, make sure to encapsulate the data (which means make all the instance data member
private and provide accessor method and mutator methods to access and manipulate the data)
-FOR submission, your data file should have test cases for the same artist/multiple songs/same album
-YOU are required to have a makefile inside the project directory. THE tar file should have
the makefile in it. When grading the project, after extracting from the tar file, all
she will do is type "make" to build the app and "make clean" to remove the executable and object code.
*/
int main()
{
	char cFileNamePath[MAX_CHAR];
	fstream inputFile;
	int iMenu_Result;
	int i = 0;
	bool bRunCode;
	int iArraySize = 0;
	Song songs;
	SongList songlist;

		
	GetFileName(cFileNamePath);
	cout << "File name '" << cFileNamePath << "'open for reading/writing." << endl << endl;

	
	inputFile.open(cFileNamePath, fstream::in);

	//songs.ReadFile(iArraySize, songs);


//	while (inputFile.good())
//	{
	songs.ReadFile(iArraySize, songs);
		songlist.MakeSongList(iArraySize, songs);

	//songlist.MakeSongList(iArraySize, songs);
	//songlist.PrintSongList(iArraySize, songs);
//	}
	inputFile.close();
	
/*	for (int i = 0; i < iArraySize; i++)
	{
		SongList[i] = songs.ReadFile(iArraySize, songs);
		
		cout << "iArraySize" << iArraySize << endl;
	}
	*/


//	SongList[i].MakeSongList(iArraySize, songs);

//	while (inputFile.good())
//	{
		//SongList[MAX_CHAR].MakeSongList(iArraySize, songs);
//		songs.ReadFile(iArraySize, songs);
		//SongList[iArraySize].MakeSongList(iArraySize, songs);
		//iArraySize++;
//	}
//	SongList.PrintSongTEST(iArraySize, songs);
	
	
	bRunCode = true;

//	iArraySize = i;

	while (bRunCode == true)
	{
		iMenu_Result = CallMenu();
		//get menu response

		if (iMenu_Result == 1)
		{
			songs.PrintSong(iArraySize, songs);
			//display all songs
		}
		else if (iMenu_Result == 2)
		{
		//	songs[MAX_CHAR].AddSong(iArraySize, songs);
			//add song
		}

		else if (iMenu_Result == 3)
		{
	//		songs[MAX_CHAR].RemoveSong(iArraySize, songs);
			//remove song
		}
		else if (iMenu_Result == 4)
		{
	//		songs[MAX_CHAR].SearchByArtist(iArraySize, songs);
			//search song by artist
		}
		else if (iMenu_Result == 5)
		{
	//		songs[MAX_CHAR].SearchByAlbum(iArraySize, songs);
			//search song by album
		}
		else if (iMenu_Result == 6)
		{
	//		songs[MAX_CHAR].UpdateFile(iArraySize, songs);
			cout << "Saving changes and closing program. Goodbye." << endl;
			bRunCode = false;
		}
		else
		{
			cout << "Unknown Error. Exiting Program." << endl << endl;
			bRunCode = false;
		}
	}
	return 0;
}