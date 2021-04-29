/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSError;

@interface CKDMMCSItemGroupSet : NSObject {

	NSMutableDictionary* _itemsByGroupTuple;

}

@property (nonatomic,retain) NSMutableDictionary * itemsByGroupTuple;              //@synthesize itemsByGroupTuple=_itemsByGroupTuple - In the implementation block
@property (nonatomic,readonly) NSError * error; 
-(id)description;
-(id)init;
-(NSError *)error;
-(void)addItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)allItemGroups;
-(NSMutableDictionary *)itemsByGroupTuple;
-(void)setItemsByGroupTuple:(NSMutableDictionary *)arg1 ;
@end

