/*
 * Dictionary.cpp
 *
 *  Created on: Mar 23, 2020
 *      Author: hugom
 */

#include "Dictionary.h"

Dictionary::Dictionary() {
	srand(time(NULL));
	add(Word("tubarao","animal"));
	_word_list.push_back( Word("amarelo","cor"));
	_word_list.push_back( Word("azul","cor"));
	_word_list.push_back( Word("vermelho","cor"));
	_word_list.push_back( Word("tartaruga","animal"));
	_word_list.push_back( Word("polvo","animal"));
	_word_list.push_back( Word("pente","objeto"));
	_word_list.push_back( Word("verde","cor"));
	_word_list.push_back( Word("recife","cidade"));
	_word_list.push_back( Word("florianopolis","cidade"));
	_word_list.push_back( Word("marrom","cor"));
	_word_list.push_back( Word("andar","verbo"));
	_word_list.push_back( Word("dormir","verbo"));
	_word_list.push_back( Word("correr","verbo"));
	_word_list.push_back( Word("pular","verbo"));
}

Dictionary::~Dictionary() {
	/* while (!_word_list.empty()) {
	   delete _word_list.back();
	   _word_list.pop_back();
	} */
}

void Dictionary::add(Word p1){
	_word_list.push_back(p1);
}

Word Dictionary::select(){
	int idx = rand() % _word_list.size();
	return _word_list[idx];

}
