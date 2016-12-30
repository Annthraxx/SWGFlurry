/*
 *	autogen/server/zone/objects/creature/conversation/TrainerConversationObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "TrainerConversationObserver.h"

/*
 *	TrainerConversationObserverStub
 */

TrainerConversationObserver::TrainerConversationObserver(unsigned int convoTemplateCRC) : ConversationObserver(DummyConstructorParameter::instance()) {
	TrainerConversationObserverImplementation* _implementation = new TrainerConversationObserverImplementation(convoTemplateCRC);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("TrainerConversationObserver");
}

TrainerConversationObserver::TrainerConversationObserver(DummyConstructorParameter* param) : ConversationObserver(param) {
	_setClassName("TrainerConversationObserver");
}

TrainerConversationObserver::~TrainerConversationObserver() {
}



DistributedObjectServant* TrainerConversationObserver::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* TrainerConversationObserver::_getImplementationForRead() const {
	return _impl;
}

void TrainerConversationObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TrainerConversationObserverImplementation
 */

TrainerConversationObserverImplementation::TrainerConversationObserverImplementation(DummyConstructorParameter* param) : ConversationObserverImplementation(param) {
	_initializeImplementation();
}


TrainerConversationObserverImplementation::~TrainerConversationObserverImplementation() {
}


void TrainerConversationObserverImplementation::finalize() {
}

void TrainerConversationObserverImplementation::_initializeImplementation() {
	_setClassHelper(TrainerConversationObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TrainerConversationObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TrainerConversationObserver*>(stub);
	ConversationObserverImplementation::_setStub(stub);
}

DistributedObjectStub* TrainerConversationObserverImplementation::_getStub() {
	return _this.get();
}

TrainerConversationObserverImplementation::operator const TrainerConversationObserver*() {
	return _this.get();
}

void TrainerConversationObserverImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void TrainerConversationObserverImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void TrainerConversationObserverImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void TrainerConversationObserverImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void TrainerConversationObserverImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void TrainerConversationObserverImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void TrainerConversationObserverImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void TrainerConversationObserverImplementation::_serializationHelperMethod() {
	ConversationObserverImplementation::_serializationHelperMethod();

	_setClassName("TrainerConversationObserver");

}

void TrainerConversationObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(TrainerConversationObserverImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TrainerConversationObserverImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ConversationObserverImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0x1d0ce417: //TrainerConversationObserver.trainerScreenHandlers
		TypeInfo<TrainerScreenHandlers >::parseFromBinaryStream(&trainerScreenHandlers, stream);
		return true;

	}

	return false;
}

void TrainerConversationObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TrainerConversationObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TrainerConversationObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ConversationObserverImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0x1d0ce417; //TrainerConversationObserver.trainerScreenHandlers
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<TrainerScreenHandlers >::toBinaryStream(&trainerScreenHandlers, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

/*
 *	TrainerConversationObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


TrainerConversationObserverAdapter::TrainerConversationObserverAdapter(TrainerConversationObserver* obj) : ConversationObserverAdapter(obj) {
}

void TrainerConversationObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	default:
		ConversationObserverAdapter::invokeMethod(methid, inv);
	}
}

/*
 *	TrainerConversationObserverHelper
 */

TrainerConversationObserverHelper* TrainerConversationObserverHelper::staticInitializer = TrainerConversationObserverHelper::instance();

TrainerConversationObserverHelper::TrainerConversationObserverHelper() {
	className = "TrainerConversationObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void TrainerConversationObserverHelper::finalizeHelper() {
	TrainerConversationObserverHelper::finalize();
}

DistributedObject* TrainerConversationObserverHelper::instantiateObject() {
	return new TrainerConversationObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* TrainerConversationObserverHelper::instantiateServant() {
	return new TrainerConversationObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TrainerConversationObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TrainerConversationObserverAdapter(static_cast<TrainerConversationObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
