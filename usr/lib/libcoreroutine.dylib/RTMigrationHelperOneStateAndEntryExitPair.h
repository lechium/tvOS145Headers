/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject {

	RTStateModelOneState* _oneState;
	RTStateModelEntryExit* _entryExit;

}

@property (nonatomic,retain) RTStateModelOneState * oneState;                //@synthesize oneState=_oneState - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * entryExit;              //@synthesize entryExit=_entryExit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(RTStateModelOneState *)oneState;
-(RTStateModelEntryExit *)entryExit;
-(id)initWithOneState:(id)arg1 entryExit:(id)arg2 ;
-(void)setOneState:(RTStateModelOneState *)arg1 ;
-(void)setEntryExit:(RTStateModelEntryExit *)arg1 ;
@end
