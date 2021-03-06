/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, PDSRegistrar;

@interface CKDPDSClient : NSObject {

	NSMutableDictionary* _registrationsByDSID;
	NSObject*<OS_dispatch_queue> _queue;
	PDSRegistrar* _registrar;

}

@property (nonatomic,retain) NSMutableDictionary * registrationsByDSID;              //@synthesize registrationsByDSID=_registrationsByDSID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PDSRegistrar * registrar;                               //@synthesize registrar=_registrar - In the implementation block
+(id)sharedClient;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)unregisterTokenForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 outError:(id*)arg3 ;
-(BOOL)unregisterAllTokensForAppContainerAccountTuple:(id)arg1 pushBundleIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)unregisterAllTokensForAccountID:(id)arg1 outError:(id*)arg2 ;
-(BOOL)ensureRegistrationForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 outError:(id*)arg3 ;
-(NSMutableDictionary *)registrationsByDSID;
-(id)inlock_registrar;
-(id)_pdsTopicFromBundleIdentifier:(id)arg1 withContainerID:(id)arg2 ;
-(id)_pdsQualifierFromContainerID:(id)arg1 ;
-(char)_pdsPushEnvironmentFromAPSEnvironmentString:(id)arg1 ;
-(id)_registrationForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 ;
-(id)inlock_registrationsForDSID:(id)arg1 ;
-(BOOL)_unregisterRegistration:(id)arg1 forDSID:(id)arg2 outError:(id*)arg3 ;
-(id)_registrationForAppContainerAccountTuple:(id)arg1 pushBundleIdentifier:(id)arg2 pdsPushEnvironment:(char)arg3 ;
-(void)unregisterAllTokens;
-(void)setRegistrationsByDSID:(NSMutableDictionary *)arg1 ;
-(PDSRegistrar *)registrar;
-(void)setRegistrar:(PDSRegistrar *)arg1 ;
@end

