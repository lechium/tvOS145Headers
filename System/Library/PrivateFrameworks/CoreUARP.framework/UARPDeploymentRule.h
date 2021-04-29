/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUARP/CoreUARP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class NSObject, NSString, NSDate, NSArray, NSNumber;

@interface UARPDeploymentRule : NSObject <NSCopying, NSSecureCoding> {

	NSObject*<OS_os_log> _log;
	NSString* _currentISOCountryCode;
	NSDate* _goLiveDate;
	NSArray* _countryList;
	NSNumber* _rampPeriod;
	NSNumber* _deploymentLimit;
	NSString* _testSerialNumber;
	NSNumber* _deploymentPercent;
	NSNumber* _deploymentDay;
	NSString* _serialNumber;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(BOOL)isDeploymentAllowed:(id*)arg1 ;
-(void)createSerialNumber;
-(void)calculateDeploymentDay;
-(void)calculateDeploymentPercent;
-(BOOL)isDeploymentAllowedPerGoLiveDate;
-(BOOL)isDeploymentAllowedPerCountryList;
-(BOOL)isDeploymentAllowedPerRampPeriod;
-(BOOL)isDeploymentAllowedPerDeploymentLimit;
-(void)setTestSerialNumber:(id)arg1 ;
-(id)testSerialNumber;
-(void)setDeploymentDay:(id)arg1 ;
-(id)deploymentDay;
-(void)setDeploymentPercent:(id)arg1 ;
-(id)deploymentPercent;
-(void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2 ;
@end

