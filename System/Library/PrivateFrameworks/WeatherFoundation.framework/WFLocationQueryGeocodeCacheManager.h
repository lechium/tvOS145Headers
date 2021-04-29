/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class NSMutableDictionary;

@interface WFLocationQueryGeocodeCacheManager : NSObject {

	os_unfair_lock_s _dataSynchronizationLock;
	NSMutableDictionary* _geocodeCache;
	double _expirationTime;

}

@property (nonatomic,readonly) os_unfair_lock_s dataSynchronizationLock;              //@synthesize dataSynchronizationLock=_dataSynchronizationLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * geocodeCache;                    //@synthesize geocodeCache=_geocodeCache - In the implementation block
@property (nonatomic,readonly) double expirationTime;                                 //@synthesize expirationTime=_expirationTime - In the implementation block
+(id)sharedManager;
-(id)init;
-(double)expirationTime;
-(id)cachedLocationForKey:(id)arg1 ;
-(void)updateCacheForKey:(id)arg1 withLocation:(id)arg2 ;
-(os_unfair_lock_s)dataSynchronizationLock;
-(id)_persistedInfoFromDisk;
-(void)_discardExpiredLocations;
-(NSMutableDictionary *)geocodeCache;
-(void)_persistInfoToDisk;
-(id)_persistedInfoURL;
@end
