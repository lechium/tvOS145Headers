/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOTileRequester.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, NSObject;

@interface MKTileOverlayRequester : GEOTileRequester {

	BOOL _cancelled;
	NSMutableArray* _waiting;
	NSMutableSet* _running;
	NSMutableArray* _errors;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(unsigned char)tileProviderIdentifier;
+(unsigned)registerOverlay:(id)arg1 ;
+(void)unregisterOverlay:(unsigned)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(BOOL)isRunning;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)_cleanup;
-(void)_operationFinished:(id)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)_doWorkOrFinish;
-(void)_startOnWorkQueue;
@end

