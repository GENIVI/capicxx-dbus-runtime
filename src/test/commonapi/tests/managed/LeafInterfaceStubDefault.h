/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.0.qualifier.
* Used org.franca.core 0.8.9.201308271211.
*
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_DEFAULT_H_
#define COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_DEFAULT_H_

#include <commonapi/tests/managed/LeafInterfaceStub.h>
#include <sstream>

namespace commonapi {
namespace tests {
namespace managed {

/**
 * Provides a default implementation for LeafInterfaceStubRemoteEvent and
 * LeafInterfaceStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class LeafInterfaceStubDefault : public LeafInterfaceStub {
 public:
    LeafInterfaceStubDefault();

    LeafInterfaceStubRemoteEvent* initStubAdapter(const std::shared_ptr<LeafInterfaceStubAdapter>& stubAdapter);


    virtual void testLeafMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t inInt, std::string inString, LeafInterface::testLeafMethodError& methodError, int32_t& outInt, std::string& outString);
    virtual void testLeafMethod(int32_t inInt, std::string inString, LeafInterface::testLeafMethodError& methodError, int32_t& outInt, std::string& outString);


    

 protected:
    std::shared_ptr<LeafInterfaceStubAdapter> stubAdapter_;
 private:
    class RemoteEventHandler: public LeafInterfaceStubRemoteEvent {
     public:
        RemoteEventHandler(LeafInterfaceStubDefault* defaultStub);


     private:
        LeafInterfaceStubDefault* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;

};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_DEFAULT_H_
