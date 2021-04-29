/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AFLinkedListItem : NSObject {

	id _object;
	AFLinkedListItem* _previousItem;
	AFLinkedListItem* _nextItem;

}

@property (nonatomic,readonly) id object;                                  //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) AFLinkedListItem * previousItem;              //@synthesize previousItem=_previousItem - In the implementation block
@property (nonatomic,retain) AFLinkedListItem * nextItem;                  //@synthesize nextItem=_nextItem - In the implementation block
-(id)initWithObject:(id)arg1 ;
-(id)object;
-(void)removeFromList;
-(AFLinkedListItem *)nextItem;
-(void)insertAfterItem:(id)arg1 ;
-(AFLinkedListItem *)previousItem;
-(void)setNextItem:(AFLinkedListItem *)arg1 ;
-(void)setPreviousItem:(AFLinkedListItem *)arg1 ;
-(void)insertBeforeItem:(id)arg1 ;
@end
