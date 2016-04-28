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

#ifndef INDEX_MAPPING_H_
#define INDEX_MAPPING_H_

#include <map>

#include "UniID.h"

namespace core {
namespace index {

enum IndexPropertyType
{
    string,
    integer
};

struct IndexProperty
{
    std::string name;
    IndexPropertyType type;
};

typedef std::map<UniID, IndexProperty> IndexMapping;

}
}

#endif /* INDEX_MAPPING_H_ */
