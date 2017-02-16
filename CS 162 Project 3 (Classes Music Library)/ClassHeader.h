#ifndef CLASS_H
#define CLASS_H

#define MAX_CHAR 200
/*
- USE class named Song to model song.
- USE class named SongList to model the collection of songs
- USE array of Song to implement class SongList
- WHEN using class, make sure to encapsulate the data(which means make all the instance data member
	private and provide accessor method and mutator methods to access and manipulate the data)
	*/

class Song 
{
public:
	void ReadFile(int&, Song&); //which is right? class Song* or Song *songs ? do I need to name a var?
	void PrintSong() const;  //int&, Song&

	/*void AddSong(int&, Song&);
	void RemoveSong(int&, Song&);
	void SearchByArtist(int&, Song&) const;
	void SearchByAlbum(int&, Song&) const;
	void UpdateFile(int&, Song&);
	*/
private:
	char cTitle[MAX_CHAR];
	char cArtist[MAX_CHAR];
	char cDuration[MAX_CHAR];
	char cAlbum[MAX_CHAR];
//	char cFullSong[MAX_CHAR];
};

class SongList
{
public:
	void MakeSongList(int&, Song&);
	void PrintSongList(int&, Song&) const;

private:
	Song songlist[MAX_CHAR]; //ok to name it this?
	
};


#endif


//void GetFileName(char*);
//int CallMenu();
//void PrintSong(int&, struct Song*);
//void UpdateFile(int&, struct Song*);
//void AddSong(int&, struct Song*);
//void RemoveSong(int&, struct Song*);
//void SearchByArtist(int&, struct Song*);
//void SearchByAlbum(int&, struct Song*);


/*
class Song
{
public: //member functions
//constructors
Song();
void sTitle(char*);
void sArtist(char*);
void sDuration(char*);
void sAlbum(char*);
//accessor functions

//mutator functions

private: //member variables
char cTitle[MAX_CHAR];
char cArtist[MAX_CHAR];
char cDuration[MAX_CHAR];
char cAlbum[MAX_CHAR];
};


class SongList
{
public:

private:


};
*/
