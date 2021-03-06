/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTEventHandler.h>
#import <libobjc.A.dylib/MTPerfBaseMeasurementTransformation.h>

@class NSString;

@interface MTPageRenderEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MTPageRenderEventHandlerDelegate> delegate; 
-(id)eventType;
-(id)metricsDataWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4 ;
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(id)xpSessionDuration:(id)arg1 ;
-(id)xpSamplingPercentageUsers:(id)arg1 ;
-(id)metricsDataWithPerfMeasurement:(id)arg1 ;
@end

