/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class FSNode, NSObject, NSDate, NSUUID, NSString;

@interface _LSDatabase : NSObject {

	CSStoreRef store;
	LSSchema* schema;
	FSNode* node;
	unsigned uid;
	NSObject*<OS_dispatch_queue> accessQueue;
	unsigned needsUpdate : 1;
	unsigned isForcedForXCTesting : 1;
	unsigned isForcedForRemoteUpdates : 1;

}

@property (nonatomic,readonly) NSDate * dateInitialized; 
@property (nonatomic,readonly) FSNode * node; 
@property (nonatomic,readonly) unsigned userID; 
@property (nonatomic,readonly) CSStoreRef store; 
@property (nonatomic,readonly) LSSchema* schema; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) NSUUID * cacheGUID; 
@property (assign,getter=isSeeded,nonatomic) BOOL seeded; 
@property (assign,getter=isSeedingComplete,nonatomic) BOOL seedingComplete; 
@property (nonatomic,readonly) NSString * seededSystemVersion; 
@property (nonatomic,readonly) NSString * seededModelCode; 
@property (assign,getter=arePrefsLoaded,nonatomic) BOOL prefsLoaded; 
@property (assign,nonatomic) BOOL applicationsChanged; 
@property (assign,nonatomic) BOOL documentTypesChanged; 
@property (assign,nonatomic) BOOL URLTypesChanged; 
@property (assign,nonatomic) BOOL typeDeclarationsChanged; 
+(void)setSeedingInProgress:(BOOL)arg1 ;
+(id)headerTableName;
+(unsigned)sessionStatus;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)_init;
-(LSSchema*)schema;
-(NSUUID *)cacheGUID;
-(FSNode *)node;
-(CSStoreRef)store;
-(unsigned)userID;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(BOOL)isSeedingComplete;
-(BOOL)isSeeded;
-(void)setSeeded:(BOOL)arg1 ;
-(void)setSeedingComplete:(BOOL)arg1 ;
-(void)getCacheGUIDBytes:(unsigned char)arg1 ;
-(NSDate *)dateInitialized;
-(NSString *)seededSystemVersion;
-(NSString *)seededModelCode;
-(BOOL)arePrefsLoaded;
-(void)setPrefsLoaded:(BOOL)arg1 ;
-(BOOL)applicationsChanged;
-(void)setApplicationsChanged:(BOOL)arg1 ;
-(BOOL)documentTypesChanged;
-(void)setDocumentTypesChanged:(BOOL)arg1 ;
-(BOOL)URLTypesChanged;
-(void)setURLTypesChanged:(BOOL)arg1 ;
-(BOOL)typeDeclarationsChanged;
-(void)setTypeDeclarationsChanged:(BOOL)arg1 ;
-(void)applicationWasInstalled:(unsigned)arg1 ;
-(void)applicationWillBeUninstalled:(unsigned)arg1 ;
-(void)claimDidChange:(unsigned)arg1 ;
-(void)registerCanonicalNamesFromStringLocalizer:(id)arg1 ;
-(void)registerCanonicalNames;
@end

