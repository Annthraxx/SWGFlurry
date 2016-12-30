/*
 *	autogen/server/zone/objects/intangible/PetControlDevice.h generated by engine3 IDL compiler 0.60
 */

#ifndef PETCONTROLDEVICE_H_
#define PETCONTROLDEVICE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace intangible {

class IntangibleObject;

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class AiAgent;

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class PetControlObserver;

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#include "server/zone/managers/radial/RadialOptions.h"

#include "server/zone/objects/creature/ai/PatrolPointsVector.h"

#include "server/zone/objects/creature/ai/PatrolPoint.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/intangible/ControlDevice.h"

#include "system/lang/System.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class PetControlDevice : public ControlDevice {
public:
	PetControlDevice();

	void storeObject(CreatureObject* player, bool force = false);

	void callObject(CreatureObject* player);

	void spawnObject(CreatureObject* player);

	void cancelSpawnObject(CreatureObject* player);

	bool growPet(CreatureObject* player, bool force = false, bool adult = false);

	void arrestGrowth();

	void trainAsMount(CreatureObject* player);

	bool isTrainedAsMount() const;

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void destroyObjectFromWorld(bool sendSelfDestroy);

	/**
	 * Checks if the object can be destroyed
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @returns 0 on succes, != 0 on error
	 */
	int canBeDestroyed(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Sets default trained commands and command strings for the pet
	 * @pre { }
	 * @post { }
	 */
	void setDefaultCommands();

	/**
	 * Sets default trained commands and command strings for the pet
	 * @pre { }
	 * @post { }
	 */
	void setTrainingCommand(unsigned int commandID);

	unsigned int getTrainingCommand() const;

	bool hasTrainedCommand(unsigned int command);

	bool hasTrainedCommandString(const String& message);

	bool hasUsedNamingCommand(unsigned int command);

	String getTrainedCommand(unsigned int command);

	void addTrainedCommand(unsigned int command, const String& message);

	void setLastCommand(unsigned int c);

	unsigned int getLastCommand() const;

	void setLastCommandTarget(SceneObject* target);

	ManagedWeakReference<SceneObject* > getLastCommandTarget();

	String getFutureName() const;

	void setFutureName(String& name);

	unsigned int getNamingProgress() const;

	void incrementNamingProgress(unsigned int command);

	void resetNamingProgress();

	void resetNamingCommands();

	bool isPetControlDevice();

	int getVitality() const;

	int getMaxVitality() const;

	void setVitality(int vit);

	void setMaxVitality(int vit);

	int getPetType() const;

	void setPetType(int type);

	void setGrowthStage(int stage);

	void clearPatrolPoints();

	void addPatrolPoint(PatrolPoint& point);

	int getPatrolPointSize();

	PatrolPoint getPatrolPoint(int idx);

	bool isValidPet(AiAgent* pet);

	void toggleUseRanged();

	bool getUseRanged() const;

	bool isFriend(unsigned long long playerID);

	void toggleFriend(unsigned long long playerID);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PetControlDevice(DummyConstructorParameter* param);

	virtual ~PetControlDevice();

	friend class PetControlDeviceHelper;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

namespace server {
namespace zone {
namespace objects {
namespace intangible {

class PetControlDeviceImplementation : public ControlDeviceImplementation {
	ManagedReference<PetControlObserver* > petControlObserver;

protected:
	int vitality;

	int maxVitality;

	int vitalityHealthPenalty;

	int vitalityActionPenalty;

	int vitalityMindPenalty;

	int petType;

	VectorMap<unsigned int, String> trainedCommands;

	unsigned int trainingCommand;

	unsigned int lastCommand;

	ManagedWeakReference<SceneObject* > lastCommandTarget;

	String futureName;

	unsigned int namingProgress;

	int growthStage;

	Time lastGrowth;

	bool trainedAsMount;

	Vector<unsigned int> namingCommands;

	PatrolPointsVector patrolPoints;

	bool useRanged;

	Vector<unsigned long long> friends;

public:
	PetControlDeviceImplementation();

	PetControlDeviceImplementation(DummyConstructorParameter* param);

	void storeObject(CreatureObject* player, bool force = false);

	void callObject(CreatureObject* player);

	void spawnObject(CreatureObject* player);

	void cancelSpawnObject(CreatureObject* player);

	bool growPet(CreatureObject* player, bool force = false, bool adult = false);

	void arrestGrowth();

	void trainAsMount(CreatureObject* player);

	bool isTrainedAsMount() const;

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Destroys this object from database
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @param destroyContainedObjects if true, will destroy from database all its contained objects
	 */
	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void destroyObjectFromWorld(bool sendSelfDestroy);

	/**
	 * Checks if the object can be destroyed
	 * @pre { this is locked }
	 * @post { this is locked }
	 * @returns 0 on succes, != 0 on error
	 */
	int canBeDestroyed(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Sets default trained commands and command strings for the pet
	 * @pre { }
	 * @post { }
	 */
	void setDefaultCommands();

	/**
	 * Sets default trained commands and command strings for the pet
	 * @pre { }
	 * @post { }
	 */
	void setTrainingCommand(unsigned int commandID);

	unsigned int getTrainingCommand() const;

	bool hasTrainedCommand(unsigned int command);

	bool hasTrainedCommandString(const String& message);

	bool hasUsedNamingCommand(unsigned int command);

	String getTrainedCommand(unsigned int command);

	void addTrainedCommand(unsigned int command, const String& message);

	void setLastCommand(unsigned int c);

	unsigned int getLastCommand() const;

	void setLastCommandTarget(SceneObject* target);

	ManagedWeakReference<SceneObject* > getLastCommandTarget();

	String getFutureName() const;

	void setFutureName(String& name);

	unsigned int getNamingProgress() const;

	void incrementNamingProgress(unsigned int command);

	void resetNamingProgress();

	void resetNamingCommands();

	bool isPetControlDevice();

	int getVitality() const;

	int getMaxVitality() const;

	void setVitality(int vit);

	void setMaxVitality(int vit);

	int getPetType() const;

	void setPetType(int type);

	void setGrowthStage(int stage);

	void clearPatrolPoints();

	void addPatrolPoint(PatrolPoint& point);

	int getPatrolPointSize();

	PatrolPoint getPatrolPoint(int idx);

	bool isValidPet(AiAgent* pet);

	void toggleUseRanged();

	bool getUseRanged() const;

	bool isFriend(unsigned long long playerID);

	void toggleFriend(unsigned long long playerID);

	WeakReference<PetControlDevice*> _this;

	operator const PetControlDevice*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PetControlDeviceImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class PetControlDevice;
};

class PetControlDeviceAdapter : public ControlDeviceAdapter {
public:
	PetControlDeviceAdapter(PetControlDevice* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void storeObject(CreatureObject* player, bool force);

	void callObject(CreatureObject* player);

	void spawnObject(CreatureObject* player);

	void cancelSpawnObject(CreatureObject* player);

	bool growPet(CreatureObject* player, bool force, bool adult);

	void arrestGrowth();

	void trainAsMount(CreatureObject* player);

	bool isTrainedAsMount() const;

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	void destroyObjectFromWorld(bool sendSelfDestroy);

	int canBeDestroyed(CreatureObject* player);

	bool canBeTradedTo(CreatureObject* player, CreatureObject* receiver, int numberInTrade);

	unsigned int getTrainingCommand() const;

	bool hasTrainedCommand(unsigned int command);

	bool hasTrainedCommandString(const String& message);

	bool hasUsedNamingCommand(unsigned int command);

	String getTrainedCommand(unsigned int command);

	void addTrainedCommand(unsigned int command, const String& message);

	void setLastCommand(unsigned int c);

	unsigned int getLastCommand() const;

	String getFutureName() const;

	void setFutureName(String& name);

	unsigned int getNamingProgress() const;

	void incrementNamingProgress(unsigned int command);

	void resetNamingProgress();

	void resetNamingCommands();

	bool isPetControlDevice();

	int getVitality() const;

	int getMaxVitality() const;

	void setVitality(int vit);

	void setMaxVitality(int vit);

	int getPetType() const;

	void setPetType(int type);

	void setGrowthStage(int stage);

	void clearPatrolPoints();

	void toggleUseRanged();

	bool getUseRanged() const;

	bool isFriend(unsigned long long playerID);

	void toggleFriend(unsigned long long playerID);

};

class PetControlDeviceHelper : public DistributedObjectClassHelper, public Singleton<PetControlDeviceHelper> {
	static PetControlDeviceHelper* staticInitializer;

public:
	PetControlDeviceHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PetControlDeviceHelper>;
};

} // namespace intangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::intangible;

#endif /*PETCONTROLDEVICE_H_*/