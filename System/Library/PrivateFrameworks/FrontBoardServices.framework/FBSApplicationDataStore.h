/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBSApplicationDataStoreRepositoryClient;
@class NSString;

@interface FBSApplicationDataStore : NSObject {

	NSString* _bundleId;
	id<FBSApplicationDataStoreRepositoryClient> _client;
	BOOL _clientNeedsCheckin;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleId=_bundleId - In the implementation block
+(void)synchronize;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
+(void)setPrefetchedKeys:(id)arg1 ;
+(BOOL)isServerProcess;
+(void)synchronizeWithCompletion:(/*^block*/id)arg1 ;
+(void)_doWithClassClient:(/*^block*/id)arg1 ;
+(void)_setClassClient:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)bundleID;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)_initWithBundleId:(id)arg1 client:(id)arg2 ;
-(id)_makeSafe:(id)arg1 forType:(Class)arg2 ;
@end

