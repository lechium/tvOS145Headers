/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSData, NSNumber, NSString, NSSet, RTMapItemMO;

@interface RTLearnedPlaceMO : RTCloudManagedObject

@property (nonatomic,retain) id<GEOMapItem> mapItemGeoMapItem; 
@property (nonatomic,retain) NSData * mapItemGeoMapItemHandle; 
@property (nonatomic,copy) NSNumber * mapItemSource; 
@property (nonatomic,copy) NSString * customLabel; 
@property (nonatomic,copy) NSNumber * type; 
@property (nonatomic,copy) NSNumber * typeSource; 
@property (nonatomic,retain) NSSet * visits; 
@property (nonatomic,retain) RTMapItemMO * mapItem; 
+(id)fetchRequest;
+(id)managedObjectWithPlace:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithPlace:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)fetchRequestSortedByCreation;
-(void)didSave;
@end
