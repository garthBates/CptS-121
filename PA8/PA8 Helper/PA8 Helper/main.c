/*
Programmer: Garth Bates
Class: CptS 121, Summer 2018
Programming Assignment: PA8
Date: 7/23/2018
Discription:
*/

#include "pa8.h"
#define PARTS_OF_SPEECH 4


int main()
{
	FILE* infile = NULL;
	//pointer to pointer for our 2d array of sentences
	char **generated_sentences = NULL;
	//pointer to pointer for our 2d array for each part of speech
	char **articles = NULL, **nouns = NULL, **verbs = NULL, **prepositions = NULL;
	//temp variable for input words - 75 length max + null terminating character
	char temp[76] = "";
	char sentence[100] = "";
	char fresh[1] = "";
	char * string_input_ok = NULL;
	int input_ok = -1, sentences_to_generate = 0, max_length_of_string = 0;
	int num_words = 0, num_articles = 0, num_nouns = 0, num_verbs = 0, num_prepositions = 0;

	srand(time(NULL));

	infile = fopen("input.txt", "r");
	input_ok = fscanf(infile, "%d ", &sentences_to_generate);

	generated_sentences = (char **)malloc(sentences_to_generate * sizeof(char*));

	//2. NOW, onto parsing the parts of speech (IN ANY ORDER!)
	for (int i = 0; i < PARTS_OF_SPEECH; i++) //we know there are only 4 parts of speech so just loop 4 times!
	{
	

		input_ok = fscanf(infile, "%s %d ", temp, &num_words);
		part_of_speech pos_to_process = pos_string_to_enum(temp);
		switch (pos_to_process)
		{
		case Articles: //process our articles!
			puts("Process Articles!");
			articles = (char**)malloc(num_words * sizeof(char*));
			//need to keep track of how many articles we allocated memory for
			num_articles = num_words;
			//allocate space for our number of articles
			//we just read in how many words we need to dynamically allocate space for!
			for (int i = 0; i < num_articles; i++)
			{
				//scan in our word
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1; //don't forget null terminating character
				//dynamically allocate space for the word we just scanned in
				articles[i] = (char*)malloc(max_length_of_string * sizeof(char));
				//now copy in the string!
				strcpy(articles[i], temp);
			}
			sort(articles, num_articles);
			break;
		case Nouns:
			puts("Process Nouns!");
			nouns = (char**)malloc(num_words * sizeof(char*));
			num_nouns = num_words;
			for (int i = 0; i < num_nouns; i++) {
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1;
				nouns[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(nouns[i], temp);
			}
			sort(nouns, num_nouns);
			break;
		case Verbs:
			puts("Process Verbs!");
			verbs = (char**)malloc(num_words * sizeof(char*));
			num_verbs = num_words;
			for (int i = 0; i < num_verbs; i++) {
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1;
				verbs[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(verbs[i], temp);
			}
			sort(verbs, num_verbs);
			break;
		case Prepositions:
			puts("Process Prepositions!");
			prepositions = (char**)malloc(num_words * sizeof(char*));
			num_prepositions = num_words;
			for (int i = 0; i < num_prepositions; i++) {
				input_ok = fscanf(infile, "%s", temp);
				max_length_of_string = strlen(temp) + 1;
				prepositions[i] = (char*)malloc(max_length_of_string * sizeof(char));
				strcpy(prepositions[i], temp);
			}
			sort(prepositions, num_prepositions);
			break;
		default:
			puts("INVALID PART OF SPEECH!");
			break;
		}
	}
	system("pause");
	system("cls");
	printf("\nWELCOME TO THE RANDOM SENTENCSE C PROGRAM!!\n");
	printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n\n");
	printf("WORD BANK\n---------\n");
	printf("\n\tArticles: ");
	for (int i = 0; i < num_articles; i++) {
		printf("%s ", articles[i]);
	}
	printf("\n\n\tNouns: ");
	for (int i = 0; i < num_nouns; i++) {
		printf("%s ", nouns[i]);
	}
	printf("\n\n\tVerbs: ");
	for (int i = 0; i < num_verbs; i++) {
		printf("%s ", verbs[i]);
	}
	printf("\n\n\tPrepositions: ");
	for (int i = 0; i < num_prepositions; i++)
	{
		printf("%s ", prepositions[i]);
	}
	string_input_ok = fgets(temp, 76, infile);


	printf("\nGENERATED SENTENCES\n-------------------\n\n");
	generated_sentences = (char**)malloc(sentences_to_generate * sizeof(char*));
	for (int i = 0; i < sentences_to_generate; i++) {
		strcpy(sentence, fresh);
		strcat(sentence, articles[rand() % num_articles]);
		to_upper(sentence);
		strcat(sentence, " ");
		strcat(sentence, nouns[rand() % num_nouns]);
		strcat(sentence, " ");
		strcat(sentence, verbs[rand() % num_verbs]);
		strcat(sentence, " ");
		strcat(sentence, prepositions[rand() % num_prepositions]);
		strcat(sentence, " ");
		strcat(sentence, articles[rand() % num_articles]);
		strcat(sentence, " ");
		strcat(sentence, nouns[rand() % num_nouns]);
		strcat(sentence, "!");
		max_length_of_string = strlen(sentence + 1);
		generated_sentences[i] = (char *)malloc(max_length_of_string * sizeof(char));
		strcpy(generated_sentences[i], sentence);
	}
	
	for (int i = 0; i < sentences_to_generate; i++) {
		printf("\t%d. %s\n\n", i + 1, generated_sentences[i]);
	}
	//articles
	for (int i = 0; i < num_articles; i++)
	{
		free(articles[i]);
	}

	//nouns
	for (int i = 0; i < num_nouns; i++) {
		free(nouns[i]);
	}

	//verbs
	for (int i = 0; i < num_verbs; i++) {
		free(verbs[i]);
	}

	//prepositions
	for (int i = 0; i < num_prepositions; i++) {
		free(prepositions[i]);
	}

	//generated sentences
	for (int i = 0; i < sentences_to_generate; i++) {
		free(generated_sentences[i]);
	}
	 
	//articles
	free(articles);
	//nouns
	free(nouns);
	//verbs
	free(verbs);
	//prepositions
	free(prepositions);
	//generated sentences
	free(generated_sentences);
	system("pause");

	return 0;
}