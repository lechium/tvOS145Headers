/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject {

	GEOSQLiteDB* _db;
	double _maxAge;
	BOOL _enabled;

}

@property (assign,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_tearDown;
-(void)startedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 ;
-(void)finishedProactiveTileDownloadForIdentifier:(id)arg1 policy:(unsigned char)arg2 tilesConsidered:(unsigned)arg3 tileDownloadAttempts:(unsigned)arg4 successes:(unsigned)arg5 failures:(unsigned)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(void)readProactiveTileDownloadsSince:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)recordAnalyticsPersistCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsUploadSuccessCount:(long long)arg1 bytes:(long long)arg2 logMsgType:(long long)arg3 usedCellular:(BOOL)arg4 at:(id)arg5 ;
-(void)recordAnalyticsUploadFailureCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)recordAnalyticsDBExpireCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 ;
-(void)fetchAnalyticsHandlingDataFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)recordRoutePreloadSessionAt:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(void)fetchRoutePreloadSessionsFrom:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)countsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)logsStartingFrom:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)purgeAllCounts;
-(void)incrementForApp:(id)arg1 time:(id)arg2 requestId:(id)arg3 requestType:(int)arg4 result:(unsigned char)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 withCompletion:(/*^block*/id)arg8 ;
-(id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2 ;
-(void)_purgeOlderThan:(id)arg1 ;
-(void)_recordAnalylticsCount:(long long)arg1 logMsgType:(long long)arg2 at:(id)arg3 withFxn:(/*function pointer*/void*)arg4 ;
@end

