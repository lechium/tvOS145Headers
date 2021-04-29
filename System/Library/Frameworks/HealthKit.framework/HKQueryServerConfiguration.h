/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSString, HKObjectType, _HKFilter;

@interface HKQueryServerConfiguration : HKTaskConfiguration {

	BOOL _shouldDeactivateAfterInitialResults;
	BOOL _shouldSuppressDataCollection;
	NSString* _debugIdentifier;
	HKObjectType* _objectType;
	_HKFilter* _filter;
	long long _qualityOfService;
	double _activationTime;

}

@property (nonatomic,copy) HKObjectType * objectType;                               //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,retain) _HKFilter * filter;                                    //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                            //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL shouldDeactivateAfterInitialResults;              //@synthesize shouldDeactivateAfterInitialResults=_shouldDeactivateAfterInitialResults - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressDataCollection;                     //@synthesize shouldSuppressDataCollection=_shouldSuppressDataCollection - In the implementation block
@property (assign,nonatomic) double activationTime;                                 //@synthesize activationTime=_activationTime - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                              //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(_HKFilter *)filter;
-(void)setFilter:(_HKFilter *)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSString *)debugIdentifier;
-(HKObjectType *)objectType;
-(void)setObjectType:(HKObjectType *)arg1 ;
-(double)activationTime;
-(void)setActivationTime:(double)arg1 ;
-(void)setShouldDeactivateAfterInitialResults:(BOOL)arg1 ;
-(void)setShouldSuppressDataCollection:(BOOL)arg1 ;
-(BOOL)shouldSuppressDataCollection;
-(BOOL)shouldDeactivateAfterInitialResults;
@end

