/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject;

@interface TCPProgressProbe : NSObject {

	NSObject*<OS_dispatch_queue> lqueue;
	const char* interfaceName;
	unsigned state;
	unsigned long long _countPremiumModeClients;
	BOOL _localFlowTracking;
	unsigned long long _interfaceIndex;

}

@property (nonatomic,readonly) unsigned long long interfaceIndex;              //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (assign,nonatomic) BOOL localFlowTracking;                           //@synthesize localFlowTracking=_localFlowTracking - In the implementation block
+(void)initialize;
+(id)probeForInterface:(id)arg1 ;
+(id)progressPrettyPrintUtility:(xtcpprogress_indicators*)arg1 ;
+(void)forceInvalidationFor:(id)arg1 periods:(unsigned long long)arg2 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)interfaceIndex;
-(BOOL)manage:(unsigned)arg1 outValue:(unsigned*)arg2 ;
-(BOOL)localFlowTracking;
-(void)setLocalFlowTracking:(BOOL)arg1 ;
-(BOOL)interfaceMappingIsCurrent;
-(void)fetchMetricsForFlowsAged:(double)arg1 metrics:(xtcpprogress_indicators*)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)_initForInterface:(id)arg1 ;
@end

