/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSData;

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _updatedAt;
	NSData* _linkQualityMetricData;

}

@property (nonatomic,copy) NSDate * updatedAt;                          //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,readonly) long long RSSI; 
@property (nonatomic,readonly) long long noise; 
@property (nonatomic,readonly) double txRate; 
@property (nonatomic,readonly) double rxRate; 
@property (nonatomic,readonly) float CCA; 
@property (nonatomic,copy) NSData * linkQualityMetricData;              //@synthesize linkQualityMetricData=_linkQualityMetricData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)noise;
-(long long)RSSI;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(double)txRate;
-(NSDate *)updatedAt;
-(float)CCA;
-(void)setLinkQualityMetricData:(NSData *)arg1 ;
-(NSData *)linkQualityMetricData;
-(BOOL)isEqualToLinkQualityMetric:(id)arg1 ;
-(double)rxRate;
@end

