/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSDictionary, AMSMetricsFigaroEventModifier, NSObject;

@interface AMSMetricsFigaroBagConfguration : NSObject {

	NSArray* _overrides;
	NSDictionary* _metricsDictionary;
	AMSMetricsFigaroEventModifier* _defaultModifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSDictionary * metricsDictionary;                             //@synthesize metricsDictionary=_metricsDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * overrides;                                          //@synthesize overrides=_overrides - In the implementation block
@property (nonatomic,readonly) AMSMetricsFigaroEventModifier * defaultModifier;              //@synthesize defaultModifier=_defaultModifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
+(id)configurationWithBag:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSArray *)overrides;
-(NSDictionary *)metricsDictionary;
-(id)modifierForEvent:(id)arg1 ;
-(id)initWithMetricsDictionary:(id)arg1 ;
-(id)_generateModifiersIfNeeded;
-(AMSMetricsFigaroEventModifier *)defaultModifier;
-(void)prepareForFlush;
@end

