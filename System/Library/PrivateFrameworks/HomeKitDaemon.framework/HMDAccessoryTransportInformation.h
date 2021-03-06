/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPAccessory, NSString, NSNumber;

@interface HMDAccessoryTransportInformation : HMFObject <NSSecureCoding> {

	os_unfair_lock_s _lock;
	BOOL _reachable;
	HAPAccessory* _hapAccessory;
	NSString* _protocolVersion;
	NSString* _serverIdentifier;
	NSNumber* _instanceID;
	long long _linkType;

}

@property (nonatomic,copy,readonly) NSString * serverIdentifier;              //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * instanceID;                    //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,readonly) long long linkType;                            //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) HAPAccessory * hapAccessory;                     //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,copy) NSString * protocolVersion;                        //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (getter=isReachable) BOOL reachable;                                //@synthesize reachable=_reachable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)linkType;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(NSString *)serverIdentifier;
-(NSNumber *)instanceID;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(HAPAccessory *)hapAccessory;
-(void)setHapAccessory:(HAPAccessory *)arg1 ;
-(id)initWithServerIdentifier:(id)arg1 instanceID:(id)arg2 linkType:(long long)arg3 reachable:(BOOL)arg4 ;
-(id)initWithHAPAccessory:(id)arg1 ;
@end

