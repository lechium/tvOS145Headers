/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCSignpostManager : NSObject
+(void)willPostEffectiveSettingsChangedNotification;
+(void)willSetFeature:(id)arg1 ;
+(void)willGetFeature:(id)arg1 ;
+(id)signpostsForTypeFilter:(unsigned long long)arg1 featureFilter:(id)arg2 duration:(double)arg3 error:(id*)arg4 ;
@end
