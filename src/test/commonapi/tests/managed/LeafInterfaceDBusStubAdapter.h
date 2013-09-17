/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.0.qualifier.
* Used org.franca.core 0.8.9.201308271211.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Leaf_Interface_DBUS_STUB_ADAPTER_H_
#define COMMONAPI_TESTS_MANAGED_Leaf_Interface_DBUS_STUB_ADAPTER_H_

#include <commonapi/tests/managed/LeafInterfaceStub.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusStubAdapterHelper.h>
#include <CommonAPI/DBus/DBusStubAdapter.h>
#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusServicePublisher.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

typedef CommonAPI::DBus::DBusStubAdapterHelper<LeafInterfaceStub> LeafInterfaceDBusStubAdapterHelper;

class LeafInterfaceDBusStubAdapter: public LeafInterfaceStubAdapter, public LeafInterfaceDBusStubAdapterHelper {
 public:
    LeafInterfaceDBusStubAdapter(
            const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
            const std::string& commonApiAddress,
            const std::string& dbusInterfaceName,
            const std::string& dbusBusName,
            const std::string& dbusObjectPath,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
            const std::shared_ptr<CommonAPI::StubBase>& stub);

    ~LeafInterfaceDBusStubAdapter();


    

    const StubDispatcherTable& getStubDispatcherTable();
    
    void deactivateManagedInstances();

 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;
    
  private:
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Leaf_Interface_DBUS_STUB_ADAPTER_H_
