/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTManagedConfiguration.h>

@interface RTManagedConfiguration_Embedded : RTManagedConfiguration
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isFindMyCarAllowed;
-(BOOL)isDiagnosticsAndUsageAllowed;
-(id)stringToManagedConfigurationKey:(id)arg1 ;
@end

