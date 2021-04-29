/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TRIClient, TRITrackingId, NSMutableArray, NSString;

@interface SSRTrialClientHost : NSObject {

	TRIClient* _trialClient;
	TRITrackingId* _currentTrackingId;
	NSMutableArray* _updateBlocks;
	NSString* _ssrNamespace;

}

@property (nonatomic,retain) TRIClient * trialClient;                        //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,retain) TRITrackingId * currentTrackingId;              //@synthesize currentTrackingId=_currentTrackingId - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateBlocks;                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSString * ssrNamespace;                        //@synthesize ssrNamespace=_ssrNamespace - In the implementation block
+(id)sharedHost;
-(id)init;
-(TRIClient *)trialClient;
-(id)newTrackingId;
-(NSMutableArray *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableArray *)arg1 ;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(void)_registerUpdateHandlerForCorespeechd;
-(void)_callUpdateBlocksWithUpdate:(id)arg1 ;
-(TRITrackingId *)currentTrackingId;
-(void)refreshTreatments;
-(id)levelForFactor:(id)arg1 ;
-(void)addUpdateHandlerUsingBlock:(/*^block*/id)arg1 ;
-(void)setCurrentTrackingId:(TRITrackingId *)arg1 ;
-(NSString *)ssrNamespace;
-(void)setSsrNamespace:(NSString *)arg1 ;
@end
