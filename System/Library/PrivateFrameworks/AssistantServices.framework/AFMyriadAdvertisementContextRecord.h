/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSUUID;

@interface AFMyriadAdvertisementContextRecord : NSObject {

	unsigned char _advertisementContextVersion;
	long long _advertisementRecordType;
	double _voiceTriggerEndTime;
	NSData* _advertisementPayload;
	NSUUID* _deviceID;
	double _advertisementDispatchTime;

}

@property (nonatomic,readonly) unsigned char advertisementContextVersion;              //@synthesize advertisementContextVersion=_advertisementContextVersion - In the implementation block
@property (nonatomic,readonly) long long advertisementRecordType;                      //@synthesize advertisementRecordType=_advertisementRecordType - In the implementation block
@property (nonatomic,readonly) double voiceTriggerEndTime;                             //@synthesize voiceTriggerEndTime=_voiceTriggerEndTime - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementPayload;                     //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceID;                                 //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) double advertisementDispatchTime;                         //@synthesize advertisementDispatchTime=_advertisementDispatchTime - In the implementation block
-(id)description;
-(NSUUID *)deviceID;
-(void)_initializeMyriadAdvertisementContextRecordFromData:(id)arg1 ;
-(unsigned long long)_advertismentPayloadSizeForVersion:(unsigned char)arg1 ;
-(id)_deviceIDFromBytes:(const unsigned char*)arg1 ;
-(char)_getAdvertismentRecordTypeForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(double)_getVoiceTriggerEndTimeForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(id)_getMyriadAdvertisementDataForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(id)_getDeviceIdForVersion:(unsigned char)arg1 data:(id)arg2 ;
-(id)initWithAdvertisementRecordType:(long long)arg1 voiceTriggerEndTime:(double)arg2 advertisementPayload:(id)arg3 deviceID:(id)arg4 ;
-(id)initWithMyriadAdvertisementContextRecordData:(id)arg1 ;
-(id)myriadAdvertisementContextAsData;
-(BOOL)isSaneForVoiceTriggerEndTime:(double)arg1 endtimeDistanceThreshold:(double)arg2 ;
-(id)recordForDeviceId:(id)arg1 ;
-(BOOL)compareAdvertisementPayload:(id)arg1 ;
-(unsigned char)advertisementContextVersion;
-(long long)advertisementRecordType;
-(double)voiceTriggerEndTime;
-(NSData *)advertisementPayload;
-(double)advertisementDispatchTime;
-(void)setAdvertisementDispatchTime:(double)arg1 ;
@end

