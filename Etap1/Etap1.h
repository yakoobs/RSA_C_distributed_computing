//
// Created by Kuba Sokolowski on 28/03/16.
//

#ifndef RSA_TESTETAPI_H
#define RSA_TESTETAPI_H

void encryptFile();
void decryptFile();

void encryptText();
void decryptText();
void test();

#define MAX_TEXT_LENGTH 4000000
#define TEXT_FILE_PATH "/Users/kuba.sokolowski/Desktop/text.txt"
#define ENCODED_TEXT_FILE_PATH "/Users/kuba.sokolowski/Desktop/encodedText.txt"
#define DECODED_TEXT_FILE_PATH "/Users/kuba.sokolowski/Desktop/decodedText.txt"


/**
 * Writing and reading from the text file
 */
void saveEncodedTextToFile();
void saveDecodedTextToFile();
void loadClearTextFromFile();

#endif //RSA_TESTETAPI_H
