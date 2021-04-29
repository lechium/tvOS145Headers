/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSDoubleLinkedListNode, NSString, NSArray;

@interface AMSDoubleLinkedList : NSObject {

	unsigned long long _count;
	AMSDoubleLinkedListNode* _head;
	AMSDoubleLinkedListNode* _tail;
	NSString* _listIdentifier;

}

@property (nonatomic,retain) NSString * listIdentifier;                   //@synthesize listIdentifier=_listIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allNodes; 
@property (nonatomic,readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedListNode * tail;              //@synthesize tail=_tail - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)count;
-(AMSDoubleLinkedListNode *)head;
-(AMSDoubleLinkedListNode *)tail;
-(id)appendObject:(id)arg1 ;
-(id)insertObject:(id)arg1 ;
-(NSArray *)allNodes;
-(void)removeNode:(id)arg1 ;
-(void)insertNode:(id)arg1 ;
-(void)removeAllNodes;
-(NSString *)listIdentifier;
-(void)setTail:(AMSDoubleLinkedListNode *)arg1 ;
-(void)setHead:(AMSDoubleLinkedListNode *)arg1 ;
-(void)setListIdentifier:(NSString *)arg1 ;
-(void)appendNode:(id)arg1 ;
@end

