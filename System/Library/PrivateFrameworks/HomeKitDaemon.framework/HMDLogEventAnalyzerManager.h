/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface HMDLogEventAnalyzerManager : HMFObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _analyzerForAnalyzerClass;

}
+(id)sharedInstance;
-(id)init;
-(void)startAnalyzers;
-(void)addAnalyzer:(id)arg1 ;
-(id)fetchAnalyzerOfClassType:(Class)arg1 ;
@end

