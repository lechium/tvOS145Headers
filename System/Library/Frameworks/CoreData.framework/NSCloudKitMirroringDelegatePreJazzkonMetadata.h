/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPersistentStore, NSString, NSDictionary, NSPersistentHistoryToken;

@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {

	NSPersistentStore* _store;
	BOOL _loaded;
	BOOL _hasChanges;
	BOOL _hasInitializedZone;
	BOOL _hasInitializedZoneSubscription;
	BOOL _hasInitializedDatabaseSubscription;
	NSString* _ckIdentityRecordName;
	BOOL _hasCheckedCKIdentity;
	NSDictionary* _keyToPreviousServerChangeToken;
	NSPersistentHistoryToken* _lastHistoryToken;

}

@property (nonatomic,readonly) BOOL loaded;                                                                //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges;                                                            //@synthesize hasChanges=_hasChanges - In the implementation block
@property (assign,nonatomic) BOOL hasInitializedZone; 
@property (assign,nonatomic) BOOL hasInitializedZoneSubscription; 
@property (assign,nonatomic) BOOL hasInitializedDatabaseSubscription; 
@property (setter=setCKIdentityRecordName:,nonatomic,retain) NSString * ckIdentityRecordName; 
@property (assign,nonatomic) BOOL hasCheckedCKIdentity; 
@property (nonatomic,retain) NSPersistentHistoryToken * lastHistoryToken; 
+(id)allDefaultsKeys;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)loaded;
-(BOOL)hasChanges;
-(id)initWithStore:(id)arg1 ;
-(BOOL)load:(id*)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(id)changeTokenForDatabaseScope:(long long)arg1 ;
-(BOOL)hasInitializedDatabaseSubscription;
-(BOOL)hasInitializedZoneSubscription;
-(id)changeTokenForZoneWithID:(id)arg1 inDatabaseWithScope:(long long)arg2 ;
-(NSPersistentHistoryToken *)lastHistoryToken;
-(NSString *)ckIdentityRecordName;
-(BOOL)hasCheckedCKIdentity;
-(BOOL)updateStoreMetadata:(id*)arg1 ;
-(id)cliDescription;
-(BOOL)hasInitializedZone;
-(void)setHasInitializedZone:(BOOL)arg1 ;
-(void)setHasInitializedZoneSubscription:(BOOL)arg1 ;
-(void)setHasInitializedDatabaseSubscription:(BOOL)arg1 ;
-(void)setCKIdentityRecordName:(id)arg1 ;
-(void)setHasCheckedCKIdentity:(BOOL)arg1 ;
-(id)changeTokenForZoneWithID:(id)arg1 inDatabase:(id)arg2 ;
-(id)changeTokenForDatabase:(id)arg1 ;
-(void)setChangeToken:(id)arg1 forZoneWithID:(id)arg2 inDatabase:(id)arg3 ;
-(void)setChangeToken:(id)arg1 forDatabase:(id)arg2 ;
-(void)purgeCachedChangeTokens;
-(unsigned long long)countChangeTokens;
-(void)setLastHistoryToken:(NSPersistentHistoryToken *)arg1 ;
@end

