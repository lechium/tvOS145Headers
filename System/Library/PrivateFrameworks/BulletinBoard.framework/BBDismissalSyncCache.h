/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject {

	NSMutableDictionary* _cache;
	NSDate* _timeToCheck;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * timeToCheck;                     //@synthesize timeToCheck=_timeToCheck - In the implementation block
-(id)description;
-(id)init;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)findBulletinMatch:(id)arg1 ;
-(void)removeBulletinMatch:(id)arg1 ;
-(void)_checkCache;
-(NSDate *)timeToCheck;
-(BOOL)_isTimeToCheck;
-(void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned long long)arg4 ;
-(void)setTimeToCheck:(NSDate *)arg1 ;
@end
