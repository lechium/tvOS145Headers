/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCRStateTransitionable <NSObject>
@optional
+(id)descriptionForState:(unsigned long long)arg1;
+(id)validStateTransitions;

@required
-(void)handleStateTransition:(id)arg1;

@end

