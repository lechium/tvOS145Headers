/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,copy) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                  //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(void)setTimeout:(NSDate *)arg1 ;
-(NSDate *)timeout;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)bulletinID;
-(void)setBulletinID:(NSString *)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
@end

