#ifndef __SIRIKATA_JS_PRESENCE_STRUCT_HPP__
#define __SIRIKATA_JS_PRESENCE_STRUCT_HPP__

#include <sirikata/oh/HostedObject.hpp>
#include <v8.h>

#include "JSContextStruct.hpp"

namespace Sirikata {
namespace JS {

//need to forward-declare this so that can reference this inside
class JSObjectScript;

struct JSPresenceStruct
{

    JSPresenceStruct(JSObjectScript* parent,v8::Handle<v8::Function> onConnected,int presenceToken); //isConnected is false using this:
                                              //have no sporef
    JSPresenceStruct(JSObjectScript* parent, const SpaceObjectReference& _sporef,int presenceToken);
    ~JSPresenceStruct();


    void connect(const SpaceObjectReference& _sporef);
    void disconnect();
    
    v8::Handle<v8::Value> registerOnProxRemovedEventHandler(v8::Handle<v8::Function>cb);
    v8::Handle<v8::Value> registerOnProxAddedEventHandler(v8::Handle<v8::Function> cb);

    static JSPresenceStruct* decodePresenceStruct(v8::Handle<v8::Value> toDecode ,std::string& errorMessage);


    bool getIsConnected();
    
    v8::Handle<v8::Value> setConnectedCB(v8::Handle<v8::Function> newCB);

    v8::Handle<v8::Value> struct_getPosition();
    v8::Handle<v8::Value> struct_setVelocity(const Vector3f& newVel);
    v8::Handle<v8::Value> struct_createContext(SpaceObjectReference* canMessage, bool sendEveryone,bool recvEveryone,bool proxQueries);

    v8::Handle<v8::Value> struct_broadcastVisible(v8::Handle<v8::Object> toBroadcast);
    
    void addAssociatedContext(JSContextStruct*);

    v8::Persistent<v8::Function> mOnProxRemovedEventHandler;
    v8::Persistent<v8::Function> mOnProxAddedEventHandler;
    v8::Persistent<v8::Function> mOnConnectedCallback;
    
    int getPresenceToken();

    v8::Handle<v8::Value>  getOrientationFunction();
    v8::Handle<v8::Value>  getVelocityFunction();
    v8::Handle<v8::Value>  setPositionFunction(Vector3f newPos);
    v8::Handle<v8::Value>  setVisualScaleFunction(float new_scale);
    v8::Handle<v8::Value>  getVisualScaleFunction();
    v8::Handle<v8::Value>  setQueryAngleFunction(SolidAngle new_qa);
    v8::Handle<v8::Value>  setOrientationVelFunction(Quaternion newOrientationVel);
    v8::Handle<v8::Value>  getOrientationVelFunction();
    v8::Handle<v8::Value>  getVisualFunction();
    v8::Handle<v8::Value>  setVisualFunction(String urilocation);
    v8::Handle<v8::Value>  setOrientationFunction(Quaternion newOrientation);
    v8::Handle<v8::Value>  runSimulation(String simname);

    
    SpaceObjectReference* getSporef()
    {
        return sporef;
    }



private:
    //data
    JSObjectScript* jsObjScript;
    SpaceObjectReference* sporef; //sporef associated with this presence.
    bool isConnected;
    bool hasConnectedCallback;
    int mPresenceToken;
    

    ContextVector associatedContexts;
    
    void clearPreviousConnectedCB();
};


}//end namespace js
}//end namespace sirikata

#endif
