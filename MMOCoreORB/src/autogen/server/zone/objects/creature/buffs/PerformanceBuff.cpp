/*
 *	autogen/server/zone/objects/creature/buffs/PerformanceBuff.cpp generated by engine3 IDL compiler 0.60
 */

#include "PerformanceBuff.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/creature/buffs/PowerBoostBuffDurationEvent.h"

/*
 *	PerformanceBuffStub
 */

enum {RPC_ACTIVATE__BOOL_ = 1740866512,RPC_GETBUFFSTRENGTH__,RPC_DEACTIVATE__BOOL_};

PerformanceBuff::PerformanceBuff(CreatureObject* creo, unsigned int buffCRC, float value, int duration, int typeOfBuff) : Buff(DummyConstructorParameter::instance()) {
	PerformanceBuffImplementation* _implementation = new PerformanceBuffImplementation(creo, buffCRC, value, duration, typeOfBuff);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("PerformanceBuff");
}

PerformanceBuff::PerformanceBuff(DummyConstructorParameter* param) : Buff(param) {
	_setClassName("PerformanceBuff");
}

PerformanceBuff::~PerformanceBuff() {
}



void PerformanceBuff::activate(bool applyModifiers) {
	PerformanceBuffImplementation* _implementation = static_cast<PerformanceBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ACTIVATE__BOOL_);
		method.addBooleanParameter(applyModifiers);

		method.executeWithVoidReturn();
	} else {
		_implementation->activate(applyModifiers);
	}
}

float PerformanceBuff::getBuffStrength() {
	PerformanceBuffImplementation* _implementation = static_cast<PerformanceBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBUFFSTRENGTH__);

		return method.executeWithFloatReturn();
	} else {
		return _implementation->getBuffStrength();
	}
}

void PerformanceBuff::deactivate(bool removeModifiers) {
	PerformanceBuffImplementation* _implementation = static_cast<PerformanceBuffImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEACTIVATE__BOOL_);
		method.addBooleanParameter(removeModifiers);

		method.executeWithVoidReturn();
	} else {
		_implementation->deactivate(removeModifiers);
	}
}

DistributedObjectServant* PerformanceBuff::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* PerformanceBuff::_getImplementationForRead() const {
	return _impl;
}

void PerformanceBuff::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PerformanceBuffImplementation
 */

PerformanceBuffImplementation::PerformanceBuffImplementation(DummyConstructorParameter* param) : BuffImplementation(param) {
	_initializeImplementation();
}


PerformanceBuffImplementation::~PerformanceBuffImplementation() {
}


void PerformanceBuffImplementation::finalize() {
}

void PerformanceBuffImplementation::_initializeImplementation() {
	_setClassHelper(PerformanceBuffHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PerformanceBuffImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PerformanceBuff*>(stub);
	BuffImplementation::_setStub(stub);
}

DistributedObjectStub* PerformanceBuffImplementation::_getStub() {
	return _this.get();
}

PerformanceBuffImplementation::operator const PerformanceBuff*() {
	return _this.get();
}

void PerformanceBuffImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void PerformanceBuffImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void PerformanceBuffImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void PerformanceBuffImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void PerformanceBuffImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void PerformanceBuffImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void PerformanceBuffImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void PerformanceBuffImplementation::_serializationHelperMethod() {
	BuffImplementation::_serializationHelperMethod();

	_setClassName("PerformanceBuff");

}

void PerformanceBuffImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(PerformanceBuffImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PerformanceBuffImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (BuffImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xffc5b90b: //PerformanceBuff.strength
		TypeInfo<float >::parseFromBinaryStream(&strength, stream);
		return true;

	case 0xb981cb36: //PerformanceBuff.type
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;

	}

	return false;
}

void PerformanceBuffImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PerformanceBuffImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PerformanceBuffImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = BuffImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xffc5b90b; //PerformanceBuff.strength
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<float >::toBinaryStream(&strength, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xb981cb36; //PerformanceBuff.type
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 2;
}

PerformanceBuffImplementation::PerformanceBuffImplementation(CreatureObject* creo, unsigned int buffCRC, float value, int duration, int typeOfBuff) : BuffImplementation(creo, buffCRC, duration, BuffType::PERFORMANCE) {
	_initializeImplementation();
	// server/zone/objects/creature/buffs/PerformanceBuff.idl():  		strength = value;
	strength = value;
	// server/zone/objects/creature/buffs/PerformanceBuff.idl():  		type = typeOfBuff;
	type = typeOfBuff;
}

float PerformanceBuffImplementation::getBuffStrength() {
	// server/zone/objects/creature/buffs/PerformanceBuff.idl():  		return strength;
	return strength;
}

/*
 *	PerformanceBuffAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


PerformanceBuffAdapter::PerformanceBuffAdapter(PerformanceBuff* obj) : BuffAdapter(obj) {
}

void PerformanceBuffAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ACTIVATE__BOOL_:
		{
			bool applyModifiers = inv->getBooleanParameter();
			
			activate(applyModifiers);
			
		}
		break;
	case RPC_GETBUFFSTRENGTH__:
		{
			
			float _m_res = getBuffStrength();
			resp->insertFloat(_m_res);
		}
		break;
	case RPC_DEACTIVATE__BOOL_:
		{
			bool removeModifiers = inv->getBooleanParameter();
			
			deactivate(removeModifiers);
			
		}
		break;
	default:
		BuffAdapter::invokeMethod(methid, inv);
	}
}

void PerformanceBuffAdapter::activate(bool applyModifiers) {
	(static_cast<PerformanceBuff*>(stub))->activate(applyModifiers);
}

float PerformanceBuffAdapter::getBuffStrength() {
	return (static_cast<PerformanceBuff*>(stub))->getBuffStrength();
}

void PerformanceBuffAdapter::deactivate(bool removeModifiers) {
	(static_cast<PerformanceBuff*>(stub))->deactivate(removeModifiers);
}

/*
 *	PerformanceBuffHelper
 */

PerformanceBuffHelper* PerformanceBuffHelper::staticInitializer = PerformanceBuffHelper::instance();

PerformanceBuffHelper::PerformanceBuffHelper() {
	className = "PerformanceBuff";

	Core::getObjectBroker()->registerClass(className, this);
}

void PerformanceBuffHelper::finalizeHelper() {
	PerformanceBuffHelper::finalize();
}

DistributedObject* PerformanceBuffHelper::instantiateObject() {
	return new PerformanceBuff(DummyConstructorParameter::instance());
}

DistributedObjectServant* PerformanceBuffHelper::instantiateServant() {
	return new PerformanceBuffImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PerformanceBuffHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PerformanceBuffAdapter(static_cast<PerformanceBuff*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
