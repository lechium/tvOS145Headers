/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface IRProtocol : NSObject <NSSecureCoding> {

	unsigned char _protocolID;
	unsigned char _options;
	double _repeatInterval;
	double _carrierFrequency;

}

@property (nonatomic,readonly) unsigned char protocolID;              //@synthesize protocolID=_protocolID - In the implementation block
@property (nonatomic,readonly) unsigned char options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) double repeatInterval;                 //@synthesize repeatInterval=_repeatInterval - In the implementation block
@property (nonatomic,readonly) double carrierFrequency;               //@synthesize carrierFrequency=_carrierFrequency - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)protocolWithID:(unsigned char)arg1 options:(unsigned char)arg2 ;
+(id)protocolWithID:(unsigned char)arg1 options:(unsigned char)arg2 hasRepeats:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)options;
-(double)repeatInterval;
-(id)initWithProtocolID:(unsigned char)arg1 options:(unsigned char)arg2 ;
-(unsigned char)protocolID;
-(double)carrierFrequency;
@end

