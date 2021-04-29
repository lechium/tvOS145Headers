/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDEndPointAddress, HMDSRTPParameters;

@interface HMDSetupEndPointWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSUUID* _sessionID;
	HMDEndPointAddress* _address;
	HMDSRTPParameters* _videoSrtpParameters;
	HMDSRTPParameters* _audioSrtpParameters;

}

@property (nonatomic,copy,readonly) NSUUID * sessionID;                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy,readonly) HMDEndPointAddress * address;                         //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) HMDSRTPParameters * videoSrtpParameters;              //@synthesize videoSrtpParameters=_videoSrtpParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSRTPParameters * audioSrtpParameters;              //@synthesize audioSrtpParameters=_audioSrtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDEndPointAddress *)address;
-(NSUUID *)sessionID;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(id)tlvData;
-(HMDSRTPParameters *)videoSrtpParameters;
-(HMDSRTPParameters *)audioSrtpParameters;
-(BOOL)_parseFromTLVDataImpl;
-(id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 ;
-(BOOL)_parseFromTLVDataOnSuccess;
-(BOOL)_parseFromTLVDataOnFailure;
@end

