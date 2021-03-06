/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXPlacesGeotaggedItemDataSourceChange.h>

@class NSSet, NSString;

@interface _PXMapStoreChange : NSObject <PXPlacesGeotaggedItemDataSourceChange> {

	NSSet* _addedItems;
	NSSet* _removedItems;
	NSSet* _updatedItems;

}

@property (retain) NSSet * addedItems;                              //@synthesize addedItems=_addedItems - In the implementation block
@property (retain) NSSet * removedItems;                            //@synthesize removedItems=_removedItems - In the implementation block
@property (retain) NSSet * updatedItems;                            //@synthesize updatedItems=_updatedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1 ;
-(NSSet *)removedItems;
-(void)setRemovedItems:(NSSet *)arg1 ;
-(NSSet *)updatedItems;
-(NSSet *)addedItems;
-(void)setAddedItems:(NSSet *)arg1 ;
-(id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 updatedItems:(id)arg3 ;
-(void)setUpdatedItems:(NSSet *)arg1 ;
@end

