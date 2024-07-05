#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Song {
private:
	string title, artist, duration;
public:
	Song(string t, string a, string d) {
		title = t;
		artist = a;
		duration = d;
	}

	Song(){}
	
	void display() {
		cout << "Title: " << title << endl << "Artist: " << artist << endl << "Duration: " << duration << endl;
	}
};

class Playlist {
private:
	vector<Song>songs;

public:
	void addSong(Song song) {
		songs.push_back(song);
	}

	void displaySongs() {
		for (auto& song : songs) {
			cout << endl;
			song.display();
		}
	}
};

int main() {
	cout << "Tooba Farooq SE-009" << endl;

	Song song1("Har Zulm", "Sajjad Ali", "4:34");
	Song song2("Boom Boom", "Nazia Hassan", "5:10");

	Playlist playlist;

	playlist.addSong(song1);
	playlist.addSong(song2);

	playlist.displaySongs();

	return 0;
}
