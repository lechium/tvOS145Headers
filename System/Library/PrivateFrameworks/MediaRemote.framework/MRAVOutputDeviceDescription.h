/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDeviceDescription : NSObject {

	unsigned _deviceType;
	unsigned _deviceSubtype;
	NSString* _uid;

}

@property (nonatomic,readonly) _MRAVOutputDeviceDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) unsigned deviceType;                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned deviceSubtype;                                        //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                //@synthesize uid=_uid - In the implementation block
-(_MRAVOutputDeviceDescriptorProtobuf *)descriptor;
-(unsigned)deviceType;
-(NSString *)uid;
-(unsigned)deviceSubtype;
-(id)initWithDeviceType:(unsigned)arg1 deviceSubtype:(unsigned)arg2 uid:(id)arg3 ;
@end

