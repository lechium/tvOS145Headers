/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCMediaControlInfo.h>

@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo {

	unsigned _controlInfoReceivedKbits;
	unsigned _controlInfoReceivedPackets;
	unsigned _controlInfoAudioPacketSize;
	unsigned _controlInfoAudioTimestamp;
	double _controlInfoArrivalTime;
	SCD_Struct_VC193 _controlFeedbackParameter;
	BOOL _videoEnabled;

}

@property (readonly) unsigned long long feedbackSize; 
@property (assign) BOOL videoEnabled;                              //@synthesize videoEnabled=_videoEnabled - In the implementation block
-(id)description;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(BOOL)videoEnabled;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC90*)arg3 ;
-(unsigned long long)feedbackSize;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(int)setInfoUnserialized:(SCD_Struct_VC193*)arg1 type:(unsigned)arg2 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)getInfoUnserialized:(SCD_Struct_VC193*)arg1 type:(unsigned)arg2 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(unsigned long long)serializedSize;
-(int)handleOptionalControlInfo:(SCD_Struct_VC90*)arg1 ;
@end

