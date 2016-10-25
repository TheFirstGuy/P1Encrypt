/*
Author: Urs Evora
Date: 10/24/2016
Class: PiEncrypt
Description: Encryptes files and saves them as a p1 file.
*/

#ifndef P1ENCRYPT_H
#define P1ENCRYPT_H


#include <

// Forward declairations 
class File;

class PiEncrypt{

public:

///
/// Constructor
///
PiEncrypt();

///
/// Destructor
///
~PiEncrypt();

///
/// Encrypts input file
///
/// \param pwd  a string password used to encrypt
///        with a max length of 128 characters
///
/// \return 'true' if successful. 'false' otherwise.
bool encrypt(const std::string& pwd);

///
/// Decrypts input file
///
/// \param pwd a string password used to dencrypt
///        with a max length of 128 characters
///
/// \return 'true' if successful. 'false' otherwise.
bool decrypt(const std::string pwd);


///
/// Sets the specified file
///
void setFile( std::fstream* f );


private:

///
/// Hashes input into a string of 128 characters
///
/// \param pwd a string to be hashed. With a max of 128 characters
///
/// \return and integer representing the starting position of encryption
int hash( const std::string pwd ) const;



///
///  Divides the numerator by the denominator and 
///  returns the quotient and remainder 
///
static void modDiv( const int numerator, 
             const int denominator,
             int& quotient,
             int& remainder ); 
             
std::fstream* inputFile_;

std::ostream* outputFile_;
             

#endif // P1ENCRYPT_H            
