/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <WiFiPolicy/WFLoggerBase.h>

@protocol OS_dispatch_queue;
@class NSDateFormatter, NSObject;

@interface WFLoggerCircularBuffer : WFLoggerBase {

	char* _wiFiLoggingLogBufferRef;
	long long _wiFiLoggingLogBufferIndex;
	long long _wiFiLoggingLogBufferMaxSize;
	unsigned _dumpId;
	NSDateFormatter* _tsFormatter;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(id)init;
-(void)dealloc;
-(void)dump;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char*)arg3 valist:(char*)arg4 ;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(CFStringRef)arg3 ;
@end

