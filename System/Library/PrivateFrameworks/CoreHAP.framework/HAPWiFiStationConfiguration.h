/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSString, HAPWiFiSecurityModeWrapper, NSData;

@interface HAPWiFiStationConfiguration : NSObject <NSCopying, HAPTLVProtocol> {

	NSString* _SSID;
	HAPWiFiSecurityModeWrapper* _securityMode;
	NSData* _PSK;

}

@property (setter=SID,nonatomic,retain) NSString * SSID;                             //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,retain) HAPWiFiSecurityModeWrapper * securityMode;              //@synthesize securityMode=_securityMode - In the implementation block
@property (nonatomic,retain) NSData * PSK;                                           //@synthesize PSK=_PSK - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPWiFiSecurityModeWrapper *)securityMode;
-(void)setSecurityMode:(HAPWiFiSecurityModeWrapper *)arg1 ;
-(void)setSSID:(NSString *)arg1 ;
-(NSString *)SSID;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setPSK:(NSData *)arg1 ;
-(NSData *)PSK;
-(id)initWithSSID:(id)arg1 securityMode:(id)arg2 PSK:(id)arg3 ;
@end
