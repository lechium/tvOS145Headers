/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVCPacketFilter.h>

@interface AVCPacketFilterRTP : AVCPacketFilter {

	unsigned _SSRC;
	unsigned char _type;

}
-(BOOL)isMatchedPacket:(const void*)arg1 size:(int)arg2 ;
-(BOOL)isRTCPPayload:(unsigned short)arg1 ;
-(BOOL)isPayloadTypeMatched:(BOOL)arg1 ;
-(id)initWithIncomingSSRC:(unsigned)arg1 acceptPacketType:(unsigned char)arg2 ;
@end

