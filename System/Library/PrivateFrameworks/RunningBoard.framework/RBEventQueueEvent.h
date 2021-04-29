/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RBEventQueueEvent : NSObject {

	id _context;
	double _eventTime;
	/*^block*/id _action;

}

@property (nonatomic,retain) id context;                    //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) double eventTime;              //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy) id action;                       //@synthesize action=_action - In the implementation block
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(double)eventTime;
-(void)setEventTime:(double)arg1 ;
@end
