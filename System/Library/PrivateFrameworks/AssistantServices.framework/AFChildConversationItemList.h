/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AFConversation, NSUUID;

@interface AFChildConversationItemList : NSObject {

	AFConversation* _conversation;
	NSUUID* _parentItemIdentifier;

}

@property (getter=_conversation,nonatomic,readonly) AFConversation * conversation;                      //@synthesize conversation=_conversation - In the implementation block
@property (getter=_parentItemIdentifier,nonatomic,readonly) NSUUID * parentItemIdentifier;              //@synthesize parentItemIdentifier=_parentItemIdentifier - In the implementation block
-(id)init;
-(long long)numberOfItems;
-(id)itemAtIndex:(long long)arg1 ;
-(id)_conversation;
-(void)removeItemsWithIdentifiers:(id)arg1 ;
-(id)itemWithIdentifier:(id)arg1 ;
-(id)initWithConversation:(id)arg1 parentItemIdentifier:(id)arg2 ;
-(id)_parentItemIdentifier;
-(id)_indexPathForItemAtIndex:(long long)arg1 ;
-(void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4 ;
-(id)_identifierOfItemAtIndex:(long long)arg1 ;
-(id)_indexPathForLastRestoredItem;
-(void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 ;
-(void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(long long)arg4 ;
-(id)identifiersForItemsAtIndexes:(id)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(BOOL)itemIsRestoredAtIndex:(long long)arg1 ;
@end

