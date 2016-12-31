#ifndef HTTP_MEDIA_STREAM
#define HTTP_MEDIA_STREAM

#include <Arduino.h>
#include "../http/HTTPClient2.h"

#include "MediaStream.h"

class HTTPMediaStream : public MediaStream
{
  public:
    HTTPMediaStream(String url);
    int available() override;
    int read() override;
    int peek() override;
    void flush() override;

  private:
    HTTPClient2 httpClient;
    WiFiClient* httpStream;
};

#endif