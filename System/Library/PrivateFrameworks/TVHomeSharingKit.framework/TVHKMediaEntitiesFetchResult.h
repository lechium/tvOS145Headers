/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TVHKMediaEntitiesFetchResult : NSObject {

	NSArray* _mediaEntities;
	NSArray* _sortDescriptors;
	NSArray* _indexBarItems;

}

@property (nonatomic,copy,readonly) NSArray * mediaEntities;                //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy,readonly) NSArray * indexBarItems;                //@synthesize indexBarItems=_indexBarItems - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSArray *)sortDescriptors;
-(NSArray *)mediaEntities;
-(NSArray *)indexBarItems;
-(id)initWithMediaEntities:(id)arg1 sortDescriptors:(id)arg2 indexBarItems:(id)arg3 ;
@end

