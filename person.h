#ifndef __PERSON_H__
#define __PERSON_H__

#include "basic.h"
#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdint.h>

#define DB_FILE     "shell.db"
#define MAX_INPUT     4
#define MAX_ID_LEN   10
#define MAX_STR_LEN 200

#define NAME_LENGTH     50
#define SHELL_LENGTH   200
#define HOME_LENGTH    200
#define LOGIN_LENGTH    50
#define PASSWORD_LENGTH 50

typedef struct p {
	// stale 32-bitovy typ na lubovolnej architekture - je potrebny
	// hlavickovy subor stdint.h
	uint32_t  id;
	char name[NAME_LENGTH];
	char login[LOGIN_LENGTH];
	char password[PASSWORD_LENGTH];
	char shell[SHELL_LENGTH];
	char home[HOME_LENGTH];
} person;

// void je volitelny, ale odporuca sa do prototypu pisat
void addPerson(void);
void displayPerson(void);
void listPersons(void);
void removePerson(void);
void editPerson(void);
int openDB(void);
void closeDB(void);
void updateDB(void);

#endif /* __PERSON_H__ */ // zvyk napisat do komentara, coho sa tyka tento hlavickovy subor
