/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRCBus.h>

@class CoreIRDevice;

@interface CoreIRBus : CoreRCBus {

	CoreIRDevice* _pairedAppleRemote;
	CoreIRDevice* _lastAppleRemote;

}

@property (nonatomic,retain) CoreIRDevice * lastAppleRemote;                //@synthesize lastAppleRemote=_lastAppleRemote - In the implementation block
@property (nonatomic,retain) CoreIRDevice * pairedAppleRemote;              //@synthesize pairedAppleRemote=_pairedAppleRemote - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteDevice:(id)arg1 error:(id*)arg2 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4 ;
-(CoreIRDevice *)pairedAppleRemote;
-(CoreIRDevice *)lastAppleRemote;
-(BOOL)setPairedAppleRemote:(id)arg1 error:(id*)arg2 ;
-(void)willRemoveDevice:(id)arg1 ;
-(id)initWithBus:(id)arg1 ;
-(id)mergeProperties;
-(void)didDispatchCommandFromAppleRemote:(id)arg1 ;
-(void)setPairedAppleRemote:(CoreIRDevice *)arg1 ;
-(void)setLastAppleRemote:(CoreIRDevice *)arg1 ;
@end

