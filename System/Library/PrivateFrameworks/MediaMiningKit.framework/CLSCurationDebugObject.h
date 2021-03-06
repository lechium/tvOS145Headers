/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSArray;

@interface CLSCurationDebugObject : NSObject {

	NSMutableArray* _stateHistory;
	unsigned long long _tentativeSectionStateHistoryLength;
	unsigned long long _stateAtBeginningOfTentativeSection;
	unsigned long long _state;

}

@property (readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) NSArray * stateHistory;                //@synthesize stateHistory=_stateHistory - In the implementation block
+(id)stringForState:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)state;
-(id)dictionaryRepresentation;
-(id)timestamp;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(void)beginTentativeSection;
-(NSArray *)stateHistory;
-(void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
-(void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;
@end

