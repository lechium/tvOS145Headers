/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BWCoreAnalyticsPayload.h>

@class NSString, NSDictionary;

@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {

	NSString* _portType;
	NSDictionary* _estimatorResults;

}

@property (nonatomic,retain) NSString * portType;                          //@synthesize portType=_portType - In the implementation block
@property (nonatomic,retain) NSDictionary * estimatorResults;              //@synthesize estimatorResults=_estimatorResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(NSString *)portType;
-(id)eventName;
-(id)eventDictionary;
-(void)setPortType:(NSString *)arg1 ;
-(void)setEstimatorResults:(NSDictionary *)arg1 ;
-(NSDictionary *)estimatorResults;
@end

