/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HMDNetworkRouterIPProtocolVersion, HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterICMPType : NSObject <NSCopying, HAPTLVProtocol> {

	HMDNetworkRouterIPProtocolVersion* _protocol;
	HAPTLVUnsignedNumberValue* _typeValue;

}

@property (nonatomic,retain) HMDNetworkRouterIPProtocolVersion * protocol;              //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * typeValue;                     //@synthesize typeValue=_typeValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)typeFromICMPType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HMDNetworkRouterIPProtocolVersion *)protocol;
-(void)setProtocol:(HMDNetworkRouterIPProtocolVersion *)arg1 ;
-(HAPTLVUnsignedNumberValue *)typeValue;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithProtocol:(id)arg1 typeValue:(id)arg2 ;
-(void)setTypeValue:(HAPTLVUnsignedNumberValue *)arg1 ;
@end

