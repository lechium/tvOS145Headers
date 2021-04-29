/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SFDevice, NSUUID;

@interface TRNearbyDevice : NSObject {

	unsigned long long _supportedService;
	SFDevice* _representedDevice;

}

@property (assign,nonatomic) unsigned long long supportedService;              //@synthesize supportedService=_supportedService - In the implementation block
@property (nonatomic,readonly) SFDevice * representedDevice;                   //@synthesize representedDevice=_representedDevice - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier; 
-(id)description;
-(id)init;
-(NSUUID *)identifier;
-(id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2 ;
-(SFDevice *)representedDevice;
-(unsigned long long)supportedService;
-(void)setSupportedService:(unsigned long long)arg1 ;
@end

