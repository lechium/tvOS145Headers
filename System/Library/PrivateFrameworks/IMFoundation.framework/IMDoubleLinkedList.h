/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject {

	IMDoubleLinkedListNode* _first;
	IMDoubleLinkedListNode* _last;
	unsigned long long _count;

}

@property (retain) IMDoubleLinkedListNode * first;              //@synthesize first=_first - In the implementation block
@property (retain) IMDoubleLinkedListNode * last;               //@synthesize last=_last - In the implementation block
@property (readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)allObjects;
-(BOOL)containsObject:(id)arg1 ;
-(void)appendObject:(id)arg1 ;
-(IMDoubleLinkedListNode *)first;
-(void)setFirst:(IMDoubleLinkedListNode *)arg1 ;
-(void)appendLinkedListNode:(id)arg1 ;
-(void)pushLinkedListNode:(id)arg1 ;
-(void)removeLinkedListNode:(id)arg1 ;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(IMDoubleLinkedListNode *)last;
-(void)setLast:(IMDoubleLinkedListNode *)arg1 ;
@end

