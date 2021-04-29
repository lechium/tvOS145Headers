/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TITypingSessionAnalyzing.h>

@class NSString;

@interface TITypingSpeedDetailsAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2 ;
-(BOOL)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3 ;
-(void)registerEventSpec;
@end

