/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, NSSecureCoding, NSCopying;
@class AXMPipelineContextInput, NSDictionary, NSMutableArray, AXBookendMetric, VNSceneObservation, NSObject, NSMutableOrderedSet, NSError, AXMVisionAnalysisOptions, NSArray, AXMetricSession, NSMutableSet, AXMVisionResult, NSNumber, VNImageRequestHandler, AXMSequenceRequestManager;

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding> {

	AXMPipelineContextInput* _sourceInput;
	NSDictionary* _sourceParameters;
	BOOL _sourceProvidesOwnResults;
	NSMutableArray* _resultHandlers;
	AXBookendMetric* _piplelineMetric;
	VNSceneObservation* _sceneObservation;
	NSObject*<OS_dispatch_queue> _sceneObservationQueue;
	NSMutableOrderedSet* _auxiliaryDetectors;
	BOOL _shouldProcessRemotely;
	BOOL _shouldCallCompletionHandlersForEngineBusyError;
	BOOL _shouldCallCompletionHandlersForEmptyResultSet;
	BOOL _evaluationExclusivelyUsesVisionFramework;
	NSError* _error;
	AXMVisionAnalysisOptions* _analysisOptions;
	NSArray* _effectiveTextDetectionLocales;
	long long _imageRegistrationState;
	NSObject*<NSSecureCoding> _userContext;
	id<NSCopying> _cacheKey;
	unsigned long long _sequenceID;
	AXMetricSession* _metricSession;
	NSMutableArray* _features;
	NSMutableSet* _evaluatedFeatureTypes;
	AXMVisionResult* _result;
	NSNumber* _appliedImageOrientation;
	VNImageRequestHandler* _visionImageRequestHandler;
	AXMSequenceRequestManager* _sequenceRequestManager;

}

@property (nonatomic,retain) NSMutableArray * features;                                        //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSMutableSet * evaluatedFeatureTypes;                             //@synthesize evaluatedFeatureTypes=_evaluatedFeatureTypes - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AXMVisionAnalysisOptions * analysisOptions;                       //@synthesize analysisOptions=_analysisOptions - In the implementation block
@property (nonatomic,retain) AXMVisionResult * result;                                         //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSNumber * appliedImageOrientation;                               //@synthesize appliedImageOrientation=_appliedImageOrientation - In the implementation block
@property (nonatomic,retain) AXMetricSession * metricSession;                                  //@synthesize metricSession=_metricSession - In the implementation block
@property (nonatomic,retain) VNImageRequestHandler * visionImageRequestHandler;                //@synthesize visionImageRequestHandler=_visionImageRequestHandler - In the implementation block
@property (assign,nonatomic) long long imageRegistrationState;                                 //@synthesize imageRegistrationState=_imageRegistrationState - In the implementation block
@property (nonatomic,retain) AXMSequenceRequestManager * sequenceRequestManager;               //@synthesize sequenceRequestManager=_sequenceRequestManager - In the implementation block
@property (nonatomic,retain) NSObject*<NSSecureCoding> userContext;                            //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSArray * effectiveTextDetectionLocales;                          //@synthesize effectiveTextDetectionLocales=_effectiveTextDetectionLocales - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessRemotely;                                       //@synthesize shouldProcessRemotely=_shouldProcessRemotely - In the implementation block
@property (nonatomic,readonly) NSArray * resultHandlers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) BOOL sourceProvidesResults; 
@property (nonatomic,readonly) BOOL visionImageRequestHandlerIsLoaded; 
@property (nonatomic,retain) id<NSCopying> cacheKey;                                           //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) BOOL shouldCallCompletionHandlersForEngineBusyError;              //@synthesize shouldCallCompletionHandlersForEngineBusyError=_shouldCallCompletionHandlersForEngineBusyError - In the implementation block
@property (assign,nonatomic) BOOL shouldCallCompletionHandlersForEmptyResultSet;               //@synthesize shouldCallCompletionHandlersForEmptyResultSet=_shouldCallCompletionHandlersForEmptyResultSet - In the implementation block
@property (assign,nonatomic) BOOL evaluationExclusivelyUsesVisionFramework;                    //@synthesize evaluationExclusivelyUsesVisionFramework=_evaluationExclusivelyUsesVisionFramework - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceID;                                    //@synthesize sequenceID=_sequenceID - In the implementation block
@property (nonatomic,readonly) AXMPipelineContextInput * sourceInput; 
@property (nonatomic,readonly) id<AXMetricContainer> pipelineMetric; 
+(BOOL)supportsSecureCoding;
+(id)contextWithSourceParameters:(id)arg1 options:(id)arg2 ;
-(id)description;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(AXMVisionResult *)result;
-(void)setResult:(AXMVisionResult *)arg1 ;
-(NSObject*<NSSecureCoding>)userContext;
-(NSMutableArray *)features;
-(id<NSCopying>)cacheKey;
-(void)setFeatures:(NSMutableArray *)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)setUserContext:(NSObject*<NSSecureCoding>)arg1 ;
-(id)sceneObservation;
-(void)appendFeature:(id)arg1 ;
-(AXMVisionAnalysisOptions *)analysisOptions;
-(void)addEvaluatedFeatureType:(unsigned long long)arg1 ;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(id<AXMetricContainer>)pipelineMetric;
-(void)produceImage:(/*^block*/id)arg1 ;
-(VNImageRequestHandler *)visionImageRequestHandler;
-(void)setSequenceRequestManager:(AXMSequenceRequestManager *)arg1 ;
-(BOOL)sourceProvidesResults;
-(void)setEvaluationExclusivelyUsesVisionFramework:(BOOL)arg1 ;
-(long long)imageRegistrationState;
-(id)auxiliaryDetectors;
-(void)removeAllAuxiliaryDetectors;
-(void)didFinishProcessingContext;
-(NSArray *)resultHandlers;
-(BOOL)shouldCallCompletionHandlersForEmptyResultSet;
-(AXMSequenceRequestManager *)sequenceRequestManager;
-(void)addResultHandlers:(id)arg1 ;
-(void)willBeginProcessingContext;
-(BOOL)shouldProcessRemotely;
-(BOOL)shouldCallCompletionHandlersForEngineBusyError;
-(void)addResultHandler:(/*^block*/id)arg1 ;
-(id)initWithSourceParameters:(id)arg1 options:(id)arg2 ;
-(void)setAnalysisOptions:(AXMVisionAnalysisOptions *)arg1 ;
-(void)_commonInitWithDiagnosticsEnabled:(BOOL)arg1 ;
-(void)setAppliedImageOrientation:(NSNumber *)arg1 ;
-(AXMetricSession *)metricSession;
-(NSMutableSet *)evaluatedFeatureTypes;
-(NSNumber *)appliedImageOrientation;
-(NSArray *)effectiveTextDetectionLocales;
-(id)_makeRequestHandlerForInput:(id)arg1 options:(id)arg2 ;
-(void)setEffectiveTextDetectionLocales:(NSArray *)arg1 ;
-(void)setEvaluatedFeatureTypes:(NSMutableSet *)arg1 ;
-(void)setMetricSession:(AXMetricSession *)arg1 ;
-(void)setImageRegistrationState:(long long)arg1 ;
-(id)generateImageRepresentation;
-(id)visionImageRequestHandlerWithOptions:(id)arg1 ;
-(BOOL)visionImageRequestHandlerIsLoaded;
-(void)createSceneObservationIfNilWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_addSignificantEventFeatureGateIfNeededToFeature:(id)arg1 category:(id)arg2 minimumConfidence:(double)arg3 ;
-(id)generateFileNameForImageWithPrefix:(id)arg1 extension:(id)arg2 ;
-(AXMPipelineContextInput *)sourceInput;
-(void)addAuxiliaryDetector:(id)arg1 ;
-(void)setCacheKey:(id<NSCopying>)arg1 ;
-(void)setShouldCallCompletionHandlersForEngineBusyError:(BOOL)arg1 ;
-(void)setShouldCallCompletionHandlersForEmptyResultSet:(BOOL)arg1 ;
-(BOOL)evaluationExclusivelyUsesVisionFramework;
-(unsigned long long)sequenceID;
-(void)setSequenceID:(unsigned long long)arg1 ;
-(void)setVisionImageRequestHandler:(VNImageRequestHandler *)arg1 ;
@end

