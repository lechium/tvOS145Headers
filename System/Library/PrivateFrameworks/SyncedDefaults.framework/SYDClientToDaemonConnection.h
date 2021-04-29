/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <SyncedDefaults/SYDRemotePreferencesSource.h>
#import <libobjc.A.dylib/SYDClientProtocol.h>

@protocol OS_dispatch_queue;
@class SYDStoreConfiguration, NSXPCConnection, NSObject, NSCache, NSString;

@interface SYDClientToDaemonConnection : SYDRemotePreferencesSource <SYDClientProtocol> {

	BOOL _didLogFaultForEntitlements;
	int _daemonWakeNotifyToken;
	SYDStoreConfiguration* _storeConfiguration;
	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _analyticsQueue;
	NSCache* _cachedObjects;
	unsigned long long _syncingWithCloudCounter;

}

@property (nonatomic,retain) SYDStoreConfiguration * storeConfiguration;               //@synthesize storeConfiguration=_storeConfiguration - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;               //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> analyticsQueue;              //@synthesize analyticsQueue=_analyticsQueue - In the implementation block
@property (assign,nonatomic) int daemonWakeNotifyToken;                                //@synthesize daemonWakeNotifyToken=_daemonWakeNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL didLogFaultForEntitlements;                          //@synthesize didLogFaultForEntitlements=_didLogFaultForEntitlements - In the implementation block
@property (nonatomic,retain) NSCache * cachedObjects;                                  //@synthesize cachedObjects=_cachedObjects - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingWithCloud; 
@property (assign) unsigned long long syncingWithCloudCounter;                         //@synthesize syncingWithCloudCounter=_syncingWithCloudCounter - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier; 
@property (nonatomic,readonly) long long storeType; 
+(id)daemonProtocolInterface;
+(id)defaultStoreIdentifierForCurrentProcessWithApplicationIdentifier:(id)arg1 ;
+(id)disgustingUglyHardcodedKnownStoreIdentifierForApplicationIdentifier:(id)arg1 ;
+(BOOL)hasInitializedStoreWithIdentifier:(id)arg1 ;
+(void)setHasInitializedStoreWithIdentifier:(id)arg1 ;
+(void)processAccountChangesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)setShouldSyncOnFirstInitializationOverride:(id)arg1 ;
+(id)shouldSyncOnFirstInitializationOverride;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)registerForSynchronizedDefaults;
-(unsigned char)synchronize;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned char)synchronizeForced:(unsigned char)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(void)synchronizationWithCompletionHandler:(/*^block*/id)arg1 ;
-(CFArrayRef)copyKeyList;
-(long long)generationCount;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)dictionaryRepresentation;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)discardExternalChangesForChangeCount:(long long)arg1 ;
-(void*)getValueForKey:(CFStringRef)arg1 ;
-(unsigned char)hasExternalChanges;
-(id)copyExternalChangesWithChangeCount:(long long*)arg1 ;
-(void)scheduleRemoteSynchronization;
-(void)updateConfiguration;
-(void)unregisterForSynchronizedDefaults;
-(void)ping;
-(long long)maximumKeyCount;
-(long long)maximumKeyLength;
-(long long)maximumDataLengthPerKey;
-(long long)maximumTotalDataLength;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSString *)storeIdentifier;
-(long long)storeType;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)changeToken;
-(NSCache *)cachedObjects;
-(void)setChangeToken:(id)arg1 ;
-(id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2 ;
-(void)setDefaultsConfiguration:(id)arg1 ;
-(id)initWithStoreConfiguration:(id)arg1 ;
-(void)registerForDaemonDidWakeNotifications;
-(void)performInitialSyncIfNecessary;
-(SYDStoreConfiguration *)storeConfiguration;
-(unsigned long long)syncingWithCloudCounter;
-(void)logFaultIfNecessaryForError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)processChangeDictionary:(id)arg1 ;
-(void)setSyncingWithCloudCounter:(unsigned long long)arg1 ;
-(id)asyncDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)daemonDidWake;
-(BOOL)didLogFaultForEntitlements;
-(void)setDidLogFaultForEntitlements:(BOOL)arg1 ;
-(BOOL)isSyncingWithCloud;
-(void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setStoreConfiguration:(SYDStoreConfiguration *)arg1 ;
-(void)setAnalyticsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)daemonWakeNotifyToken;
-(void)setDaemonWakeNotifyToken:(int)arg1 ;
-(void)setCachedObjects:(NSCache *)arg1 ;
@end

