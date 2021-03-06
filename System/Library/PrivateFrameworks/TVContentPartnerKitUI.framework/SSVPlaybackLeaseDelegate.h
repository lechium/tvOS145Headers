/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SSVPlaybackLeaseDelegate <NSObject>
@optional
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
-(void)playbackLeaseAutomaticRefreshDidFinish:(id)arg1;
-(void)playbackLease:(id)arg1 automaticRefreshDidFailWithError:(id)arg2;
-(void)playbackLeaseDidEnd:(id)arg1;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;

@end

