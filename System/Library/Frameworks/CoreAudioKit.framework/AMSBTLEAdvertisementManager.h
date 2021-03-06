/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CBPeripheralManagerDelegate.h>

@class CBPeripheralManager, NSString;

@interface AMSBTLEAdvertisementManager : NSObject <CBPeripheralManagerDelegate> {

	CBPeripheralManager* peripheralManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)peripheralManagerDidUpdateState:(id)arg1 ;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2 ;
-(BOOL)isAdvertising;
-(BOOL)isLECapableHardware;
-(void)advertiseMIDIService;
-(void)stopAdvertisingMIDIService;
@end

