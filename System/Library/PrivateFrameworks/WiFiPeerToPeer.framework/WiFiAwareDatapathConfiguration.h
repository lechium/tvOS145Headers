/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WiFiAwareDiscoveryResult, NSString, NSData, WiFiAwarePublishDatapathServiceSpecificInfo;

@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding> {

	WiFiAwareDiscoveryResult* _discoveryResult;
	long long _serviceType;
	NSString* _passphrase;
	NSData* _pmk;
	WiFiAwarePublishDatapathServiceSpecificInfo* _serviceSpecificInfo;

}

@property (nonatomic,readonly) WiFiAwareDiscoveryResult * discoveryResult;                                     //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * passphrase;                                                          //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,readonly) NSData * pmk;                                                                   //@synthesize pmk=_pmk - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishDatapathServiceSpecificInfo * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)serviceType;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(WiFiAwarePublishDatapathServiceSpecificInfo *)serviceSpecificInfo;
-(NSString *)passphrase;
-(NSData *)pmk;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 passphrase:(id)arg3 pmk:(id)arg4 serviceSpecificInfo:(id)arg5 ;
-(BOOL)passphraseEqual:(id)arg1 ;
-(BOOL)pmkEqual:(id)arg1 ;
@end

