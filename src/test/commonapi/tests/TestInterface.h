/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.0.qualifier.
* Used org.franca.core 0.8.9.201308271211.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_Test_Interface_H_
#define COMMONAPI_TESTS_Test_Interface_H_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {

class TestInterface {
 public:
    virtual ~TestInterface() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* TestInterface::getInterfaceId() {
    static const char* interfaceId = "commonapi.tests.TestInterface";
    return interfaceId;
}

CommonAPI::Version TestInterface::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace tests
} // namespace commonapi

namespace CommonAPI {

}


namespace std {
    //hashes for types
    
    //hashes for error types
}

#endif // COMMONAPI_TESTS_Test_Interface_H_
