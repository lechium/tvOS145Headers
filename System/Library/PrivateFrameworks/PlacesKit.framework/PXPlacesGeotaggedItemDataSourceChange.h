/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property (readonly) NSSet * addedItems; 
@property (readonly) NSSet * removedItems; 
@property (readonly) NSSet * updatedItems; 
@required
-(BOOL)hasChanges;
-(void)updateWithChange:(id)arg1;
-(NSSet *)removedItems;
-(NSSet *)updatedItems;
-(NSSet *)addedItems;

@end

