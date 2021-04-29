/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requireActiveConnection;
	NSString* _reachableHostName;
	double _updateCoalescenceInterval;

}

@property (nonatomic,copy) NSString * reachableHostName;                    //@synthesize reachableHostName=_reachableHostName - In the implementation block
@property (assign,nonatomic) double updateCoalescenceInterval;              //@synthesize updateCoalescenceInterval=_updateCoalescenceInterval - In the implementation block
@property (assign,nonatomic) BOOL requireActiveConnection;                  //@synthesize requireActiveConnection=_requireActiveConnection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reachableHostName;
-(double)updateCoalescenceInterval;
-(BOOL)requireActiveConnection;
-(void)setReachableHostName:(NSString *)arg1 ;
-(void)setUpdateCoalescenceInterval:(double)arg1 ;
-(void)setRequireActiveConnection:(BOOL)arg1 ;
@end

