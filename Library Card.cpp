// Library Card.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Book {
private:
	std::string m_sBookTitle;
	std::string m_sAuthor;
	int m_iNumberOfCopies;
public:
	Book(std::string sBookTitle, std::string sAuthor, int iNumberOfCopies)
		:m_sBookTitle(sBookTitle), m_sAuthor(sAuthor), m_iNumberOfCopies(iNumberOfCopies)
	{
	}
	std::string GetTitle() {
		return m_sBookTitle;
	}
	std::string GetAuthor() {
		return m_sAuthor;
	}
	int GetNumberOfCopies() {
		return m_iNumberOfCopies;
	}
};
class Library {
private:
	std::vector<Book>m_objBooks;
public:
	void AddBookToLibrary(std::string sBookTitle, std::string sAuthor, int iNumberOfCopies) {
		m_objBooks.push_back({sBookTitle, sAuthor, iNumberOfCopies});
	}
	void DisplayBooks() {
		int iCount = 0;
		for (Book& objBook : m_objBooks) {
			std::cout << "--------" << std::endl;
			std::cout << "Book " << iCount + 1 << objBook.GetTitle() << std::endl;
			std::cout << objBook.GetAuthor() << std::endl;
			std::cout << objBook.GetNumberOfCopies() << std::endl;
	
		}
	}
};

void AddBooks(Library &objLibrary) 
{
	objLibrary.AddBookToLibrary("Harry Potter - Chamber of Secrets", "J.K Rowling", 21);
	objLibrary.AddBookToLibrary("Harry Potter - Half Blood Prince", "J.K Rowling", 14);
	objLibrary.AddBookToLibrary("Harry Potter - Prisoner of Askaban", "J.K Rowling", 12);
	objLibrary.AddBookToLibrary("Harry Potter - Deathly Hallows", "J.K Rowling", 9);
}

int main()
{
	Library objLibrary;
	AddBooks(objLibrary);
	objLibrary.DisplayBooks();
}

