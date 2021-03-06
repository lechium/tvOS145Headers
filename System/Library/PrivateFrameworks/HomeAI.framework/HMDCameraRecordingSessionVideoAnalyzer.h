/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMIHomePersonManager, NSSet;


@protocol HMDCameraRecordingSessionVideoAnalyzer <NSObject>
@property (retain) HMIHomePersonManager * homePersonManager; 
@property (copy) NSSet * externalPersonManagers; 
@property (__weak) id<HMDCameraRecordingSessionVideoAnalyzerDelegate> delegate; 
@required
-(id<HMDCameraRecordingSessionVideoAnalyzerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMIHomePersonManager *)homePersonManager;
-(void)analyzeFragment:(id)arg1;
-(void)clearPendingFragments;
-(void)setHomePersonManager:(id)arg1;
-(NSSet *)externalPersonManagers;
-(void)setExternalPersonManagers:(id)arg1;

@end

