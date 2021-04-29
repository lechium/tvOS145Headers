/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFLResumable.h>
#import <libobjc.A.dylib/PFLTaskStateProvider.h>

@protocol MLBatchProvider, PFLTaskState;
@class NSURL, PFLUpdateConfiguration, NSString;

@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider> {

	NSURL* _modelURL;
	id<MLBatchProvider> _trainingData;
	PFLUpdateConfiguration* _configuration;
	/*^block*/id _completionHandler;
	id<PFLTaskState> _currentState;

}

@property (nonatomic,readonly) NSURL * modelURL;                                    //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,readonly) id<MLBatchProvider> trainingData;                    //@synthesize trainingData=_trainingData - In the implementation block
@property (nonatomic,readonly) PFLUpdateConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) id<PFLTaskState> currentState;                         //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(void)suspend;
-(PFLUpdateConfiguration *)configuration;
-(id<PFLTaskState>)currentState;
-(id)completionHandler;
-(void)setCurrentState:(id<PFLTaskState>)arg1 ;
-(id)layerNames;
-(NSURL *)modelURL;
-(id)dataProvider;
-(id)modelConfiguration;
-(id<MLBatchProvider>)trainingData;
-(void)resumeWithState:(id)arg1 ;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(double)validationSplit;
-(id)compiledModelURL;
-(id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

