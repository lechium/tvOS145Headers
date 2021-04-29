//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSSet;

@interface ACCExternalAccessorySessionManager : NSObject
{
    NSSet *_sessionUUIDs;	// 8 = 0x8
    NSLock *_openEASessionsLock;	// 16 = 0x10
    NSMutableSet *_openEASessions;	// 24 = 0x18
    NSMutableDictionary *_openEASessionHandlers;	// 32 = 0x20
    NSMutableDictionary *_openEASessionUUIDsForEndpointUUID;	// 40 = 0x28
}

+ (unsigned short)_generateSessionID;	// IMP=0x00000001000b5b54
+ (id)sharedManager;	// IMP=0x00000001000b5ab8
- (void).cxx_destruct;	// IMP=0x00000001000ba430
@property(retain, nonatomic) NSMutableDictionary *openEASessionUUIDsForEndpointUUID; // @synthesize openEASessionUUIDsForEndpointUUID=_openEASessionUUIDsForEndpointUUID;
@property(retain, nonatomic) NSMutableDictionary *openEASessionHandlers; // @synthesize openEASessionHandlers=_openEASessionHandlers;
@property(retain, nonatomic) NSMutableSet *openEASessions; // @synthesize openEASessions=_openEASessions;
@property(retain, nonatomic) NSLock *openEASessionsLock; // @synthesize openEASessionsLock=_openEASessionsLock;
@property(readonly, nonatomic) NSSet *sessionUUIDs; // @synthesize sessionUUIDs=_sessionUUIDs;
- (void)_handleApplicationStateChange:(id)arg1;	// IMP=0x00000001000ba04c
- (void)_eaNativeDataArrived:(id)arg1;	// IMP=0x00000001000b9f94
- (_Bool)_sessionUUIDClientSupportsBackgroundEA:(id)arg1;	// IMP=0x00000001000b9f14
- (id)_appBundleIDForSessionUUID:(id)arg1;	// IMP=0x00000001000b9eb4
- (id)eaSessionUUIDForEndpointUUID:(id)arg1;	// IMP=0x00000001000b9be8
- (id)eaSessionUUIDForSessionID:(unsigned short)arg1;	// IMP=0x00000001000b9900
- (id)sessionInfoDictionaryForSessionUUID:(id)arg1;	// IMP=0x00000001000b96fc
- (id)_copySessionInfoDictionaryForSessionUUID:(id)arg1;	// IMP=0x00000001000b94e0
- (_Bool)_eaProtocolHasValidMatchActionForOpeningSession:(id)arg1;	// IMP=0x00000001000b93b4
- (id)_accessoryForPrimaryUUID:(id)arg1;	// IMP=0x00000001000b9178
- (id)_eaSessionUUIDsOwnedByClientBundleID:(id)arg1;	// IMP=0x00000001000b8e90
- (_Bool)eaClientHasOpenEASession:(id)arg1;	// IMP=0x00000001000b8d20
- (id)_clientsOwningSessionForProtocol:(id)arg1 withAccessoryUUID:(id)arg2;	// IMP=0x00000001000b89d0
- (_Bool)_isSessionOpenForProtocol:(id)arg1 filterPrimaryUUID:(id)arg2 filterClientBundleID:(id)arg3;	// IMP=0x00000001000b85b8
- (id)_sessionInfoMatchingProtocol:(id)arg1 withPrimaryAccessoryUUID:(id)arg2;	// IMP=0x00000001000b82a0
- (_Bool)handleIncomingExternalAccessoryData:(id)arg1 forEndpointUUID:(id)arg2;	// IMP=0x00000001000b8138
- (_Bool)handleIncomingExternalAccessoryData:(id)arg1 forSessionID:(unsigned short)arg2;	// IMP=0x00000001000b7fd0
- (_Bool)_accessoryCloseSessionForEASessionUUID:(id)arg1 informAccessory:(_Bool)arg2;	// IMP=0x00000001000b7c58
- (_Bool)accessoryCloseSessionforEASessionID:(unsigned short)arg1;	// IMP=0x00000001000b7bfc
- (_Bool)closeSessionsForPrimaryAccessoryUUID:(id)arg1;	// IMP=0x00000001000b7aa0
- (void)startIncomingDataNotificationsForEASessionUUID:(id)arg1;	// IMP=0x00000001000b7a0c
- (void)stopIncomingDataNotificationsForEASessionUUID:(id)arg1;	// IMP=0x00000001000b7978
- (struct __CFData *)returnAppToAccessoryDataForSession:(id)arg1 maxBufferSize:(unsigned int)arg2;	// IMP=0x00000001000b78c8
- (unsigned int)readAppToAccessoryDataForSession:(id)arg1 maxBufferSize:(unsigned int)arg2 dataBuffer:(struct __CFData *)arg3;	// IMP=0x00000001000b7808
- (_Bool)outgoingEADataFromClientAvailable:(id)arg1;	// IMP=0x00000001000b778c
- (_Bool)openSocketFromAppToAccessory:(id)arg1;	// IMP=0x00000001000b768c
- (_Bool)openSocketFromAccessoryToApp:(id)arg1;	// IMP=0x00000001000b758c
- (id)closeSessionForEASessionUUID:(id)arg1;	// IMP=0x00000001000b757c
- (id)_internalCloseSessionForEASessionUUID:(id)arg1 informAccessory:(_Bool)arg2;	// IMP=0x00000001000b6e44
- (id)createSessionForProtocol:(id)arg1 fromPrimaryAccessoryUUID:(id)arg2 fromClient:(id)arg3 result:(_Bool *)arg4;	// IMP=0x00000001000b613c
- (_Bool)_continueOpenSessionForSingleSessionPerEAProtocol:(id)arg1 fromPrimaryAccessoryUUID:(id)arg2 fromClient:(id)arg3;	// IMP=0x00000001000b5d28
- (id)init;	// IMP=0x00000001000b5b78

@end

