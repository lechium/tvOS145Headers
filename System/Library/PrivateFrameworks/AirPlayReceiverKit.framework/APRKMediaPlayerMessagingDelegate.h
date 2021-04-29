/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol APRKMediaPlayerMessagingDelegate <NSObject>
@required
-(void)mediaPlayerNeedsTLSInfo:(id)arg1;
-(void)mediaPlayer:(id)arg1 wantsToSendUpstreamMessageWithDictionary:(id)arg2;
-(void)mediaPlayer:(id)arg1 wantsToUpdateStreamingTypeWithIsAudioValue:(BOOL)arg2;
-(void)mediaPlayer:(id)arg1 didGenerateFPSSecureStopRecordPayload:(id)arg2;

@end

