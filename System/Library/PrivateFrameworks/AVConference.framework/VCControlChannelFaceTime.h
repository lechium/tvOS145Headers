/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCControlChannel.h>

@interface VCControlChannelFaceTime : VCControlChannel {

	unsigned _callID;
	tagHANDLE* _SIPHandle;

}
-(void)dealloc;
-(BOOL)sendReliableMessageAndWait:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)sendReliableMessage:(id)arg1 ;
@end

