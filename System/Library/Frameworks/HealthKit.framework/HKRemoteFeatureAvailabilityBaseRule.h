/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKRemoteFeatureAvailabilityDataSource;
@interface HKRemoteFeatureAvailabilityBaseRule : NSObject {

	id<HKRemoteFeatureAvailabilityDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<HKRemoteFeatureAvailabilityDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(Class)ruleClassForRawValue:(id)arg1 ;
-(id<HKRemoteFeatureAvailabilityDataSource>)dataSource;
-(void)setDataSource:(id<HKRemoteFeatureAvailabilityDataSource>)arg1 ;
-(BOOL)evaluate;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(void)processUserInfo:(id)arg1 ;
@end
