/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTStateTransitionOnePredEl, NSUUID;

@interface RTStateTransitionOneTransPred : NSObject {

	RTStateTransitionOnePredEl* _weekly;
	RTStateTransitionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateTransitionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateTransitionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                               //@synthesize stateUUID=_stateUUID - In the implementation block
-(id)init;
-(void)setWeekly:(RTStateTransitionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateTransitionOnePredEl *)arg1 ;
-(RTStateTransitionOnePredEl *)weekly;
-(RTStateTransitionOnePredEl *)daily;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
@end
