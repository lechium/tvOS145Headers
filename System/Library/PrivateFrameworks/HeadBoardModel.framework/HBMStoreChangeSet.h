/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardModel.framework/HeadBoardModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSSet;

@interface HBMStoreChangeSet : NSObject {

	NSDictionary* _updatedItems;
	NSSet* _removedItemIDs;

}

@property (nonatomic,copy,readonly) NSDictionary * updatedItems;              //@synthesize updatedItems=_updatedItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * removedItemIDs;                   //@synthesize removedItemIDs=_removedItemIDs - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)init;
-(BOOL)isEmpty;
-(NSDictionary *)updatedItems;
-(id)changeSetByAddingChangeSet:(id)arg1 ;
-(id)initWithUpdatedItems:(id)arg1 removedItemIDs:(id)arg2 ;
-(NSSet *)removedItemIDs;
@end

