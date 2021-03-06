/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying> {

	BOOL _carrierBundleBased;
	unsigned long long _disabledReason;
	NSString* _ssid;

}

@property (assign,nonatomic) unsigned long long disabledReason;                                //@synthesize disabledReason=_disabledReason - In the implementation block
@property (assign,getter=isCarrierBundleBased,nonatomic) BOOL carrierBundleBased;              //@synthesize carrierBundleBased=_carrierBundleBased - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                                    //@synthesize ssid=_ssid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(unsigned long long)disabledReason;
-(id)initWithPrivateAddressConfigDictionary:(id)arg1 ssid:(id)arg2 ;
-(void)setDisabledReason:(unsigned long long)arg1 ;
-(BOOL)isCarrierBundleBased;
-(void)setCarrierBundleBased:(BOOL)arg1 ;
@end

