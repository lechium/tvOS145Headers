/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <AXCoreUtilities/AXMetricContainer.h>

@class NSString, NSMutableArray, NSArray;

@interface AXMetricSession : NSObject <NSSecureCoding, AXMetricContainer> {

	BOOL _measurementsEnabled;
	NSString* _name;
	NSMutableArray* _childMetrics;
	NSArray* _enabledByEnvironmentVariables;

}

@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * childMetrics;                        //@synthesize childMetrics=_childMetrics - In the implementation block
@property (assign,nonatomic) BOOL measurementsEnabled;                             //@synthesize measurementsEnabled=_measurementsEnabled - In the implementation block
@property (nonatomic,retain) NSArray * enabledByEnvironmentVariables;              //@synthesize enabledByEnvironmentVariables=_enabledByEnvironmentVariables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)startMeasure:(id)arg1 ;
-(void)measure:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 measurementsEnabled:(BOOL)arg2 orEnabledByEnvironmentVariables:(id)arg3 ;
-(BOOL)measurementsEnabled;
-(id)generateReport;
-(id)measure:(id)arg1 tryExecute:(/*^block*/id)arg2 ;
-(void)setChildMetrics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)childMetrics;
-(void)setEnabledByEnvironmentVariables:(NSArray *)arg1 ;
-(void)setMeasurementsEnabled:(BOOL)arg1 ;
-(NSArray *)enabledByEnvironmentVariables;
-(id)initWithName:(id)arg1 measurementsEnabled:(BOOL)arg2 ;
@end

