/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEAppPushPluginDriver <NEPluginDriver>
@required
-(void)setProviderConfiguration:(id)arg1;
-(void)startConnectionWithProviderConfig:(id)arg1;
-(void)stopWithReason:(int)arg1;
-(void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2;
-(void)sendTimerEvent;

@end

