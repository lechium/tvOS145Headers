/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GKListNode : NSObject {

	id _value;
	GKListNode* _prevNode;
	GKListNode* _nextNode;

}

@property (nonatomic,retain) GKListNode * nextNode;              //@synthesize nextNode=_nextNode - In the implementation block
@property (nonatomic,retain) GKListNode * prevNode;              //@synthesize prevNode=_prevNode - In the implementation block
@property (nonatomic,retain) id value;                           //@synthesize value=_value - In the implementation block
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(GKListNode *)nextNode;
-(GKListNode *)prevNode;
-(void)setPrevNode:(GKListNode *)arg1 ;
-(void)setNextNode:(GKListNode *)arg1 ;
@end

