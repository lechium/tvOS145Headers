/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedDataSource.h>

@class NSDictionary, NSArray;

@interface PXPersonsSectionedDataSource : PXSectionedDataSource {

	NSDictionary* _faceTiles;
	NSArray* _personsSections;

}

@property (nonatomic,copy,readonly) NSArray * personsSections;              //@synthesize personsSections=_personsSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * faceTiles;               //@synthesize faceTiles=_faceTiles - In the implementation block
@property (nonatomic,readonly) long long totalItemCount; 
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)totalItemCount;
-(id)objectsInIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)initWithPersonsSections:(id)arg1 faceTiles:(id)arg2 ;
-(id)faceTileForIndexPath:(PXSimpleIndexPath)arg1 ;
-(NSDictionary *)faceTiles;
-(NSArray *)personsSections;
@end

