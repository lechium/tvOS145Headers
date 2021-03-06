/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCObject.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface VCQoSMonitorManager : VCObject {

	NSMutableArray* _monitors;
	NSMutableDictionary* _sources;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	long long _reportingInterval;
	NSMutableArray* _moitors;

}

@property (nonatomic,readonly) NSMutableArray * moitors;              //@synthesize moitors=_moitors - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(BOOL)doesQoSSourceExistForStreamToken:(id)arg1 ;
-(void)registerQoSReportingSourceForToken:(long long)arg1 ;
-(void)unregisterQoSReportingSourceForToken:(long long)arg1 ;
-(void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2 ;
-(NSMutableArray *)moitors;
@end

