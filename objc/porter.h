//
//  porter.h
//

#ifndef porter_h
#define porter_h


/* stemmer is a structure for a few local bits of data */

struct stemmer {
	char * b;       /* buffer for word to be stemmed */
	int k;          /* offset to the end of the string */
	int j;          /* a general offset into the string */
};


extern struct stemmer * create_stemmer(void);
extern void free_stemmer(struct stemmer * z);

extern int stem(struct stemmer * z, char * b, int k);


#endif
