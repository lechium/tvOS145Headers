/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DACardDAV/DACardDAV-Structs.h>
#import <DataAccess/DAAccount.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVOAuthInfoProvider.h>
#import <libobjc.A.dylib/CoreDAVLogDelegate.h>
#import <libobjc.A.dylib/CoreDAVDiscoveryTaskGroupDelegate.h>

@class CardDAVLocalDBHelper, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, NSString;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {

	int _cardDAVAccountVersion;
	CardDAVLocalDBHelper* _databaseHelper;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;              //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * curLogger;                                     //@synthesize curLogger=_curLogger - In the implementation block
@property (nonatomic,readonly) int cardDAVAccountVersion;                                     //@synthesize cardDAVAccountVersion=_cardDAVAccountVersion - In the implementation block
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,readonly) CardDAVLocalDBHelper * databaseHelper;                         //@synthesize databaseHelper=_databaseHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addressBookConstraintsPlistPath;
-(void)dealloc;
-(id)logHandle;
-(DACoreDAVTaskManager *)taskManager;
-(id)userAgentHeader;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)serverRoot;
-(id)serverComplianceClasses;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setServerComplianceClasses:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(unsigned long long)oauthVariant;
-(BOOL)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(BOOL)enabledForDADataclass:(long long)arg1 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)addToCoreDAVLoggingDelegates;
-(id)onBehalfOfBundleIdentifier;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)spinnerIdentifiers;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(id)wellKnownPaths;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(CardDAVLocalDBHelper *)databaseHelper;
-(id)copyImageContentsAtURL:(id)arg1 outError:(id*)arg2 ;
-(void)_massageAddedOrModifiedVCard:(id)arg1 ;
-(int)cardDAVAccountVersion;
@end

