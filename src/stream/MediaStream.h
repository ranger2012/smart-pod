#ifndef MEDIA_STREAM_H
#define MEDIA_STREAM_H

#include "Arduino.h"

// Abstract
class MediaStream : public Stream
{
public:
    bool isValid();
    size_t write(uint8_t byte) override;

protected:
    void setValid(bool valid);

private:
    bool valid = false;
};


#endif