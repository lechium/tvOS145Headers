/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectModel, NSArray, NSDictionary;

@interface _PFModelMap : NSObject {

	NSManagedObjectModel* _clientModel;
	NSArray* _allEntities;
	NSArray* _models;
	id* _indexedEntities;
	unsigned long long _clientEntityCount;
	unsigned long long _entityCount;
	NSDictionary* _entitiesByPath;
	unsigned long long* _modelEntityCounts;

}

@property (nonatomic,readonly) NSManagedObjectModel * clientModel;                //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) NSArray * allEntities;                             //@synthesize allEntities=_allEntities - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitiesByPath;                     //@synthesize entitiesByPath=_entitiesByPath - In the implementation block
@property (nonatomic,readonly) unsigned long long clientEntityCount;              //@synthesize clientEntityCount=_clientEntityCount - In the implementation block
+(id)ancillaryModelFactoryClasses;
-(void)dealloc;
-(NSManagedObjectModel *)clientModel;
-(NSArray *)allEntities;
-(NSDictionary *)entitiesByPath;
-(unsigned long long)clientEntityCount;
@end

