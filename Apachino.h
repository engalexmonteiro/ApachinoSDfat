/*
 * Apachino.h
 *
 *  Created on: 22 de jul de 2020
 *      Author: User
 */

#ifndef APACHINO_H_
#define APACHINO_H_

#include <SPI.h>
#include <Ethernet.h>
#include<SPI.h>
#include "SdFat.h"
#include "FreeStack.h"

// SD card chip select pin.
#define SD_CS_PIN 4
#define WWW "/wwwb" //"/wwwb"
#define MAINPAGE "/index.htm"
#define LOGINPG "/login.htm"
#define LOGOUTPG "/logout.htm"
#define PASSWD "YWRtaW46YWRtaW4="


//Request Defines
#define HTTPOK F("HTTP/1.1 200 OK")
#define CTENTP F("Content Type: ")
#define CONNEC F("Connection: closed")

const char sct[] = "%s/%s";
#define TEXT "text"
#define IMAGE "image"
#define FILEN "file"
#define JPG "jpg"
#define PNG "png"
#define PDF "pdf"
#define HTM "htm"
#define HTML "html"
#define ICO  "ico"
#define WEBP "webp"
#define JS "js"
#define CSS "css"

extern SdFat sd;
extern SdFile file;


void init_sdcart();

bool check_ethernet();

int processHtppRequest(EthernetServer server);

#endif /* APACHINO_H_ */
