/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class NSString;

@interface MPCPlaybackEngineLoggingConsumer : NSObject <MPCPlaybackEngineEventConsumer> {

	id<MPCPlaybackEngineEventStreamSubscription> _subscription;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
+(id)dateFormatter;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(id)_prefixWithCursor:(id)arg1 ;
-(BOOL)_logAccountEvent:(id)arg1 cursor:(id)arg2 ;
-(id)_symbolForCommand:(unsigned)arg1 ;
-(id)_commandBeginConnectorForCursor:(id)arg1 ;
-(id)_symbolForStatus:(unsigned)arg1 ;
-(id)_descriptionForShuffleType:(long long)arg1 ;
-(id)_descriptionForRepeatType:(long long)arg1 ;
-(id)_descriptionForAutoplayMode:(long long)arg1 ;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
@end

