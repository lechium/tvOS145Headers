/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {

	NSNumber* _wantsDeliveryStatus;
	NSNumber* _version;
	NSDictionary* _deliveryStatusContext;
	BOOL _wantsCertifiedDelivery;

}

@property (copy) NSNumber * wantsDeliveryStatus;                    //@synthesize wantsDeliveryStatus=_wantsDeliveryStatus - In the implementation block
@property (assign) BOOL wantsCertifiedDelivery;                     //@synthesize wantsCertifiedDelivery=_wantsCertifiedDelivery - In the implementation block
@property (copy) NSDictionary * deliveryStatusContext;              //@synthesize deliveryStatusContext=_deliveryStatusContext - In the implementation block
@property (copy) NSNumber * version;                                //@synthesize version=_version - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(BOOL)_shouldUseJSONForEncoding;
-(NSNumber *)wantsDeliveryStatus;
-(void)setWantsDeliveryStatus:(NSNumber *)arg1 ;
-(NSDictionary *)deliveryStatusContext;
-(void)setDeliveryStatusContext:(NSDictionary *)arg1 ;
-(BOOL)wantsCertifiedDelivery;
-(void)setWantsCertifiedDelivery:(BOOL)arg1 ;
-(id)messageBody;
-(id)_objectForKeyFromMadridBag:(id)arg1 ;
-(id)_madridServerBag;
-(BOOL)wantsAPSRetries;
-(BOOL)wantsHTTPHeaders;
-(id)userAgentHeaderString;
-(BOOL)wantsUserAgentInHeaders;
@end

