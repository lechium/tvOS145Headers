/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObject;
@class NSString, NSArray;

@interface _GEOResourceManifestServerLocalProxyMigrationState : NSObject {

	NSString* _loadingTileGroupUniqueIdentifier;
	NSArray* _pendingTileGroupMigrationTasks;
	id<NSObject> _transaction;

}

@property (nonatomic,readonly) NSString * loadingTileGroupUniqueIdentifier;              //@synthesize loadingTileGroupUniqueIdentifier=_loadingTileGroupUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * pendingTileGroupMigrationTasks;                     //@synthesize pendingTileGroupMigrationTasks=_pendingTileGroupMigrationTasks - In the implementation block
-(id)init;
-(id)initWithTileGroupUniqueIdentifier:(id)arg1 transactionName:(id)arg2 ;
-(NSString *)loadingTileGroupUniqueIdentifier;
-(NSArray *)pendingTileGroupMigrationTasks;
-(void)setPendingTileGroupMigrationTasks:(NSArray *)arg1 ;
@end

