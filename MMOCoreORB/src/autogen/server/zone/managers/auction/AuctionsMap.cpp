/*
 *	autogen/server/zone/managers/auction/AuctionsMap.cpp generated by engine3 IDL compiler 0.60
 */

#include "AuctionsMap.h"

#include "server/zone/objects/auction/AuctionItem.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	AuctionsMapStub
 */

enum {RPC_ADDITEM__CREATUREOBJECT_SCENEOBJECT_AUCTIONITEM_ = 1493191660,RPC_DELETEITEM__SCENEOBJECT_AUCTIONITEM_,RPC_GETITEM__LONG_,RPC_CONTAINSITEM__LONG_,RPC_GETPLAYERITEMCOUNT__CREATUREOBJECT_,RPC_GETVENDORITEMCOUNT__SCENEOBJECT_BOOL_,RPC_DELETETERMINALITEMS__SCENEOBJECT_,RPC_GETCOMMODITYCOUNT__CREATUREOBJECT_,RPC_UPDATEUID__SCENEOBJECT_STRING_STRING_,RPC_UPDATEVENDORSEARCH__SCENEOBJECT_BOOL_,RPC_ADDTOCOMMODITYLIMIT__AUCTIONITEM_,RPC_REMOVEFROMCOMMODITYLIMIT__AUCTIONITEM_,RPC_GETBAZAARCOUNT__,RPC_GETVENDORCOUNT__,RPC_GETTOTALITEMCOUNT__};

AuctionsMap::AuctionsMap() : ManagedObject(DummyConstructorParameter::instance()) {
	AuctionsMapImplementation* _implementation = new AuctionsMapImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("AuctionsMap");
}

AuctionsMap::AuctionsMap(DummyConstructorParameter* param) : ManagedObject(param) {
	_setClassName("AuctionsMap");
}

AuctionsMap::~AuctionsMap() {
}



int AuctionsMap::addItem(CreatureObject* player, SceneObject* vendor, AuctionItem* item) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDITEM__CREATUREOBJECT_SCENEOBJECT_AUCTIONITEM_);
		method.addObjectParameter(player);
		method.addObjectParameter(vendor);
		method.addObjectParameter(item);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->addItem(player, vendor, item);
	}
}

void AuctionsMap::deleteItem(SceneObject* vendor, AuctionItem* item) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DELETEITEM__SCENEOBJECT_AUCTIONITEM_);
		method.addObjectParameter(vendor);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else {
		_implementation->deleteItem(vendor, item);
	}
}

AuctionItem* AuctionsMap::getItem(unsigned long long id) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETITEM__LONG_);
		method.addUnsignedLongParameter(id);

		return static_cast<AuctionItem*>(method.executeWithObjectReturn());
	} else {
		return _implementation->getItem(id);
	}
}

bool AuctionsMap::containsItem(unsigned long long id) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTAINSITEM__LONG_);
		method.addUnsignedLongParameter(id);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->containsItem(id);
	}
}

TerminalListVector AuctionsMap::getVendorTerminalData(const String& planet, const String& region, SceneObject* vendor) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getVendorTerminalData(planet, region, vendor);
	}
}

TerminalListVector AuctionsMap::getBazaarTerminalData(const String& planet, const String& region, SceneObject* vendor) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getBazaarTerminalData(planet, region, vendor);
	}
}

int AuctionsMap::getPlayerItemCount(CreatureObject* player) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLAYERITEMCOUNT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getPlayerItemCount(player);
	}
}

int AuctionsMap::getVendorItemCount(SceneObject* vendor, bool forSaleOnly) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETVENDORITEMCOUNT__SCENEOBJECT_BOOL_);
		method.addObjectParameter(vendor);
		method.addBooleanParameter(forSaleOnly);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getVendorItemCount(vendor, forSaleOnly);
	}
}

void AuctionsMap::deleteTerminalItems(SceneObject* vendor) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DELETETERMINALITEMS__SCENEOBJECT_);
		method.addObjectParameter(vendor);

		method.executeWithVoidReturn();
	} else {
		_implementation->deleteTerminalItems(vendor);
	}
}

int AuctionsMap::getCommodityCount(CreatureObject* player) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCOMMODITYCOUNT__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getCommodityCount(player);
	}
}

void AuctionsMap::updateUID(SceneObject* vendor, const String& oldUID, const String& newUID) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEUID__SCENEOBJECT_STRING_STRING_);
		method.addObjectParameter(vendor);
		method.addAsciiParameter(oldUID);
		method.addAsciiParameter(newUID);

		method.executeWithVoidReturn();
	} else {
		_implementation->updateUID(vendor, oldUID, newUID);
	}
}

void AuctionsMap::updateVendorSearch(SceneObject* vendor, bool enabled) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEVENDORSEARCH__SCENEOBJECT_BOOL_);
		method.addObjectParameter(vendor);
		method.addBooleanParameter(enabled);

		method.executeWithVoidReturn();
	} else {
		_implementation->updateVendorSearch(vendor, enabled);
	}
}

void AuctionsMap::addToCommodityLimit(AuctionItem* item) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTOCOMMODITYLIMIT__AUCTIONITEM_);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else {
		_implementation->addToCommodityLimit(item);
	}
}

void AuctionsMap::removeFromCommodityLimit(AuctionItem* item) {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEFROMCOMMODITYLIMIT__AUCTIONITEM_);
		method.addObjectParameter(item);

		method.executeWithVoidReturn();
	} else {
		_implementation->removeFromCommodityLimit(item);
	}
}

int AuctionsMap::getBazaarCount() {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBAZAARCOUNT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getBazaarCount();
	}
}

int AuctionsMap::getVendorCount() {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETVENDORCOUNT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getVendorCount();
	}
}

int AuctionsMap::getTotalItemCount() {
	AuctionsMapImplementation* _implementation = static_cast<AuctionsMapImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOTALITEMCOUNT__);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->getTotalItemCount();
	}
}

DistributedObjectServant* AuctionsMap::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* AuctionsMap::_getImplementationForRead() const {
	return _impl;
}

void AuctionsMap::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	AuctionsMapImplementation
 */

AuctionsMapImplementation::AuctionsMapImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


AuctionsMapImplementation::~AuctionsMapImplementation() {
}


void AuctionsMapImplementation::finalize() {
}

void AuctionsMapImplementation::_initializeImplementation() {
	_setClassHelper(AuctionsMapHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void AuctionsMapImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<AuctionsMap*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* AuctionsMapImplementation::_getStub() {
	return _this.get();
}

AuctionsMapImplementation::operator const AuctionsMap*() {
	return _this.get();
}

void AuctionsMapImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void AuctionsMapImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void AuctionsMapImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void AuctionsMapImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void AuctionsMapImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void AuctionsMapImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void AuctionsMapImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void AuctionsMapImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("AuctionsMap");

}

void AuctionsMapImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(AuctionsMapImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool AuctionsMapImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (ManagedObjectImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xbb9b7ce5: //AuctionsMap.commoditiesLimit
		TypeInfo<CommoditiesLimit >::parseFromBinaryStream(&commoditiesLimit, stream);
		return true;

	}

	return false;
}

void AuctionsMapImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = AuctionsMapImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int AuctionsMapImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xbb9b7ce5; //AuctionsMap.commoditiesLimit
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<CommoditiesLimit >::toBinaryStream(&commoditiesLimit, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

AuctionsMapImplementation::AuctionsMapImplementation() {
	_initializeImplementation();
	// server/zone/managers/auction/AuctionsMap.idl():  		allItems.setNullValue(null);
	(&allItems)->setNullValue(NULL);
	// server/zone/managers/auction/AuctionsMap.idl():  		allItems.setNoDuplicateInsertPlan();
	(&allItems)->setNoDuplicateInsertPlan();
	// server/zone/managers/auction/AuctionsMap.idl():  		commoditiesLimit.setNoDuplicateInsertPlan();
	(&commoditiesLimit)->setNoDuplicateInsertPlan();
	// server/zone/managers/auction/AuctionsMap.idl():  		logger.setLoggingName("AuctionsMap");
	(&logger)->setLoggingName("AuctionsMap");
	// server/zone/managers/auction/AuctionsMap.idl():  		logger.setGlobalLogging(true);
	(&logger)->setGlobalLogging(true);
	// server/zone/managers/auction/AuctionsMap.idl():  		logger.setLogging(true);
	(&logger)->setLogging(true);
}

AuctionItem* AuctionsMapImplementation::getItem(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/auction/AuctionsMap.idl():  		return allItems.get(id);
	return (&allItems)->get(id);
}

bool AuctionsMapImplementation::containsItem(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/auction/AuctionsMap.idl():  		return allItems.contains(id);
	return (&allItems)->contains(id);
}

int AuctionsMapImplementation::getBazaarCount() {
	Locker _locker(_this.get());
	// server/zone/managers/auction/AuctionsMap.idl():  		return bazaarItemsForSale.size();
	return (&bazaarItemsForSale)->size();
}

int AuctionsMapImplementation::getVendorCount() {
	// server/zone/managers/auction/AuctionsMap.idl():  		return vendorItemsForSale.size();
	return (&vendorItemsForSale)->size();
}

int AuctionsMapImplementation::getTotalItemCount() {
	// server/zone/managers/auction/AuctionsMap.idl():  		return allItems.size();
	return (&allItems)->size();
}

/*
 *	AuctionsMapAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


AuctionsMapAdapter::AuctionsMapAdapter(AuctionsMap* obj) : ManagedObjectAdapter(obj) {
}

void AuctionsMapAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_ADDITEM__CREATUREOBJECT_SCENEOBJECT_AUCTIONITEM_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			SceneObject* vendor = static_cast<SceneObject*>(inv->getObjectParameter());
			AuctionItem* item = static_cast<AuctionItem*>(inv->getObjectParameter());
			
			int _m_res = addItem(player, vendor, item);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_DELETEITEM__SCENEOBJECT_AUCTIONITEM_:
		{
			SceneObject* vendor = static_cast<SceneObject*>(inv->getObjectParameter());
			AuctionItem* item = static_cast<AuctionItem*>(inv->getObjectParameter());
			
			deleteItem(vendor, item);
			
		}
		break;
	case RPC_GETITEM__LONG_:
		{
			unsigned long long id = inv->getUnsignedLongParameter();
			
			DistributedObject* _m_res = getItem(id);
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_CONTAINSITEM__LONG_:
		{
			unsigned long long id = inv->getUnsignedLongParameter();
			
			bool _m_res = containsItem(id);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETPLAYERITEMCOUNT__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			int _m_res = getPlayerItemCount(player);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETVENDORITEMCOUNT__SCENEOBJECT_BOOL_:
		{
			SceneObject* vendor = static_cast<SceneObject*>(inv->getObjectParameter());
			bool forSaleOnly = inv->getBooleanParameter();
			
			int _m_res = getVendorItemCount(vendor, forSaleOnly);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_DELETETERMINALITEMS__SCENEOBJECT_:
		{
			SceneObject* vendor = static_cast<SceneObject*>(inv->getObjectParameter());
			
			deleteTerminalItems(vendor);
			
		}
		break;
	case RPC_GETCOMMODITYCOUNT__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			int _m_res = getCommodityCount(player);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_UPDATEUID__SCENEOBJECT_STRING_STRING_:
		{
			SceneObject* vendor = static_cast<SceneObject*>(inv->getObjectParameter());
			 String oldUID; inv->getAsciiParameter(oldUID);
			 String newUID; inv->getAsciiParameter(newUID);
			
			updateUID(vendor, oldUID, newUID);
			
		}
		break;
	case RPC_UPDATEVENDORSEARCH__SCENEOBJECT_BOOL_:
		{
			SceneObject* vendor = static_cast<SceneObject*>(inv->getObjectParameter());
			bool enabled = inv->getBooleanParameter();
			
			updateVendorSearch(vendor, enabled);
			
		}
		break;
	case RPC_ADDTOCOMMODITYLIMIT__AUCTIONITEM_:
		{
			AuctionItem* item = static_cast<AuctionItem*>(inv->getObjectParameter());
			
			addToCommodityLimit(item);
			
		}
		break;
	case RPC_REMOVEFROMCOMMODITYLIMIT__AUCTIONITEM_:
		{
			AuctionItem* item = static_cast<AuctionItem*>(inv->getObjectParameter());
			
			removeFromCommodityLimit(item);
			
		}
		break;
	case RPC_GETBAZAARCOUNT__:
		{
			
			int _m_res = getBazaarCount();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETVENDORCOUNT__:
		{
			
			int _m_res = getVendorCount();
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_GETTOTALITEMCOUNT__:
		{
			
			int _m_res = getTotalItemCount();
			resp->insertSignedInt(_m_res);
		}
		break;
	default:
		ManagedObjectAdapter::invokeMethod(methid, inv);
	}
}

int AuctionsMapAdapter::addItem(CreatureObject* player, SceneObject* vendor, AuctionItem* item) {
	return (static_cast<AuctionsMap*>(stub))->addItem(player, vendor, item);
}

void AuctionsMapAdapter::deleteItem(SceneObject* vendor, AuctionItem* item) {
	(static_cast<AuctionsMap*>(stub))->deleteItem(vendor, item);
}

AuctionItem* AuctionsMapAdapter::getItem(unsigned long long id) {
	return (static_cast<AuctionsMap*>(stub))->getItem(id);
}

bool AuctionsMapAdapter::containsItem(unsigned long long id) {
	return (static_cast<AuctionsMap*>(stub))->containsItem(id);
}

int AuctionsMapAdapter::getPlayerItemCount(CreatureObject* player) {
	return (static_cast<AuctionsMap*>(stub))->getPlayerItemCount(player);
}

int AuctionsMapAdapter::getVendorItemCount(SceneObject* vendor, bool forSaleOnly) {
	return (static_cast<AuctionsMap*>(stub))->getVendorItemCount(vendor, forSaleOnly);
}

void AuctionsMapAdapter::deleteTerminalItems(SceneObject* vendor) {
	(static_cast<AuctionsMap*>(stub))->deleteTerminalItems(vendor);
}

int AuctionsMapAdapter::getCommodityCount(CreatureObject* player) {
	return (static_cast<AuctionsMap*>(stub))->getCommodityCount(player);
}

void AuctionsMapAdapter::updateUID(SceneObject* vendor, const String& oldUID, const String& newUID) {
	(static_cast<AuctionsMap*>(stub))->updateUID(vendor, oldUID, newUID);
}

void AuctionsMapAdapter::updateVendorSearch(SceneObject* vendor, bool enabled) {
	(static_cast<AuctionsMap*>(stub))->updateVendorSearch(vendor, enabled);
}

void AuctionsMapAdapter::addToCommodityLimit(AuctionItem* item) {
	(static_cast<AuctionsMap*>(stub))->addToCommodityLimit(item);
}

void AuctionsMapAdapter::removeFromCommodityLimit(AuctionItem* item) {
	(static_cast<AuctionsMap*>(stub))->removeFromCommodityLimit(item);
}

int AuctionsMapAdapter::getBazaarCount() {
	return (static_cast<AuctionsMap*>(stub))->getBazaarCount();
}

int AuctionsMapAdapter::getVendorCount() {
	return (static_cast<AuctionsMap*>(stub))->getVendorCount();
}

int AuctionsMapAdapter::getTotalItemCount() {
	return (static_cast<AuctionsMap*>(stub))->getTotalItemCount();
}

/*
 *	AuctionsMapHelper
 */

AuctionsMapHelper* AuctionsMapHelper::staticInitializer = AuctionsMapHelper::instance();

AuctionsMapHelper::AuctionsMapHelper() {
	className = "AuctionsMap";

	Core::getObjectBroker()->registerClass(className, this);
}

void AuctionsMapHelper::finalizeHelper() {
	AuctionsMapHelper::finalize();
}

DistributedObject* AuctionsMapHelper::instantiateObject() {
	return new AuctionsMap(DummyConstructorParameter::instance());
}

DistributedObjectServant* AuctionsMapHelper::instantiateServant() {
	return new AuctionsMapImplementation();
}

DistributedObjectAdapter* AuctionsMapHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new AuctionsMapAdapter(static_cast<AuctionsMap*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
