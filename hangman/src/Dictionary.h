/*
 * Dictionary.h
 *
 *  Created on: Mar 23, 2020
 *      Author: hugom
 */

#ifndef DICTIONARY_H_
#define DICTIONARY_H_

#include "Word.h"
#include <string>
#include <vector>

using namespace std;
using std::vector;

class Dictionary
{
private:
	vector<Word> _word_list;

public:
	Dictionary();
	void add(Word p1);
	Word select();
	virtual ~Dictionary();
};

#endif /* DICTIONARY_H_ */
