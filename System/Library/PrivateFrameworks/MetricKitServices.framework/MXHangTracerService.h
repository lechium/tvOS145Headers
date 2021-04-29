/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricKitServices.framework/MetricKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKitServices/MXService.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MXHangTracerService : MXService {

	NSMutableArray* _hangTracerDataPaths;
	NSMutableArray* _unarchivedHangTracerData;
	NSObject*<OS_os_log> _MXHangTracerServiceLogHandle;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (retain) NSMutableArray * hangTracerDataPaths;                             //@synthesize hangTracerDataPaths=_hangTracerDataPaths - In the implementation block
@property (retain) NSMutableArray * unarchivedHangTracerData;                        //@synthesize unarchivedHangTracerData=_unarchivedHangTracerData - In the implementation block
@property (retain) NSObject*<OS_os_log> MXHangTracerServiceLogHandle;                //@synthesize MXHangTracerServiceLogHandle=_MXHangTracerServiceLogHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
+(id)sharedHangTracerService;
-(id)init;
-(BOOL)startService;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)stopService;
-(BOOL)diagnosticsSupported;
-(BOOL)diagnosticsAvailableForDate:(id)arg1 ;
-(id)getDiagnosticsForClient:(id)arg1 dateString:(id)arg2 ;
-(BOOL)_updateService;
-(void)unarchiveHangTracerDataForDateString:(id)arg1 ;
-(NSMutableArray *)hangTracerDataPaths;
-(void)setHangTracerDataPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)unarchivedHangTracerData;
-(void)setUnarchivedHangTracerData:(NSMutableArray *)arg1 ;
-(NSObject*<OS_os_log>)MXHangTracerServiceLogHandle;
-(void)setMXHangTracerServiceLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end
