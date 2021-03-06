/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraClipOperationDataSource.h>

@protocol HMDCameraClipOperationDataSource <NSObject>
@property (readonly) double operationTimeout; 
@required
-(double)operationTimeout;
-(void)submitOperationEvent:(id)arg1;
-(void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(/*^block*/id)arg3;
-(id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;

@end


@class NSString;

@interface HMDCameraClipOperationDataSource : HMFObject <HMDCameraClipOperationDataSource>

@property (readonly) double operationTimeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)operationTimeout;
-(void)submitOperationEvent:(id)arg1 ;
-(void)appendData:(id)arg1 toStreamingAssetAppendContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
@end

