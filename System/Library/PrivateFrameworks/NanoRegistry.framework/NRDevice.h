/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NRRegistry, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface NRDevice : NSObject <NSSecureCoding> {

	NRDevice* _me;
	os_unfair_lock_s _lock;
	NSUUID* _pairingID;
	NRRegistry* _registry;
	NSMutableDictionary* _oldPropertiesForChangeNotifications;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _observers;
	NSPointerArray* _promiscuousObservers;
	NSMutableDictionary* _changeBlocks;
	NSMutableArray* _promiscuousChangeBlocks;

}

@property (nonatomic,readonly) NSUUID * pairingID; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSUUID *)pairingID;
-(BOOL)supportsCapability:(id)arg1 ;
-(id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(BOOL)arg4 ;
-(BOOL)canMigrate;
-(BOOL)archived;
-(id)migrationError;
-(BOOL)migrationConfirmed;
-(id)propertyNames;
-(void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)registerForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

