/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>

@class VNSession, VNRequestPerformer, VNObservationsCache, NSObject;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {

	VNSession* _session;
	VNRequestPerformer* _requestPerformer;
	VNObservationsCache* _observationsCache;
	NSObject* modelContextObject;
	/*^block*/id _burstAnalysisLoggingCallback;

}

@property (retain) NSObject * modelContextObject; 
@property (nonatomic,copy) id burstAnalysisLoggingCallback;              //@synthesize burstAnalysisLoggingCallback=_burstAnalysisLoggingCallback - In the implementation block
+(void)requestForcedCleanup;
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
-(id)init;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(NSObject *)modelContextObject;
-(void)cancelAllRequests;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(BOOL)performRequests:(id)arg1 gatheredForensics:(id*)arg2 error:(id*)arg3 ;
-(void)setModelContextObject:(NSObject *)arg1 ;
-(id)burstAnalysisLoggingCallback;
-(void)setBurstAnalysisLoggingCallback:(id)arg1 ;
@end

