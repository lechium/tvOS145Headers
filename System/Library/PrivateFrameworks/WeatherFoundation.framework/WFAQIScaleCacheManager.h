/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class WFAQIScale, NSMutableDictionary;

@interface WFAQIScaleCacheManager : NSObject {

	os_unfair_lock_s _dataSynchronizationLock;
	WFAQIScale* _defaultScale;
	NSMutableDictionary* _aqiScaleCache;

}

@property (nonatomic,readonly) os_unfair_lock_s dataSynchronizationLock;              //@synthesize dataSynchronizationLock=_dataSynchronizationLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * aqiScaleCache;                   //@synthesize aqiScaleCache=_aqiScaleCache - In the implementation block
@property (nonatomic,readonly) WFAQIScale * defaultScale;                             //@synthesize defaultScale=_defaultScale - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)clearCache;
-(WFAQIScale *)defaultScale;
-(os_unfair_lock_s)dataSynchronizationLock;
-(id)_persistedInfoFromDisk;
-(void)_persistInfoToDisk;
-(id)_persistedInfoURL;
-(id)cachedScaleFromIdentifier:(id)arg1 ;
-(void)updateCacheWithScale:(id)arg1 identifier:(id)arg2 ;
-(NSMutableDictionary *)aqiScaleCache;
@end

