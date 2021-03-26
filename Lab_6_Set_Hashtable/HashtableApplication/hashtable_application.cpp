//
// Created by user on 25/03/2021.
//
#include <iostream>
#include "BucketHashTable.h"
using namespace std;
int main(){
	vector<HashBucket> hb(MAX_DATA); // create hash bucket and initialize it
	for(auto & i : hb){
		i.head = nullptr;
		i.tail = nullptr;
		i.number_of_node = 0;
	}

	BucketHashTable myhashtable(hb);

	myhashtable.push_data(myhashtable.create_node(
			new Data("Sidony Tanis", "12-06-2002", 18,
			"San Fransico, California, United States of America")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Syntyche Shahjahan", "17-02-1998", 23,
			"New Delhi, India")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Dobromil Fedelma",  "15-03-2000", 21,
			 "Shanghai, China")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Muirne Avinash",  "01-05-1993", 28,
			 "Tokyo, Japan")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Senne Marian", "19-06-1983", 38,
			 "Jakarta, Indonesia")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Taisiya Knutr",  "08-07-1978", 43,
			 "Moscow, Russia")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Demetria Magomed",  "11-04-1989", 32,
			 "Riyadh, Saudi Arabia")));
	myhashtable.push_data(myhashtable.create_node(
			new Data( "Regan Till",  "12-01-1997", 24,
			 "London, United Kingdom")));

	myhashtable.delete_data( "Regan Till",  "12-01-1997");
//	myhashtable.push_data(myhashtable.create_node("Yudy Purnama"));
//	myhashtable.push_data(myhashtable.create_node("Hanry Ham"));
//	myhashtable.push_data(myhashtable.create_node("M Zulfikar"));
//	myhashtable.push_data(myhashtable.create_node("Jeklin Harefa"));
//	myhashtable.push_data(myhashtable.create_node("Dewi Suryani"));
//	myhashtable.push_data(myhashtable.create_node("Yohan Mulyono"));

	myhashtable.view_data();
	return 0;
}
