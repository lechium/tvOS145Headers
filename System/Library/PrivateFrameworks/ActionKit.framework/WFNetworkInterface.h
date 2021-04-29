/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFNetworkInterface : NSObject {

	NSString* _interfaceName;

}

@property (nonatomic,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,readonly) NSString * SSID; 
@property (nonatomic,readonly) NSString * BSSID; 
@property (nonatomic,readonly) NSString * IPv4Address; 
@property (nonatomic,readonly) NSString * IPv6Address; 
+(id)networkInterfaceWithInterface:(id)arg1 ;
+(id)activeNetworkInterface;
+(id)defaultNetworkInterfaces;
+(id)wifiNetworkInterfaces;
-(NSString *)interfaceName;
-(id)initWithInterface:(id)arg1 ;
-(NSString *)SSID;
-(NSString *)BSSID;
-(NSString *)IPv4Address;
-(NSString *)IPv6Address;
-(id)ipAddressForFamily:(unsigned char)arg1 ;
@end

