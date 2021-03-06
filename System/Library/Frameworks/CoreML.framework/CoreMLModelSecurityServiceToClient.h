/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreMLModelSecurityServiceToClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSCountedSet, NSObject;

@interface CoreMLModelSecurityServiceToClient : NSObject <CoreMLModelSecurityServiceToClientProtocol> {

	NSMutableDictionary* _featureProviderMap;
	NSCountedSet* _featureProviderCount;
	NSObject*<OS_dispatch_queue> _serviceToClientQueue;

}

@property (nonatomic,retain) NSMutableDictionary * featureProviderMap;                       //@synthesize featureProviderMap=_featureProviderMap - In the implementation block
@property (nonatomic,retain) NSCountedSet * featureProviderCount;                            //@synthesize featureProviderCount=_featureProviderCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceToClientQueue;              //@synthesize serviceToClientQueue=_serviceToClientQueue - In the implementation block
-(id)init;
-(NSMutableDictionary *)featureProviderMap;
-(NSCountedSet *)featureProviderCount;
-(NSObject*<OS_dispatch_queue>)serviceToClientQueue;
-(void)setServiceToClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clientFeatureValueForName:(id)arg1 uniqueKeyForProvider:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)clientFeatureNames:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setFeatureProviderMap:(NSMutableDictionary *)arg1 ;
-(void)setFeatureProviderCount:(NSCountedSet *)arg1 ;
@end

