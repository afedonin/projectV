/*
 * Licensed to Alexey Fedonin under one or more contributor
 * license agreements. See the NOTICE file distributed with
 * this work for additional information regarding copyright
 * ownership. Alexey Fedonin licenses this file to you under
 * the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef UNICODEDATA_H_
#define UNICODEDATA_H_

#include <string.h>

namespace core {
namespace index {

class UnicodeDataI
{
protected:
    char * _data;
    size_t _size;

    //TODO: Запретить дефолтный конструктор

public:
    const char * data() const { return _data; }
    const size_t size() const { return _size; }

    virtual ~UnicodeDataI() {};
};

class UnicodeDataRef : public UnicodeDataI
{
    //TODO: Запретить дефолтный конструктор
public:
    UnicodeDataRef( const char * data, size_t size ) :
        _data(data),
        _size(size)
    {}

    virtual ~UnicodeDataRef() {};
};

class UnicodeData : public UnicodeDataI
{
    //TODO: Запретить дефолтный конструктор
public:
    UnicodeData( const char * data, size_t size ) :
        _size(size)
    {
        _data = new char[_size];
        ::memcpy(_data, data, _size);
    }

    virtual ~UnicodeData()
    {
        delete [] _data;
    }
};

}
}


#endif /* UNICODEDATA_H_ */
