/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, ENAdvertisementDatabase;

@interface ENAdvertisementDatabaseQuerySession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned _tekCount;
	unsigned char _attenuationThreshold;
	unsigned _storedAdvertisementCount;
	ENAdvertisementDatabase* _database;

}

@property (nonatomic,readonly) unsigned char attenuationThreshold;              //@synthesize attenuationThreshold=_attenuationThreshold - In the implementation block
@property (nonatomic,readonly) ENAdvertisementDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) unsigned storedAdvertisementCount;               //@synthesize storedAdvertisementCount=_storedAdvertisementCount - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(ENAdvertisementDatabase *)database;
-(id)initWithDatabase:(id)arg1 attenuationThreshold:(unsigned char)arg2 advertisementCount:(unsigned)arg3 queue:(id)arg4 ;
-(BOOL)enumerateAdvertisementsMatchingKeys:(id)arg1 attenuationThreshold:(unsigned char)arg2 timestampTolerance:(double)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(unsigned char)attenuationThreshold;
-(unsigned)storedAdvertisementCount;
@end

