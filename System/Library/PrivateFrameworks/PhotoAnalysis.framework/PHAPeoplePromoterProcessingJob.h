/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PHAWorkerJob.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PVPersonPromoter, PHAVisionServiceFaceProcessingWorker, NSString;

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate> {

	BOOL _finished;
	float _completionScore;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	PVPersonPromoter* _personPromoter;
	PHAVisionServiceFaceProcessingWorker* _worker;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                  //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (nonatomic,retain) PVPersonPromoter * personPromoter;                                 //@synthesize personPromoter=_personPromoter - In the implementation block
@property (assign,nonatomic,__weak) PHAVisionServiceFaceProcessingWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(PHAVisionServiceFaceProcessingWorker *)worker;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(void)setWorker:(PHAVisionServiceFaceProcessingWorker *)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(PVPersonPromoter *)personPromoter;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3 ;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(float)completionScore;
-(void)setCompletionScore:(float)arg1 ;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPersonPromoter:(PVPersonPromoter *)arg1 ;
@end

