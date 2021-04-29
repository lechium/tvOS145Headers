/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/IRCommand.h>

@interface AppleIRCommand : IRCommand

@property (nonatomic,readonly) unsigned short vendorID; 
@property (nonatomic,readonly) unsigned char deviceUID; 
@property (nonatomic,readonly) unsigned char commandPage; 
@property (nonatomic,readonly) unsigned char commandID; 
@property (nonatomic,readonly) unsigned short token; 
@property (nonatomic,readonly) unsigned long long command; 
@property (nonatomic,readonly) BOOL isA39PlayPauseSelect; 
@property (nonatomic,readonly) BOOL isB39PlayPauseOrSelect; 
@property (nonatomic,readonly) BOOL isB39Command; 
@property (nonatomic,readonly) BOOL isStackshotRequest; 
@property (nonatomic,readonly) BOOL isPairingRequest; 
@property (nonatomic,readonly) BOOL isUnpairingRequest; 
@property (nonatomic,readonly) BOOL isBTLEDiscoveryModeRequest; 
+(BOOL)matchNECVendorID:(unsigned short)arg1 ;
-(id)description;
-(unsigned short)token;
-(unsigned long long)command;
-(unsigned short)vendorID;
-(unsigned char)commandID;
-(unsigned char)deviceUID;
-(unsigned char)commandPage;
-(BOOL)isUnpairingRequest;
-(BOOL)isBTLEDiscoveryModeRequest;
-(BOOL)isB39Command;
-(BOOL)isA39PlayPauseSelect;
-(BOOL)isB39PlayPauseOrSelect;
-(BOOL)isPairingRequest;
-(BOOL)getVendorSpecificHIDUsagePage:(unsigned*)arg1 usageID:(unsigned*)arg2 ignoreRepeats:(BOOL*)arg3 ;
-(BOOL)isStackshotRequest;
-(id)initWithPayload:(unsigned long long)arg1 repeat:(BOOL)arg2 ;
@end

