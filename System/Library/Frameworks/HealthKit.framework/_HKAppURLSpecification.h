/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _HKAppURLSpecification : NSObject
+(BOOL)isClinicalOnboardingURL:(id)arg1 ;
+(BOOL)isClinicalLoginRedirectURL:(id)arg1 ;
+(BOOL)parseClinicalOnboardingURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)isAtrialFibrillationEventURL:(id)arg1 ;
+(BOOL)isViewHealthRecordsURL:(id)arg1 ;
+(BOOL)isHealthRecordsProviderSearchURL:(id)arg1 ;
@end
