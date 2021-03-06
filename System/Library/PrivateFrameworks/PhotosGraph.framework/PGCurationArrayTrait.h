/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait {

	NSArray* _items;
	NSArray* _negativeItems;

}

@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * negativeItems;              //@synthesize negativeItems=_negativeItems - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSArray *)negativeItems;
@end

