/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>
#import <AVFCore/AVDestinationChangeResultSource.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, NSObject, AVOutputContextDestinationChange, NSString;

@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation <AVDestinationChangeResultSource> {

	AVWeakReference* _weakObserver;
	OpaqueFigRoutingContextRef _routingContext;
	CFStringRef _routeChangeID;
	/*^block*/id _routeChangeBlock;
	NSObject*<OS_dispatch_queue> _routeChangeIvarAccessQueue;
	AVOutputContextDestinationChange* _result;

}

@property (nonatomic,readonly) AVOutputContextDestinationChange * result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
-(AVOutputContextDestinationChange *)result;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 routeChangeID:(CFStringRef)arg2 routeChangeBlock:(/*^block*/id)arg3 ;
-(void)_setResultIfNotAlreadySet:(id)arg1 ;
-(void)_routeConfigUpdateWithID:(CFStringRef)arg1 endedWithReason:(CFStringRef)arg2 ;
@end

