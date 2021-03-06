/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>
@optional
-(void)refreshInputMetering;
-(void)refreshOutputMetering;
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2;

@required
-(void)stopClient:(id)arg1;
-(void)startClient:(id)arg1;
-(void)updateClient:(id)arg1;

@end

